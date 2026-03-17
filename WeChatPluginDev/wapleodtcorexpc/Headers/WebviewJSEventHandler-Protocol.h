//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class JSEvent, NSDictionary, WebviewJSEventHandlerFacade;

@protocol WebviewJSEventHandler <NSObject>
- (void)OnWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)handleJSEvent:(JSEvent *)arg1 HandlerFacade:(WebviewJSEventHandlerFacade *)arg2 ExtraData:(NSDictionary *)arg3;
@end

