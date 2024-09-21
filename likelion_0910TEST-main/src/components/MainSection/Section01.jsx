import React from 'react';
import Slider from 'react-slick';
import 'slick-carousel/slick/slick.css';
import 'slick-carousel/slick/slick-theme.css';

const Section01 = () => {
  const settings = {
    dots: true,
    infinite: true,
    slidesToShow: 1,
    slidesToScroll: 1,
    autoplay: true,
    autoplaySpeed: 500,
    rtl: false,
  };

  return (
    <div className='sec01'>
      <div className='sec01-left'>
        <div className="txt-box">
          <h2 className='ft_gia'>2022 개정<br /> 교육과정 교과서</h2>
          <p>지학사 교과서가 수업에 필요한 모든 것을 지원합니다.</p>
        </div>
      </div>
      <div className="sec01-right">
        <Slider {...settings}>
          <div>
            <div style={{ 
              backgroundImage: 'url(https://textbook.jihak.co.kr/img/bg_mvsimg6.png)', 
              backgroundSize: 'cover',
              backgroundPosition: 'center',
              width: '100%', 
              height: '800px' 
            }}></div>
          </div>
          <div>
            <div style={{ 
              backgroundImage: 'url(https://textbook.jihak.co.kr/img/bg_mvsimg5.png)', 
              backgroundSize: 'cover',
              backgroundPosition: 'center',
              width: '100%', 
              height: '800px' 
            }}></div>
          </div>
          <div>
            <div style={{ 
              backgroundImage: 'url(https://textbook.jihak.co.kr/img/bg_mvsimg4.png)', 
              backgroundSize: 'cover',
              backgroundPosition: 'center',
              width: '100%', 
              height: '800px' 
            }}></div>
          </div>
          <div>
            <div style={{ 
              backgroundImage: 'url(https://textbook.jihak.co.kr/img/bg_mvsimg3.png)', 
              backgroundSize: 'cover',
              backgroundPosition: 'center',
              width: '100%', 
              height: '800px' 
            }}></div>
          </div>
        </Slider>
      </div>
    </div>
  );
}

export default Section01;
