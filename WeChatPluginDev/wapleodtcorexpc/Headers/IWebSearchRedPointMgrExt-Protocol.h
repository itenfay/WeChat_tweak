//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, WSRedPointInfo;

@protocol IWebSearchRedPointMgrExt <NSObject>

@optional
- (void)onRemoveRecommendNumberReddot:(NSDictionary *)arg1;
- (void)onRemoveRecommendReddot;
- (void)onTopStoryRecieveSettingReddot;
- (void)onTopStoryUpdateReddotFinish;
- (void)onWebRecommendTabDataChange:(_Bool)arg1;
- (void)onWebRecommendNotifyMsgToJs:(NSDictionary *)arg1;
- (void)onWebRecommendReddotNotifyToJs:(NSDictionary *)arg1;
- (void)onWebRecommendNumRedPointChange:(NSDictionary *)arg1;
- (void)onWebSearchRedPointChange:(WSRedPointInfo *)arg1;
@end

