//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCStoryBubbleOrCommentAnimationView;

@protocol WCStoryBubbleOrCommentAnimationViewDelegate <NSObject>

@optional
- (void)onBubbleOrCommentShowAnimationDidClick:(WCStoryBubbleOrCommentAnimationView *)arg1 atIndex:(long long)arg2;
- (void)onBubbleOrCommentAnimationStartToPlayLastOneFirstTime:(WCStoryBubbleOrCommentAnimationView *)arg1;
- (void)onBubbleOrCommentAnimationViewHasPlayFirstReadedItem:(WCStoryBubbleOrCommentAnimationView *)arg1;
- (void)onBubbleOrCommentAnimationHasPlayOneTime:(WCStoryBubbleOrCommentAnimationView *)arg1;
@end

