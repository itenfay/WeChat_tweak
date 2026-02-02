//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol MMLiveUniqueTaskId;

@protocol MMFinderLiveKTVProgressExt <NSObject>

@optional
- (void)onLiveKTVProgressPositionChange:(int)arg1 uniqueId:(NSString *)arg2 taskId:(id <MMLiveUniqueTaskId>)arg3;
- (void)onLiveKTVProgressRefresh:(long long)arg1 currFPS:(long long)arg2 taskId:(id <MMLiveUniqueTaskId>)arg3;
@end

