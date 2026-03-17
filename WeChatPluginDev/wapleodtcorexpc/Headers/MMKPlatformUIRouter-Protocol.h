//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol MMKPlatformUIRouter <NSObject>
- (void)openUrlScheme:(NSString *)arg1;
- (void)jointpayGotoExternApp:(NSString *)arg1 errcode:(int)arg2 returnKey:(NSString *)arg3 universalLink:(NSString *)arg4 contextID:(NSString *)arg5 needToken:(int)arg6 needShowPage:(int)arg7 openApiParam:(NSData *)arg8;
- (void)gotoExternApp:(NSString *)arg1 errcode:(int)arg2 returnKey:(NSString *)arg3 universalLink:(NSString *)arg4 contextID:(NSString *)arg5 needToken:(int)arg6 needShowPage:(int)arg7 openApiParam:(NSData *)arg8;
@end

