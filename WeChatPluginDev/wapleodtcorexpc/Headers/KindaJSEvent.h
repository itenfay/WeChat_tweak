//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class JSEvent, NSString, WAJSEventHandler_BaseEvent;

@interface KindaJSEvent : NSObject
{
    WAJSEventHandler_BaseEvent *_tinyAppEvent;
    JSEvent *_webEvent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) JSEvent *webEvent; // @synthesize webEvent=_webEvent;
@property(retain, nonatomic) WAJSEventHandler_BaseEvent *tinyAppEvent; // @synthesize tinyAppEvent=_tinyAppEvent;
- (long long)kindaGetType;
- (void)kindaEndWithResult:(id)arg1 extraInfo:(id)arg2;
- (void)kindaCloseWebViewImpl:(_Bool)arg1 completion:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

