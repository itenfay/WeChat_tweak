//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSStream;

@protocol NSStreamDelegate <NSObject>

@optional
- (void)stream:(NSStream *)arg1 handleEvent:(unsigned long long)arg2;
@end

