import Hello from './Hello';
import React from 'react'
import './App.css';
import Hello2 from './Hello2';
import Wrapper from './Wrapper';
import Counter from './Counter';
import InputSample from './InputSample';

const App = () => {
  const name = '태경'
  const makeStyle = {
    backgroundColor: 'black',
    color: 'aqua',
    fontSize: '30px',
    padding: '1rem'
  }

  return (
    <>
      <Hello />
      <div style={makeStyle}>{name}</div>
      <div className='gray-box'></div>

      <Wrapper>
        <Hello2 name='react' color='red' isSpecial={false}/>
        <Hello2 color='pink'></Hello2>
      </Wrapper>

      <Counter />
      <InputSample />
    </>
  )
}

export default App