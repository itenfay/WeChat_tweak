//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol WSTemplateBaseJSHandlerDelegate <NSObject>
- (void)ackWithCallBackID:(NSString *)arg1 errorMsg:(NSString *)arg2;
- (void)ackWithCallBackID:(NSString *)arg1 withParams:(NSDictionary *)arg2;
- (void)sendEventToJSBridge:(NSString *)arg1 params:(NSDictionary *)arg2;
@end

