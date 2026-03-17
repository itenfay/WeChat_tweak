//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSMutableArray, WCStoryFriendCommentsListView;

@protocol WCStoryFriendCommentsListViewDataSource <NSObject>
- (NSMutableArray *)HeightForCommentsInStoryFriendCommentsListView:(WCStoryFriendCommentsListView *)arg1;
- (NSMutableArray *)CommentsInStoryFriendCommentsListView:(WCStoryFriendCommentsListView *)arg1;
@end

