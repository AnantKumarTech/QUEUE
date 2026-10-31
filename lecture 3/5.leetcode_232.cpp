// class MyQueue
// {
//     stack<int> st;

// public:
//     MyQueue()
//     {
//     }

//     void push(int x)
//     {
//         st.push(x);
//     }

//     int pop()
//     {
//         stack<int> st1;
//         while (st.size() != 0)
//         {
//             st1.push(st.top());
//             st.pop();
//         }

//         int ans = st1.top();
//         st1.pop();
//         while (st1.size() != 0)
//         {
//             st.push(st1.top());
//             st1.pop();
//         }

//         return ans;
//     }

//     int peek()
//     {
//         stack<int> st1;
//         while (st.size() != 0)
//         {
//             st1.push(st.top());
//             st.pop();
//         }
//         int ans = st1.top();
//         while (st1.size() != 0)
//         {
//             st.push(st1.top());
//             st1.pop();
//         }

//         return ans;
//     }

//     bool empty()
//     {
//         if (st.empty())
//         {
//             return true;
//         }
//         else
//             return false;
//     }
// };