//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LiteAppJsApiCallback, UIViewController;

@interface LiteAppJsApiEmoticonStopSelect
{
    LiteAppJsApiCallback *_callBack;
    UIViewController *_controller;
}

- (void).cxx_destruct;
- (void)removeEmoticonPanel;
- (id)getEmoticonPanel;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;

@end

