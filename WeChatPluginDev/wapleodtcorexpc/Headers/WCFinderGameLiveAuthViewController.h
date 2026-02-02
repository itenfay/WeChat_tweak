//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMAcceptAgreementCommonHeadView, MMUIButton, MMUILabel, MMWebImageView, NSString, UIButton, UIView;

@interface WCFinderGameLiveAuthViewController
{
    unsigned int _platformId;
    MMUILabel *_titleLabel;
    UIView *_anchorInfoView;
    MMWebImageView *_anchorAvatarView;
    MMUILabel *_anchorNameLabel;
    MMUILabel *_anchorDescLabel;
    UIButton *_cancelButton;
    MMUIButton *_okButton;
    NSString *_appId;
    NSString *_gameUserId;
    unsigned long long _authResultAction;
    NSString *_finderUsername;
    NSString *_ticket;
    NSString *_gameAuthTicket;
    unsigned long long _scene;
    long long _gameLiveEntryScene;
    unsigned long long _expiredTime;
    MMAcceptAgreementCommonHeadView *_authExpiredView;
    UIButton *_authExpiredButton;
    MMWebImageView *_authIconView;
    long long _authScene;
}

- (void).cxx_destruct;
@property(nonatomic) long long authScene; // @synthesize authScene=_authScene;
@property(retain, nonatomic) MMWebImageView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) UIButton *authExpiredButton; // @synthesize authExpiredButton=_authExpiredButton;
@property(retain, nonatomic) MMAcceptAgreementCommonHeadView *authExpiredView; // @synthesize authExpiredView=_authExpiredView;
@property(nonatomic) unsigned long long expiredTime; // @synthesize expiredTime=_expiredTime;
@property(nonatomic) long long gameLiveEntryScene; // @synthesize gameLiveEntryScene=_gameLiveEntryScene;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *gameAuthTicket; // @synthesize gameAuthTicket=_gameAuthTicket;
@property(retain, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(nonatomic) unsigned long long authResultAction; // @synthesize authResultAction=_authResultAction;
@property(nonatomic) unsigned int platformId; // @synthesize platformId=_platformId;
@property(retain, nonatomic) NSString *gameUserId; // @synthesize gameUserId=_gameUserId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) MMUIButton *okButton; // @synthesize okButton=_okButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) MMUILabel *anchorDescLabel; // @synthesize anchorDescLabel=_anchorDescLabel;
@property(retain, nonatomic) MMUILabel *anchorNameLabel; // @synthesize anchorNameLabel=_anchorNameLabel;
@property(retain, nonatomic) MMWebImageView *anchorAvatarView; // @synthesize anchorAvatarView=_anchorAvatarView;
@property(retain, nonatomic) UIView *anchorInfoView; // @synthesize anchorInfoView=_anchorInfoView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onClickMakeSureActionWithViewController:(id)arg1;
- (void)onClickDismissButton;
- (void)startGameLive;
- (id)getHeadSubTitleByErrorType:(int)arg1;
- (id)getHeadTitleByErrorType:(int)arg1;
- (void)handleAuthFailedWithType:(int)arg1;
- (CDUnknownBlockType)launchGameAppCallbackHandler;
- (void)handleAuthSuccessWith:(id)arg1 authCode:(id)arg2;
- (void)onClickOkButton:(id)arg1;
- (void)handleCancelAuth;
- (void)onClickCancelButton:(id)arg1;
- (void)layoutAuthExpiredView;
- (void)layoutAnchorInfoView;
- (id)navigationBarBackgroundColor;
- (void)layoutUI;
- (void)viewDidLoad;
- (id)initWithGameLiveAuthTicket:(id)arg1 expiredTime:(unsigned long long)arg2 authScene:(long long)arg3;
- (id)initWithAppId:(id)arg1 ticket:(id)arg2;
- (id)initWithAuthInfos:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

