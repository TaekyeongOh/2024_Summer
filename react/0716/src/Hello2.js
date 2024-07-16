import React from 'react'

function Hello2({color, name, isSpecial}) {
  return (
    <>
        <div style={{color}}>
          {isSpecial ? <b>*</b> : <b>false</b>}
          안녕하세요 {name}</div>
    </>
  );
}
Hello2.defaultProps={
    name:'이름없음'
}
export default Hello2