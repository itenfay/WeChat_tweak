//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GameCenterJsApiFacade, NSMutableSet, NSString;
@protocol GameCenterJSEventLogicHandlerDelegate;

@interface GameCenterJSEventLogicHandler : NSObject
{
    GameCenterJsApiFacade *_jsapiFacade;
    id <GameCenterJSEventLogicHandlerDelegate> _callDelegate;
    NSMutableSet *_jsEventSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *jsEventSet; // @synthesize jsEventSet=_jsEventSet;
@property(nonatomic) __weak id <GameCenterJSEventLogicHandlerDelegate> callDelegate; // @synthesize callDelegate=_callDelegate;
- (id)webviewController;
- (id)GetCurrentWebviewViewController;
- (void)onEndEvent:(id)arg1 withResult:(id)arg2;
- (id)jsEventWithFunction:(id)arg1 params:(id)arg2 callBackID:(id)arg3 eventInvokeContext:(id)arg4;
- (void)jsapiCallFromJSService:(id)arg1 params:(id)arg2 callbackId:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

