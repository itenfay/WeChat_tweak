//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CirclesView, MMSayHelloButton, MMUILabel, ShakeMsgUnreadButton, UIImageView, UIView;
@protocol ShakeMainFrameDelegate;

@interface ShakeMainView
{
    UIView *m_hideView;
    _Bool m_bAnimating;
    MMSayHelloButton *m_btnSayHello;
    ShakeMsgUnreadButton *m_btnUnreadMsg;
    id <ShakeMainFrameDelegate> m_delegate;
    double m_middleY;
    UIImageView *_imageViewUp;
    UIImageView *_imageViewDown;
    UIView *_bkgViewUp;
    UIView *_bkgViewDown;
    UIImageView *_customImageView;
    UIView *_maskView;
    UIImageView *_defaultImageView;
    CirclesView *_circlesView;
    MMUILabel *_stateLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *stateLabel; // @synthesize stateLabel=_stateLabel;
@property(retain, nonatomic) CirclesView *circlesView; // @synthesize circlesView=_circlesView;
@property(retain, nonatomic) UIImageView *defaultImageView; // @synthesize defaultImageView=_defaultImageView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIImageView *customImageView; // @synthesize customImageView=_customImageView;
@property(retain, nonatomic) UIView *bkgViewDown; // @synthesize bkgViewDown=_bkgViewDown;
@property(retain, nonatomic) UIView *bkgViewUp; // @synthesize bkgViewUp=_bkgViewUp;
@property(retain, nonatomic) UIImageView *imageViewDown; // @synthesize imageViewDown=_imageViewDown;
@property(retain, nonatomic) UIImageView *imageViewUp; // @synthesize imageViewUp=_imageViewUp;
- (void)onShakeMsgUnreadCountChanged;
- (void)onFriendAssistUnreadCountChanged;
- (void)updateUnreadMsgBtnState;
- (void)updateSayHelloBtnState;
- (void)OnOpenUnreadMsgList;
- (void)OnOpenSayHello;
- (void)initUnreadMsgBtn;
- (void)initSayHelloBtn;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)bIsAnimating;
- (void)stopBackgroundAnimate;
- (void)startBackgroundAnimate;
- (void)startAnimationMerge:(CDUnknownBlockType)arg1;
- (void)onSplitAnimationEnd;
- (void)startAnimationSplit;
- (void)stopAllAnimation;
- (id)getShakeSingleView;
- (id)getHideView;
- (id)tryGenHQImage:(id)arg1;
- (id)getHideImage;
- (void)updateHideImage;
- (void)setErrorMsg:(id)arg1;
- (void)updateViewForLoading;
- (void)updateViewForNormal;
- (void)updateView;
- (void)didChangeOrientation;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setM_Delegate:(id)arg1;

@end

