//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@class MMAcceptAgreementCommonHeadView, WCButtonListView;

@interface SettingModifyEmailOnVerifyViewController
{
    MMAcceptAgreementCommonHeadView *m_commonHeadView;
    CDUnknownBlockType _onSendVerifyEmail;
    CDUnknownBlockType _onChangeEmail;
    WCButtonListView *_buttonListView;
}

@property(retain, nonatomic) WCButtonListView *buttonListView; // @synthesize buttonListView=_buttonListView;
@property(copy, nonatomic) CDUnknownBlockType onChangeEmail; // @synthesize onChangeEmail=_onChangeEmail;
@property(copy, nonatomic) CDUnknownBlockType onSendVerifyEmail; // @synthesize onSendVerifyEmail=_onSendVerifyEmail;
- (void)setM_commonHeadView:(id)arg1;
- (id)m_commonHeadView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
