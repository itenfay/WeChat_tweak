//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSValue, MMBaseJsApiHandler;

@interface MMPrefetcherMainJSContext
{
    MMBaseJsApiHandler *_baseJsApiHandler;
    JSValue *_cleanAtomCallback;
}

- (void).cxx_destruct;
@property(retain, nonatomic) JSValue *cleanAtomCallback; // @synthesize cleanAtomCallback=_cleanAtomCallback;
@property(retain, nonatomic) MMBaseJsApiHandler *baseJsApiHandler; // @synthesize baseJsApiHandler=_baseJsApiHandler;
- (void)internalInit;
- (void)callbackToContextWithEventType:(id)arg1 event:(id)arg2;
- (void)dispatchEventToTarget:(id)arg1 event:(id)arg2 extraData:(id)arg3;
- (id)invoke:(id)arg1 func:(id)arg2 params:(id)arg3;
- (void)cleanAtomString;
- (void)setupForCleanAtomString;
- (id)initWithJVM:(id)arg1 name:(id)arg2;

@end

