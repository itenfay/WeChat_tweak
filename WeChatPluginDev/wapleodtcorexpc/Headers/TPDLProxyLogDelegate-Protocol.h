//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol TPDLProxyLogDelegate <NSObject>

@optional
- (void)logDebug:(NSString *)arg1 line:(int)arg2 tag:(NSString *)arg3 msg:(NSString *)arg4;
- (void)logError:(NSString *)arg1 line:(int)arg2 tag:(NSString *)arg3 msg:(NSString *)arg4;
- (void)logWarn:(NSString *)arg1 line:(int)arg2 tag:(NSString *)arg3 msg:(NSString *)arg4;
- (void)logInfo:(NSString *)arg1 line:(int)arg2 tag:(NSString *)arg3 msg:(NSString *)arg4;
@end

