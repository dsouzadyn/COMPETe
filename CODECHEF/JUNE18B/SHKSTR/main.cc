/***
 *          ___           ___
 *         /\  \         /\  \                                     _____
 *         \:\  \        \:\  \                                   /::\  \       ___           ___
 *          \:\  \        \:\  \                                 /:/\:\  \     /\__\         /\__\
 *      _____\:\  \   ___  \:\  \   ___     ___   ___     ___   /:/ /::\__\   /:/__/        /:/  /
 *     /::::::::\__\ /\  \  \:\__\ /\  \   /\__\ /\  \   /\__\ /:/_/:/\:|__| /::\  \       /:/__/
 *     \:\~~\~~\/__/ \:\  \ /:/  / \:\  \ /:/  / \:\  \ /:/  / \:\/:/ /:/  / \/\:\  \__   /::\  \
 *      \:\  \        \:\  /:/  /   \:\  /:/  /   \:\  /:/  /   \::/_/:/  /   ~~\:\/\__\ /:/\:\  \
 *       \:\  \        \:\/:/  /     \:\/:/  /     \:\/:/  /     \:\/:/  /       \::/  / \/__\:\  \
 *        \:\__\        \::/  /       \::/  /       \::/  /       \::/  /        /:/  /       \:\__\
 *         \/__/         \/__/         \/__/         \/__/         \/__/         \/__/         \/__/
 *
 *      @author      : Dylan Dsouza (dsouzadyn@gmail.com)
 *      @created     : Friday Jun 08, 2018 20:44:40 IST
 */

#include <bits/stdc++.h>

using namespace std;

struct Trie {
    bool isLeaf;

    map<char, Trie*> umap;
    int idx;
};

Trie* getNewTrieNode() {
    Trie* node = new Trie;
    node->isLeaf = false;
    return node;
}

void insert(Trie*& head, char *str, int idx) {
    if(head == nullptr)
        head = getNewTrieNode();

    // Start from root node
    Trie* curr = head;
    while(*str) {
        
        // Create a new node
        if(curr->umap.find(*str) == curr->umap.end())
            curr->umap[*str] = getNewTrieNode();
        curr->idx = idx;
        curr = curr->umap[*str];

        str++;
    }

    curr->isLeaf = true;
}

bool haveChildren(Trie const* curr) {
    for(auto it: curr->umap)
        if(it.second != nullptr) return true;
    return false;
}

bool search(Trie* head, char* str, int idx) {
    if(head == nullptr) return false;

    Trie* curr = head;
    int n = 1;
    while(*str && curr->umap[*str] != nullptr) {
        curr = curr->umap[*str];

        if(curr == nullptr) return false;
        cout << *str;
        str++;
        n++;
    }
    if(*str == 0) { cout << endl; return true; }
    while(curr->umap.size() != 0 && curr->idx <= idx && !curr->isLeaf) {
        auto it = curr->umap.begin();
        cout << it->first;
        curr = curr->umap[it->first];
    }
    cout << endl;

    return curr->isLeaf;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif

    Trie* head = nullptr;

    int n;
    cin >> n;
    char s[11];

    for(int i = 0; i < n; i++) {
        cin >> s;
        insert(head, s, i+1);
    }

    int q;
    cin >> q;
    while(q--) {
        cin >> n >> s;
        if(search(head, s, n));
    }

    return 0; 
}

