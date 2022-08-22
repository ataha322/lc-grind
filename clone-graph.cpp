/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {      
        unordered_map<Node*, Node*> oldToNew;
        if(node) return dfs(node, oldToNew);
        else return nullptr;
    }
    
    Node* dfs(Node* myNode, unordered_map<Node*, Node*>& oldToNew) {
            auto it = oldToNew.find(myNode);
            if (it != oldToNew.end())
                return it->second;
            
            Node* copy = new Node(myNode->val);
            oldToNew[myNode] = copy;
            
            for (auto neigh : myNode->neighbors) {
                copy->neighbors.push_back(dfs(neigh, oldToNew));
            }
            return copy;
        }
};
