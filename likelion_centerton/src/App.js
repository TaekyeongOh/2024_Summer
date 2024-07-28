import React from 'react'
import { BrowserRouter, Route, Routes } from 'react-router-dom'
import Nav from './components/Section/Nav'
import Community from './components/Community/Community'
import List from './components/List/List'
import MyChracter from './components/MyChracter/MyChracter'
import Mypage from './components/Mypage/Mypage'

import Appset from './components/Mypage/Appset'
import CustomerCen from './components/Mypage/CustomerCen'
import CcQues1 from './components/Mypage/CcQuse1'
import CcQues2 from './components/Mypage/CcQuse2'
import EditInfo from './components/Mypage/EditInfo'
import Notice from './components/Mypage/Notice'
import ProfileEdit from './components/Mypage/ProfileEdit'
import Notice1 from './components/Mypage/Notice1'
import Notice2 from './components/Mypage/Notice2'
import PopUp from './components/Mypage/PopUp'

const App = () => {
    return (
        <BrowserRouter>
            <Routes>
                {/* 
                    해당 위치에서 Router을 관리합니다.
                    각자 맡은 부분에서 자유롭게 params를 추가하거나 페이지를 추가해 사용해주세요.
                */}
                <Route path='/' element={<Community />} />
                <Route path='/community' element={<Community />} />

                <Route path='/list' element={<List />} />

                <Route path='/mychracter' element={<MyChracter />} />

                <Route path='/mypage' element={<Mypage />} />
                <Route path='/popup' element={<PopUp />} />
                <Route path='/appset' element={<Appset />} />
                <Route path='/customercen' element={<CustomerCen />} />
                <Route path='/ccques1' element={<CcQues1 />} />
                <Route path='/ccques2' element={<CcQues2 />} />
                <Route path="/editinfo" element={<EditInfo />} />
                <Route path="/notice" element={<Notice />} />
                <Route path="/profileedit" element={<ProfileEdit />} />
                <Route path="/notice1" element={<Notice1 />} />
                <Route path="/notice2" element={<Notice2 />} />
            </Routes>
            <Nav />
        </BrowserRouter>
    )
}

export default App