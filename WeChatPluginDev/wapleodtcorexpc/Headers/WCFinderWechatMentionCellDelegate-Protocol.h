//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderWechatMentionCell, WCFinderWechatMentionCellViewModel;

@protocol WCFinderWechatMentionCellDelegate <NSObject>

@optional
- (void)wechatMentionCellHeightChanged:(WCFinderWechatMentionCell *)arg1;
- (void)wechatMentionCell:(WCFinderWechatMentionCell *)arg1 didClickAggregatedExpandButton:(WCFinderWechatMentionCellViewModel *)arg2;
- (void)wechatMentionCell:(WCFinderWechatMentionCell *)arg1 didClickCommentLikeButton:(WCFinderWechatMentionCellViewModel *)arg2;
- (void)wechatMentionCell:(WCFinderWechatMentionCell *)arg1 didClickCommentReplyButton:(WCFinderWechatMentionCellViewModel *)arg2;
- (void)wechatMentionCell:(WCFinderWechatMentionCell *)arg1 didClickUserTag:(WCFinderWechatMentionCellViewModel *)arg2;
- (void)wechatMentionCell:(WCFinderWechatMentionCell *)arg1 didClickFollowButton:(WCFinderWechatMentionCellViewModel *)arg2;
- (void)wechatMentionCell:(WCFinderWechatMentionCell *)arg1 didClickMultiAvatarWithViewModel:(WCFinderWechatMentionCellViewModel *)arg2;
- (void)wechatMentionCell:(WCFinderWechatMentionCell *)arg1 didClickAvatarWithViewModel:(WCFinderWechatMentionCellViewModel *)arg2;
@end

