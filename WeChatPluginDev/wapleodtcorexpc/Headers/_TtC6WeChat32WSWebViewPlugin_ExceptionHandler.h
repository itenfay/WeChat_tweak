//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;

@interface _TtC6WeChat32WSWebViewPlugin_ExceptionHandler
{
    MISSING_TYPE *maxReloadTimes;
    MISSING_TYPE *reloadTimes;
    MISSING_TYPE *isReloading;
    MISSING_TYPE *isInFault;
    MISSING_TYPE *tipView;
    MISSING_TYPE *curProcessFlow;
    MISSING_TYPE *lastProcessFlow;
}

- (void).cxx_destruct;
- (id)init;
- (void)handleFailLoadWithCode:(long long)arg1 message:(id)arg2;
- (void)handleJSEvaluateErrorWithCode:(long long)arg1 message:(id)arg2;
- (void)handleTerminalError;
- (_Bool)webviewCannotReuse;
- (void)handleEvent:(id)arg1 userInfo:(id)arg2;
- (void)showFailLoadAndReentryTip;
- (void)showReloadTip;
- (void)showExceptionMockView;

@end

