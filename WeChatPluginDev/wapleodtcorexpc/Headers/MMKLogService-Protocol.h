//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MMKLogService <NSObject>
- (void)error:(NSString *)arg1 content:(NSString *)arg2;
- (void)warning:(NSString *)arg1 content:(NSString *)arg2;
- (void)info:(NSString *)arg1 content:(NSString *)arg2;
- (void)debug:(NSString *)arg1 content:(NSString *)arg2;
- (void)verbose:(NSString *)arg1 content:(NSString *)arg2;
@end

