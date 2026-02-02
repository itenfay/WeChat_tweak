//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;

@interface _TtC6WeChat29WCPayJSAPIRealnameVerifyLogic
{
    MISSING_TYPE *tinyAppEvent;
    MISSING_TYPE *params;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithData:(id)arg1;
- (void)OnRealnameVerifySuccessWithNotification:(id)arg1;
- (void)onRealnameVerifyCancel;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (void)stopLogic;
- (void)startLogic;
- (void)dealloc;
- (id)initWithTinyAppEvent:(id)arg1 params:(id)arg2;

@end

