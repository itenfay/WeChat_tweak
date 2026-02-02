//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCDataItem;

@protocol IWCAdSocialLikeLogicExt <NSObject>

@optional
- (void)onMainMediaPlayStateChanged:(WCDataItem *)arg1 contentItemScene:(unsigned long long)arg2 isPlaying:(_Bool)arg3;
- (void)onFireworkCheerCommentAnimationStarted:(WCDataItem *)arg1 contentItemScene:(unsigned long long)arg2;
- (void)onFireworkCheerRealLike:(WCDataItem *)arg1 contentItemScene:(unsigned long long)arg2;
- (void)onContinuousLikeCountChanged:(WCDataItem *)arg1 contentItemScene:(unsigned long long)arg2 likeCount:(int)arg3;
- (void)onContinuousLikeStateChanged:(WCDataItem *)arg1 contentItemScene:(unsigned long long)arg2 likeState:(int)arg3;
@end

