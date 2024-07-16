import React, {useState} from 'react';
import './App.css';

function App() {

  let [글제목, 글제목변경] = useState(['남자 코트 추천','강남 우동 맛집', '분당 우동 맛집'])
  let [하트, 하트변경] =useState(0);
  
  function 제목바꾸기(){
    var newArray = [...글제목];
    newArray[0] = '여자 코트 추천';
    글제목변경(newArray)
  }

  return (
    <div className="App">
      <div className='black-nav'>
        <div>개발 Blog</div>
      </div>
    
      <button onClick={제목바꾸기}>btn</button>
      <div className="list">
        <h3>{글제목[0]} <span onClick={()=>{하트변경(하트+1)}}>♡</span>{하트}</h3>
        <p>2022.03.01, 서울 강남구</p>
        <hr/>
      </div>
      <div className="list">
        <h3>{글제목[1]}</h3>
        <p>2022.03.01, 서울 강남구</p>
        <hr/>
      </div>
      <div className="list">
        <h3>{글제목[2]}</h3>
        <p>2022.03.01, 서울 강남구</p>
        <hr/>
      </div>
      
      {/* <div className='modal'>
        <h2>제목</h2>
        <p>날짜</p>
        <p>상세내용</p>
      </div> */}
      <Modal />

    </div>
  );
}

function Modal(){
  return(
    <div className='modal'>
      <h2>제목</h2>
      <p>날짜</p>
      <p>상세내용</p>
    </div>
  )
}

export default App;
