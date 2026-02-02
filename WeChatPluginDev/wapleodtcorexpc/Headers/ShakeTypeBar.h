//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton;
@protocol ShakeTypeBarDelegate;

@interface ShakeTypeBar
{
    MMUIButton *m_shakePeopleBtn;
    MMUIButton *m_shakeMusicBtn;
    unsigned int m_curSelectTag;
    id <ShakeTypeBarDelegate> m_delegate;
    _Bool isShowPeople;
    _Bool isShowShakeMusic;
    unsigned int uiBtnCount;
    _Bool _isUserClickedBtn;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isUserClickedBtn; // @synthesize isUserClickedBtn=_isUserClickedBtn;
@property(nonatomic) __weak id <ShakeTypeBarDelegate> m_delegate; // @synthesize m_delegate;
- (void)processBtnClicked:(id)arg1;
- (void)onBtnClicked:(id)arg1;
- (void)allTouchEvent:(id)arg1;
- (id)createBtnWithTitle:(id)arg1 Icon:(id)arg2 HighlightIcon:(id)arg3 Frame:(struct CGRect)arg4 Action:(SEL)arg5 Tag:(int)arg6;
- (void)initView;
- (void)updateSelfState;
- (void)updateData;
- (void)setShakeType:(long long)arg1;
- (id)init;

@end

