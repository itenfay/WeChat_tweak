//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol TSKLogProtocol <NSObject>
- (void)logLevel:(unsigned long long)arg1 inPosition:(struct _TSKLogPosition)arg2 withMessage:(NSString *)arg3;
@end

