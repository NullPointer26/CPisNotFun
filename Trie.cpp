#include<bits/stdc++.h>
using namespace std;

const int ALPHABET_SIZE = 26;

struct TrieNode {
	struct TrieNode *children[ALPHABET_SIZE];
	bool isEndOfWord;
}

struct TrieNode* getTrieNode() {

	struct TrieNode* node = new TrieNode;
	node->isEndOfWord = false;
	for (int i = 0; i < ALPHABET_SIZE; i++)
		node->children[i] = nullptr;

	return node;
}


// TC: O(key.length())
void insert(struct TrieNode* root, string key) {

	struct TrieNode* curr = root;

	for (char c : key) {
		int index = c - 'a';
		if (!curr->children[index])
			curr->children[index] = getTrieNode();
		curr = curr->children[index];
	}

	curr->isEndOfWord = true;
}

// TC: O(key.length())
bool search(struct TrieNode* root, string key) {

	struct TrieNode* curr = root;

	for (char c : key) {
		int index = c - 'a';
		if (!curr->children[i])
			return false;
		curr = curr->children[i];
	}
	return curr && curr->isEndOfWord;
}

bool isEmpty(struct TrieNode* node) {

	for (int i = 0; i < ALPHABET_SIZE; i++) {
		if (node->children[i])
			return false;
	}
	return true;
}

// TC : O(key.length())
TreeNode* remove(struct TrieNode* root, string key, int depth = 0) {

	if (!root)
		return nullptr;

	if (depth == key.size()) {

		if (root->isEndOfWord)
			root->isEndOfWord = false;

		if (isEmpty(root)) {
			delete(root);
			root = nullptr;
		}

		return root;
	}

	int index = key[depth] - 'a';
	root->children[index] = remove(root->children[index], key, depth + 1);

	if (isEmpty(root) && root->isEndOfWord == false) {
		delete (root);
		root = NULL;
	}

	return root;
}

void recurSuggestions(struct TrieNode* node, string s, vector<string>&res) {

	if (node && node->isEndOfWord)
		res.push_back(s);

	for (int i = 0; i < ALPHABET_SIZE; i++) {
		if (node->children[i]) {
			s.push_back(i + 'a');
			recurSuggestions(node->children[i], s, res);
			s.pop_back();
		}
	}
}

vector<string> autoSuggestions(struct TrieNode* root, string prefix)
{
	struct TrieNode* curr = root;
	vector<string> res;

	for (char c : prefix) {
		if (!curr->children[c - 'a'])
			return res;
		curr = curr->children[i];
	}

	if (!curr || isEmpty(curr))
		return res;

	recurSuggestions(curr, prefix, res);

	return res;
}

int main() {

}