//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, UIButton, UIImageView, UIView;
@protocol WCAtomicRedEnvReceiveWelcomeViewDelegate;

@interface WCAtomicRedEnvReceiveWelcomeView
{
    id <WCAtomicRedEnvReceiveWelcomeViewDelegate> m_delegate;
    UIImageView *m_backgroundView;
    UIButton *openRedEnvelopesButton;
    UIImageView *openAnimationImageView;
    struct CGRect m_frame;
    NSDictionary *m_dicBaseInfo;
    _Bool m_bSuccessAnmation;
    UIView *oRedView;
    UIView *oTopHeaderView;
    UIImageView *imageView;
}

- (void).cxx_destruct;
- (void)showSuccessOpenAnimation;
- (void)removeView;
- (void)endAnimation;
- (void)showAnimation;
- (void)stopReceiveAnimation;
- (void)startReceiveAnimation;
- (void)OnShowDetail;
- (void)OnCancelButtonDone;
- (id)initWithFrame:(struct CGRect)arg1 andData:(id)arg2 delegate:(id)arg3;
- (void)refreshViewWithData:(id)arg1;

@end

