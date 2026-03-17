//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol IWCTimeLineSessionExt <NSObject>

@optional
- (void)onTimeLineSessionEnd;
- (void)onTimeLineSessionStart;
- (void)onTimeLineSessionStat:(NSString *)arg1;
- (void)onTimeLineSessionExposure:(NSArray *)arg1;
@end

