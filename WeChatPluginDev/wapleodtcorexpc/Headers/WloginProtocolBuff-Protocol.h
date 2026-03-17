//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSMutableData;

@protocol WloginProtocolBuff <NSObject>
- (int)encode:(NSMutableData *)arg1;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;
@end

