// class Solution
// {
// public:
//     void rearrangeQueue(queue<int> &q)
//     {
//         int n = q.size() / 2;
//         stack<int> v;

//         for (int i = 1; i <= n; i++)
//         {
//             v.push(q.front());
//             q.pop();
//         }
//         while (v.size() != 0)
//         {
//             q.push(v.top());
//             v.pop();
//         }
//         for (int i = 1; i <= n; i++)
//         {
//             v.push(q.front());
//             q.pop();
//         }
//         for (int i = 0; i < n; i++)
//         {
//             q.push(v.top());
//             v.pop();

//             q.push(q.front());
//             q.pop();
//         }
//         while (q.size() > 0)
//         {
//             v.push(q.front());
//             q.pop();
//         }
//         while (v.size() > 0)
//         {
//             q.push(v.top());
//             v.pop();
//         }
//     }
// };