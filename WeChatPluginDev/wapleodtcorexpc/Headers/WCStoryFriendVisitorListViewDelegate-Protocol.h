//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSValue, UIPanGestureRecognizer, UIScrollView, WCStoryComment;

@protocol WCStoryFriendVisitorListViewDelegate <NSObject>
- (void)StoryFriendVisitorListViewDidClickHeadViewWithComment:(WCStoryComment *)arg1;
- (NSValue *)StoryFriendVisitorListViewCollectionViewContentInset;
- (void)StoryFriendVisitorListViewScrollView:(UIScrollView *)arg1 receivePanGesture:(UIPanGestureRecognizer *)arg2;
@end

