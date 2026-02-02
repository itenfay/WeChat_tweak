//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiveTaskId;

@protocol MMFinderLiveLandscapeBarrageSettingUpdateExt <NSObject>

@optional
- (void)onLandscapeBarrageSettingDisplayAlphaChanged:(double)arg1 taskId:(MMLiveTaskId *)arg2;
- (void)onLandscapeBarrageSettingDisplayRangeChanged:(double)arg1 taskId:(MMLiveTaskId *)arg2;
- (void)onLandscapeBarrageSettingEnableDisplayBarrageChanged:(_Bool)arg1 taskId:(MMLiveTaskId *)arg2;
- (void)onLandscapeBarrageSettingEnableBarrageChanged:(_Bool)arg1 taskId:(MMLiveTaskId *)arg2;
@end

