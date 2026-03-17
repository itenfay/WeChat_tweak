//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol TAVLoger <NSObject>
- (void)logError:(NSString *)arg1;
- (void)logWarning:(NSString *)arg1;
- (void)logDebug:(NSString *)arg1;
- (void)logInfo:(NSString *)arg1;
@end

