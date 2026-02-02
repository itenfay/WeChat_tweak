//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSMutableArray, NSString;

@protocol ITopStoryColikeExt <NSObject>

@optional
- (void)onRequestColikePostEnd:(_Bool)arg1 errorMsg:(NSString *)arg2;
- (void)onAllRequestColikeBlockEnd:(long long)arg1 sucCount:(long long)arg2 failCount:(long long)arg3 failInfo:(NSArray *)arg4;
- (void)onRequestGetColikeBlockListEndResult:(_Bool)arg1 withType:(unsigned int)arg2 list:(NSMutableArray *)arg3;
- (void)onRequestGetColikeBlockListEndResultBeforeConfigData:(_Bool)arg1 withType:(unsigned int)arg2 list:(NSMutableArray *)arg3 oriList:(NSMutableArray *)arg4;
@end

