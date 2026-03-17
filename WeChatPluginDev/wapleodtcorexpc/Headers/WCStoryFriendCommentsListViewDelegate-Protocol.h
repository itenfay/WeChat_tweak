//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSValue, UIPanGestureRecognizer, UIScrollView, UITableView, WCStoryComment;

@protocol WCStoryFriendCommentsListViewDelegate <NSObject>

@optional
- (void)StoryFriendCommentsListViewDidClickHeadViewWithComment:(WCStoryComment *)arg1;
- (void)StoryFriendCommentsListViewSeletedTableView:(UITableView *)arg1 indexPath:(NSIndexPath *)arg2;
- (NSValue *)StoryFriendCommentsListViewContentInset;
- (void)StoryFriendCommentsListViewScrollView:(UIScrollView *)arg1 receivePanGesture:(UIPanGestureRecognizer *)arg2;
@end

