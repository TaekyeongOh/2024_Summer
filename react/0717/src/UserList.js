import React from "react";

function User({user, onRemove}) {
    return (
        <div>
            <b>{user.username}</b>
            <span>{user.email}</span>

            <button onClick={() => onRemove(user.id)}>삭제</button>
        </div>
    )
}

function UserList(user, onRemove) {
    const users = [
      {
        id: 1,
        username: 'velopert',
        email: 'public.velopert@gmail.com'
      },
      {
        id: 2,
        username: 'tester',
        email: 'tester@example.com'
      },
      {
        id: 3,
        username: 'liz',
        email: 'liz@example.com'
      }
    ];
    return (
      <div>
        {users.map(user =>(
            <User user={user} key={user.id} onRemove={onRemove}/>
        ))}
      </div>
    );
  }
  
  export default UserList;