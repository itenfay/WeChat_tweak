//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIViewController, NSString, XMailCommitBindCgi;
@protocol XMailBindMailControlLogicDelegate;

@interface XMailBindMailControlLogic
{
    id <XMailBindMailControlLogicDelegate> _delegate;
    MMUIViewController *_rootViewController;
    NSString *_defaultMailAddr;
    XMailCommitBindCgi *_commitBindCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) XMailCommitBindCgi *commitBindCgi; // @synthesize commitBindCgi=_commitBindCgi;
@property(retain, nonatomic) NSString *defaultMailAddr; // @synthesize defaultMailAddr=_defaultMailAddr;
@property(nonatomic) __weak MMUIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic) __weak id <XMailBindMailControlLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onXMailPrepareBindCgi:(id)arg1 success:(_Bool)arg2 loginUrl:(id)arg3 wxRegMailAddr:(id)arg4 wxMailRegUrl:(id)arg5 wxMailHeadUrl:(id)arg6;
- (void)onXMailCommitBindCgiSuccess:(id)arg1 mailAddr:(id)arg2;
- (id)onWebViewPassParams:(id)arg1 Webview:(id)arg2;
- (void)onWebViewClickClose:(id)arg1;
- (void)MMUIViewControllerDidBePoped:(id)arg1;
- (void)MMUIViewControllerDidBeDismissed:(id)arg1;
- (void)exitIfBackToRootVC;
- (void)checkBeforeSwitchToMailAddr:(id)arg1 completionblock:(CDUnknownBlockType)arg2;
- (void)startCommitBindWxRegMailAddr:(id)arg1 fromViewController:(id)arg2;
- (void)stopLoading;
- (void)startLoading;
- (id)currentViewController;
- (void)showLoginMailWebViewWithUrl:(id)arg1 fromViewController:(id)arg2;
- (void)startLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

