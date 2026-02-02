//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString, WAAppConfirmWindow, WAAutoFillDataAuthorizePageSheet;

@interface WAJSEventHandler_requestAuthUserAutoFillData
{
    WAAppConfirmWindow *_confirmWindow;
    WAAutoFillDataAuthorizePageSheet *_pageSheet;
    unsigned int _clientVersion;
    NSDictionary *_dicInputParam;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int clientVersion; // @synthesize clientVersion=_clientVersion;
@property(retain) NSDictionary *dicInputParam; // @synthesize dicInputParam=_dicInputParam;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)handleApiEventEnd;
- (void)requestAutoFillAuthorize:(id)arg1 allow:(_Bool)arg2 authStatus:(unsigned int)arg3 clientVersion:(unsigned int)arg4;
- (void)_handleUserSelect:(_Bool)arg1;
- (void)onWAAutoFillDataAuthorizePageSheet:(id)arg1 didClickTextViewLinkURL:(id)arg2;
- (void)dismissPageSheet:(id)arg1;
- (void)onWAAutoFillDataAuthorizePageSheetDidClickRejectButton:(id)arg1;
- (void)onWAAutoFillDataAuthorizePageSheetDidClickAcceptButton:(id)arg1;
- (void)closeConfirmWindow;
- (void)onClickLink;
- (void)onConfirm:(_Bool)arg1;
- (void)onHandleApiEvent:(id)arg1;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

