//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WWKFContentSendMsgInfo;

@interface WWKFContentLogicController
{
    _Bool _bHasShowQuickSendMsg;
    NSString *_sessionTitle;
    NSString *_sessionSubTitle;
    WWKFContentSendMsgInfo *_sendMsgInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bHasShowQuickSendMsg; // @synthesize bHasShowQuickSendMsg=_bHasShowQuickSendMsg;
@property(retain, nonatomic) WWKFContentSendMsgInfo *sendMsgInfo; // @synthesize sendMsgInfo=_sendMsgInfo;
@property(copy, nonatomic) NSString *sessionSubTitle; // @synthesize sessionSubTitle=_sessionSubTitle;
@property(copy, nonatomic) NSString *sessionTitle; // @synthesize sessionTitle=_sessionTitle;
- (void)onWillPushFromNavigationController;
- (void)OnTagLink:(id)arg1 messageWrap:(id)arg2;
- (void)ViewDidAppear;
- (void)onWWKFContactUpdated:(id)arg1;
- (void)onClickQuickSendSessionMsgBtn:(id)arg1;
- (void)onHideQuickSendSessionMsgBtn;
- (_Bool)isNeedShowQuickSendMsgView;
- (void)CustomToolViewEX:(id)arg1 inputPresenter:(id)arg2;
- (void)OpenDetailInfo;
- (id)getLeftBarButton;
- (void)setNeedUpdateTitle:(_Bool *)arg1;
- (void)initViewController;
- (id)getSubTitle;
- (id)GetUsrTitle;
- (id)init;

@end

