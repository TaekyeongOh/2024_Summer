import React from 'react';
import Slider from 'react-slick';
import 'slick-carousel/slick/slick.css';
import 'slick-carousel/slick/slick-theme.css';

const Section01 = () => {
  const settings = {
    autoplay: true,
    autoplaySpeed: 1500,
    arrows: false,
    centerMode: true,
    slidesToShow: 1,
    slidesToScroll: 1
    };

  return (
    <div className='sec01'>
      <div className='sec01-left'>
        <div className="txt-box">
          <h2 className='ft_gia'>2022 개정<br /> 교육과정 교과서</h2>
          <p>지학사 교과서가 수업에 필요한 모든 것을 지원합니다.</p>
        </div>
      </div>
      <div className="mpr-slide">
        <div className="tit-box">
          <h5 className='ft_out'>EVENT</h5>
        </div>
      </div>
      <div className="sec01-right">
        <Slider {...settings}>
          <div className="slide">
            <img src="http://fillmurray.com/300/300" alt="Slide 1" className="img-responsive" />
            <h1>slide 1</h1>
          </div>
          <div className="slide">
            <img src="http://fillmurray.com/300/300" alt="Slide 2" className="img-responsive" />
            <h1>slide 2</h1>
          </div>
          <div className="slide">
            <img src="http://fillmurray.com/300/300" alt="Slide 3" className="img-responsive" />
            <h1>slide 3</h1>
          </div>
          <div className="slide">
            <img src="http://fillmurray.com/300/300" alt="Slide 4" className="img-responsive" />
            <h1>slide 4</h1>
          </div>
          <div className="slide">
            <img src="http://fillmurray.com/300/300" alt="Slide 5" className="img-responsive" />
            <h1>slide 5</h1>
          </div>
        </Slider>
      </div>
    </div>
  );
}

export default Section01;
