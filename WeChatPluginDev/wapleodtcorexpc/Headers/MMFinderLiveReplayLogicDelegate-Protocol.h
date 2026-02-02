//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, ResolutionInfo;

@protocol MMFinderLiveReplayLogicDelegate <NSObject>

@optional
- (void)onReplayLiveInfoUpdate;
- (void)onGetReplayPreviewLowBitrateUrl:(NSString *)arg1 resolutionChanged:(_Bool)arg2;
- (void)onGetReplayPreviewResolutionInfo:(ResolutionInfo *)arg1;
- (void)onGetReplayPreviewThumbList:(NSArray *)arg1;
- (void)onGetDetailDataItem;
- (void)onGetLiveInfo;
@end

