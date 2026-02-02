//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WeVisLogAdapterDelegate <NSObject>
- (void)logWithLevel:(long long)arg1 module:(const char *)arg2 file:(const char *)arg3 line:(int)arg4 funcName:(const char *)arg5 message:(NSString *)arg6;
@end

