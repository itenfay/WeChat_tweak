//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class PAGRenderStatistics;

@protocol PAGRenderStatisticsExt <NSObject>

@optional
- (void)onPagPerfHangModeStandardTrigger:(PAGRenderStatistics *)arg1;
- (void)onPagPerfTargetViewStateChange:(_Bool)arg1 perfMode:(long long)arg2 statistics:(PAGRenderStatistics *)arg3;
@end

