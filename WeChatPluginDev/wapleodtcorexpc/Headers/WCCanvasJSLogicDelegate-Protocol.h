//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol WCCanvasJSLogicDelegate <NSObject>
- (_Bool)onAdH5FuncDispatched:(NSDictionary *)arg1 callbackID:(NSString *)arg2;
- (_Bool)onOperateOpenUrlInWebview:(NSDictionary *)arg1 callbackID:(NSString *)arg2;
@end

