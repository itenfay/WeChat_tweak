//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MMTCPHandleLogDelegate <NSObject>
- (void)logDebug:(NSString *)arg1 target:(long long)arg2;
- (void)logWarning:(NSString *)arg1 target:(long long)arg2;
- (void)logInfo:(NSString *)arg1 target:(long long)arg2;
- (void)logError:(NSString *)arg1 target:(long long)arg2;
@end

