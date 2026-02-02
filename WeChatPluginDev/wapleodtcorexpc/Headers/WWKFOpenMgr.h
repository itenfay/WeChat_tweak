//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WWKFContactOpLogic;

@interface WWKFOpenMgr
{
    WWKFContactOpLogic *_contactOpLogic;
}

+ (_Bool)shouldShowErrWithhErrCode:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WWKFContactOpLogic *contactOpLogic; // @synthesize contactOpLogic=_contactOpLogic;
- (void)doCallbackResultWithErrCode:(long long)arg1 context:(id)arg2;
- (void)doShowAlertWithSvrControlErrMsg:(id)arg1 context:(id)arg2;
- (id)dismissFlowViewControllerWhenFlowWorks:(id)arg1;
- (void)processFlowContextWhenFlowUIWorks:(id)arg1;
- (void)doJumpWWKFMsgLogicViewController:(id)arg1 navigationController:(id)arg2 inScene:(int)arg3 showPageSheet:(_Bool)arg4;
- (void)jumpToWWKFMsgLogicViewControllerWithContact:(id)arg1 context:(id)arg2;
- (void)requestAddContactWithContact:(id)arg1 context:(id)arg2 spamContext:(id)arg3 finderContext:(id)arg4;
- (void)showUserConfirmAddContactWithContact:(id)arg1 context:(id)arg2;
- (void)handleFetchContactResp:(id)arg1 context:(id)arg2 spamContext:(id)arg3 finderContext:(id)arg4;
- (void)handleWWKFContactFlowWithContact:(id)arg1 viewController:(id)arg2 scene:(int)arg3 completeBlock:(CDUnknownBlockType)arg4;
- (void)handleWWKFContactFlowWithUrl:(id)arg1 viewController:(id)arg2 scene:(int)arg3 openExtInfo:(id)arg4 completeBlock:(CDUnknownBlockType)arg5;
- (void)handleWWKFContactFlowWithUrl:(id)arg1 viewController:(id)arg2 scene:(int)arg3 completeBlock:(CDUnknownBlockType)arg4;
- (void)cancelCurrentWWKFRequest;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

