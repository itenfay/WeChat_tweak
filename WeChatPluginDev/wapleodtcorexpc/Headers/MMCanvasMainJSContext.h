//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMBaseJsApiHandler, NSString;

@interface MMCanvasMainJSContext
{
    MMBaseJsApiHandler *_baseJsApiHandler;
    CDUnknownBlockType _postMessageCb;
    NSString *_systemInfoJsonStr;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *systemInfoJsonStr; // @synthesize systemInfoJsonStr=_systemInfoJsonStr;
@property(copy, nonatomic) CDUnknownBlockType postMessageCb; // @synthesize postMessageCb=_postMessageCb;
@property(retain, nonatomic) MMBaseJsApiHandler *baseJsApiHandler; // @synthesize baseJsApiHandler=_baseJsApiHandler;
- (void)dispatchEvent:(id)arg1 eventInfo:(id)arg2;
- (void)dispatchCallback:(id)arg1 params:(id)arg2;
- (void)injectNativeContext;
- (void)initBaseJsApiHandler;
- (void)dealloc;
- (id)initWithJVM:(id)arg1 name:(id)arg2 postMessageCb:(CDUnknownBlockType)arg3 systemInfoJson:(id)arg4;

@end

