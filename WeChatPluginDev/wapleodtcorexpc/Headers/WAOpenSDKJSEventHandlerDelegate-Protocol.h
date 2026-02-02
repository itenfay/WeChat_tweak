//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, WAOpenSDKJSEventHandler_BaseEvent;

@protocol WAOpenSDKJSEventHandlerDelegate <NSObject>
- (void)endWithResult:(NSDictionary *)arg1 eventHandler:(WAOpenSDKJSEventHandler_BaseEvent *)arg2;
- (void)sendQRResult:(NSDictionary *)arg1 qrState:(long long)arg2 eventHandler:(WAOpenSDKJSEventHandler_BaseEvent *)arg3;
@end

