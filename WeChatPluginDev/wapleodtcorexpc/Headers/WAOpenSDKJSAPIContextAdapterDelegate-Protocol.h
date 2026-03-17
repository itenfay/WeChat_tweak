//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, WAJSEventHandler_BaseEvent, WAOpenSDKJSAPIContextAdapter;

@protocol WAOpenSDKJSAPIContextAdapterDelegate <NSObject>

@optional
- (void)onWAOpenSDKJSAPIContextAdapter:(WAOpenSDKJSAPIContextAdapter *)arg1 sendResultBeforeEnd:(NSDictionary *)arg2 resultType:(long long)arg3 handler:(WAJSEventHandler_BaseEvent *)arg4;
- (void)onWAOpenSDKJSAPIContextAdapter:(WAOpenSDKJSAPIContextAdapter *)arg1 endWithResult:(NSDictionary *)arg2 handler:(WAJSEventHandler_BaseEvent *)arg3;
@end

