//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCStoryComment, WCStoryFriendCommentHeadCell;

@protocol WCStoryFriendCommmentHeadCellDelegate <NSObject>
- (void)StoryFriendCommmentHeadCellD:(WCStoryFriendCommentHeadCell *)arg1 didClickBodyViewWithComment:(WCStoryComment *)arg2;
- (void)StoryFriendCommmentHeadCellD:(WCStoryFriendCommentHeadCell *)arg1 didClickHeadViewWithComment:(WCStoryComment *)arg2;
@end

