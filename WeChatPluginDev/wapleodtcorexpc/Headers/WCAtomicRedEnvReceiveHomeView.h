//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, UIButton, UIImageView, UIView;
@protocol WCAtomicRedEnvReceiveHomeViewDelegate;

@interface WCAtomicRedEnvReceiveHomeView
{
    id <WCAtomicRedEnvReceiveHomeViewDelegate> m_delegate;
    UIImageView *m_oBackgroundView;
    UIButton *m_oOpenRedEnvelopesButton;
    UIImageView *m_oOpenAnimationImageView;
    struct CGRect m_oFrame;
    NSDictionary *m_dicBaseInfo;
    _Bool m_bChecked;
    UIButton *checkedButton;
    _Bool m_bEndAnmation;
    UIView *m_oRedView;
    UIView *m_oTopHeaderView;
    UIImageView *imageView;
}

- (void).cxx_destruct;
- (void)OnCheckChanged;
- (void)showSuccessOpenAnimation;
- (void)removeView;
- (void)endAnimation;
- (void)showAnimation;
- (void)stopReceiveAnimation;
- (void)startReceiveAnimation;
- (void)OnOpenRedEnvelopes;
- (void)OnOpenList;
- (void)OnCancelButtonDone;
- (id)initWithFrame:(struct CGRect)arg1 andData:(id)arg2 delegate:(id)arg3;
- (void)refreshViewWithData:(id)arg1;

@end

