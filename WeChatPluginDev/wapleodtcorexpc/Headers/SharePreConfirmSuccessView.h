//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImageView;

@interface SharePreConfirmSuccessView
{
    UIImageView *m_backgroundView;
    long long m_previousOrientation;
    NSString *_sendSuccessText;
    NSString *_backToAppString;
    NSString *_stayAtWeChatString;
    CDUnknownBlockType _OnClickBackToApp;
    CDUnknownBlockType _OnClickStayAtWeChat;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType OnClickStayAtWeChat; // @synthesize OnClickStayAtWeChat=_OnClickStayAtWeChat;
@property(copy, nonatomic) CDUnknownBlockType OnClickBackToApp; // @synthesize OnClickBackToApp=_OnClickBackToApp;
@property(retain, nonatomic) NSString *stayAtWeChatString; // @synthesize stayAtWeChatString=_stayAtWeChatString;
@property(retain, nonatomic) NSString *backToAppString; // @synthesize backToAppString=_backToAppString;
@property(retain, nonatomic) NSString *sendSuccessText; // @synthesize sendSuccessText=_sendSuccessText;
- (void)stayAtWeChat;
- (void)notifySendMsgOK;
- (void)showSendSuccessView;
- (id)genBackgroundView;
- (void)hideView:(_Bool)arg1;
- (void)showView:(_Bool)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)internalInit;

@end

