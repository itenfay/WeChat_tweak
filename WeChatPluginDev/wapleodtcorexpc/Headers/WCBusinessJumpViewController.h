//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIViewController, NSDictionary, NSString;

@interface WCBusinessJumpViewController
{
    NSString *_url;
    NSString *_jumpUrl;
    MMUIViewController *_parentViewController;
    _Bool _sendreqWhenViewDidAppear;
    NSString *_errorMsg;
    NSDictionary *_dictTranslateInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool sendreqWhenViewDidAppear; // @synthesize sendreqWhenViewDidAppear=_sendreqWhenViewDidAppear;
@property(retain, nonatomic) NSDictionary *dictTranslateInfo; // @synthesize dictTranslateInfo=_dictTranslateInfo;
@property(copy, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
- (void)PresentModalViewController:(id)arg1 animated:(_Bool)arg2 forceFullScreen:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)handleRedirectUrlResult:(id)arg1;
- (void)handleRefreshTokenJump:(id)arg1;
- (void)handleBusinessJump:(id)arg1 extParams:(id)arg2 result:(id)arg3;
- (void)handleBackAppWithErr:(int)arg1;
- (void)onReturn;
- (void)showFailErrorMsg:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)showFailErrorMsg:(id)arg1;
- (_Bool)isTranslateLinkResultNeedCache:(id)arg1 andParameter:(id)arg2;
- (void)handleTranslateLinkResult:(id)arg1 isAsync:(_Bool)arg2 isSuccess:(_Bool)arg3 error:(id)arg4 andParameter:(id)arg5;
- (void)sendTranslateReq;
- (void)stopLoadingAndShowError:(id)arg1;
- (void)stopLoadingAndShowOK:(id)arg1;
- (void)setLoadingViewTitle:(id)arg1;
- (void)removeSelfFromNavigationController;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)initWithUrl:(id)arg1 translateInfo:(id)arg2 parentViewController:(id)arg3;
- (void)didReceiveMemoryWarning;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewDidLoad;

@end

