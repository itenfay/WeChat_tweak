//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ContactUpdateHelper, MMWebImageView, NSDictionary, UIButton, UIImageView, UIView;
@protocol WCRedEnvelopesReceiveHomeViewDelegate;

@interface WARedEnvelopesReceiveHomeView
{
    id <WCRedEnvelopesReceiveHomeViewDelegate> m_delegate;
    UIImageView *m_backgroundView;
    UIButton *openRedEnvelopesButton;
    UIImageView *openAnimationImageView;
    struct CGRect m_frame;
    NSDictionary *m_dicBaseInfo;
    _Bool m_bSuccessAnmation;
    UIView *oRedView;
    UIView *oTopHeaderView;
    UIView *imageView;
    UIButton *cancel2Button;
    MMWebImageView *maskImageView;
    ContactUpdateHelper *_m_nickNameHelper;
    ContactUpdateHelper *_m_successOpenNickNameHelper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ContactUpdateHelper *m_successOpenNickNameHelper; // @synthesize m_successOpenNickNameHelper=_m_successOpenNickNameHelper;
@property(retain, nonatomic) ContactUpdateHelper *m_nickNameHelper; // @synthesize m_nickNameHelper=_m_nickNameHelper;
- (id)convertToImage:(id)arg1;
- (void)showSuccessOpenAnimation;
- (void)removeView;
- (void)endAnimation;
- (void)showAnimation;
- (void)stopReceiveAnimation;
- (void)startReceiveAnimation;
- (void)OnOpenRedEnvelopes;
- (void)OnOpenList;
- (void)OnCancelButtonDone;
- (_Bool)accessibilityPerformEscape;
- (id)initWithFrame:(struct CGRect)arg1 andData:(id)arg2 delegate:(id)arg3;
- (_Bool)shouldShowDetailButtonWithIsSender:(_Bool)arg1 Type:(unsigned long long)arg2 ReceiveStutus:(unsigned long long)arg3 envelopeStutus:(unsigned long long)arg4 data:(id)arg5;
- (_Bool)shouldShowBottomDescriptionWithType:(unsigned long long)arg1 envelopeStutus:(unsigned long long)arg2;
- (void)refreshViewWithData:(id)arg1;

@end

