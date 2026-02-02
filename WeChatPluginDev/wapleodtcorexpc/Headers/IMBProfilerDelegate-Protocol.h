//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IMBProfilerDelegate <NSObject>
- (void)onProfilerFileGenerated:(NSString *)arg1 type:(NSString *)arg2;
@end

