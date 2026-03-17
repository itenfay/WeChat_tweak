//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveTaskId, NSArray, NSString, ResolutionInfo;

@protocol WCFinderLiveReplayPreviewSrcDataExt <NSObject>
- (void)onReplayPreviewResolutionInfoUpdated:(ResolutionInfo *)arg1 taskId:(MMFinderLiveTaskId *)arg2;
- (void)onReplayPreviewLowBitrateUrlUpdated:(NSString *)arg1 resolutionChanged:(_Bool)arg2 taskId:(MMFinderLiveTaskId *)arg3;
- (void)onReplayPreviewThumbListAppended:(NSArray *)arg1 taskId:(MMFinderLiveTaskId *)arg2;
@end

