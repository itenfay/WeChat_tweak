//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WebviewJSEventHandler_handleHaokanAction
{
}

- (void)asyncHandle_callbackEvent:(id)arg1 result:(id)arg2;
- (void)onSubmitMsgToNewLifeTL:(id)arg1 event:(id)arg2;
- (void)onHandleJumpToWowAction:(id)arg1;
- (void)openRecommendPage:(id)arg1;
- (void)onHandleCommonShareRecommendCloseCommentAction:(id)arg1;
- (void)onHandleCommonShareRecommendCommentAction:(id)arg1 event:(id)arg2;
- (void)cacheHaokanShareSource:(id)arg1;
- (void)onCheckSyncCommentPermission:(id)arg1;
- (void)onCheckSyncHanKanPermission:(id)arg1;
- (void)onShareToGoodLook:(id)arg1;
- (void)onHandleUpdateRecommendStatus:(id)arg1;
- (void)onHandleTurnOnHaoKanSwitch;
- (void)onHandleIsHaoKanSwitchOn:(id)arg1;
- (_Bool)actionIsLegal:(id)arg1;
- (_Bool)checkDataShouldBeDispatchWithAction:(id)arg1;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

@end

