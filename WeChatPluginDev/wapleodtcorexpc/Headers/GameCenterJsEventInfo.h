//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class JSEvent, NSDictionary, NSString, WebviewJSEventHandler_gameCenterFacade;

@interface GameCenterJsEventInfo : NSObject
{
    NSString *_methodName;
    NSString *_identifier;
    NSDictionary *_params;
    JSEvent *_jsEvent;
    WebviewJSEventHandler_gameCenterFacade *_eventHandler;
}

- (void).cxx_destruct;
@property(nonatomic) __weak WebviewJSEventHandler_gameCenterFacade *eventHandler; // @synthesize eventHandler=_eventHandler;
@property(retain, nonatomic) JSEvent *jsEvent; // @synthesize jsEvent=_jsEvent;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *methodName; // @synthesize methodName=_methodName;
- (id)getResultDictWithMessage:(id)arg1 success:(_Bool)arg2 dict:(id)arg3;
- (void)failWithError:(id)arg1;
- (void)completeWithMessage:(id)arg1 success:(_Bool)arg2 dict:(id)arg3;
- (void)completeWithMessage:(id)arg1 success:(_Bool)arg2;
- (void)failWithMessage:(id)arg1;
- (void)successWithMessage:(id)arg1;

@end

