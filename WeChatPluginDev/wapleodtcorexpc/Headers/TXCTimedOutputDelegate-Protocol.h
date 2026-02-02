//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSObject, TXCTimedOutput;

@protocol TXCTimedOutputDelegate <NSObject>
- (void)timedOutput:(TXCTimedOutput *)arg1 outputObject:(NSObject *)arg2;
@end

