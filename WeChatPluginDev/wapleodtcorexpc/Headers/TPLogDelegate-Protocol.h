//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol TPLogDelegate <NSObject>

@optional
- (void)logWithLevel:(int)arg1 tag:(NSString *)arg2 file:(const char *)arg3 function:(const char *)arg4 line:(unsigned long long)arg5 content:(NSString *)arg6;
- (void)logWithLevel:(int)arg1 tag:(NSString *)arg2 file:(const char *)arg3 function:(const char *)arg4 line:(unsigned long long)arg5 format:(NSString *)arg6 args:(char *)arg7;
@end

