//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UITableViewCell, WCFinderNotifyCenterCellViewModel, WCFinderNotifyUnifiedTableViewCell;

@protocol WCFinderNotifyUnifiedCellDelegate <NSObject>
- (int)notifyCenterCellCommentScene:(UITableViewCell *)arg1;

@optional
- (void)notifyCenterCellDidClickAggregatedExpandButton:(WCFinderNotifyUnifiedTableViewCell *)arg1;
- (void)notifyCenterCell:(WCFinderNotifyUnifiedTableViewCell *)arg1 replyCommentErrorWithMsg:(NSString *)arg2;
- (void)notifyCenterCellReplyCommentSuccesss:(WCFinderNotifyUnifiedTableViewCell *)arg1;
- (void)notifyCenterCell:(WCFinderNotifyUnifiedTableViewCell *)arg1 emitThanksMagicAnimationWithStyle:(unsigned long long)arg2;
- (void)notifyCenterCell:(WCFinderNotifyUnifiedTableViewCell *)arg1 didClickFollowButtonWithViewModel:(WCFinderNotifyCenterCellViewModel *)arg2;
- (void)notifyCenterCell:(WCFinderNotifyUnifiedTableViewCell *)arg1 didClickUserRelationshipTagWithViewModel:(WCFinderNotifyCenterCellViewModel *)arg2;
- (void)notifyCenterCell:(WCFinderNotifyUnifiedTableViewCell *)arg1 didClickCommentLikeButtonWithViewModel:(WCFinderNotifyCenterCellViewModel *)arg2;
- (void)notifyCenterCell:(WCFinderNotifyUnifiedTableViewCell *)arg1 didClickCommentReplyButtonWithViewModel:(WCFinderNotifyCenterCellViewModel *)arg2;
- (void)notifyCenterCell:(WCFinderNotifyUnifiedTableViewCell *)arg1 didClickThanksButtonWithThanksState:(_Bool)arg2;
- (void)notifyCenterCellHeightChanged:(WCFinderNotifyUnifiedTableViewCell *)arg1;
- (void)notifyCenterCell:(UITableViewCell *)arg1 didClickThumbWithViewModel:(WCFinderNotifyCenterCellViewModel *)arg2;
- (void)notifyCenterCell:(WCFinderNotifyUnifiedTableViewCell *)arg1 didClickMultiAvatarWithViewModel:(WCFinderNotifyCenterCellViewModel *)arg2;
- (void)notifyCenterCell:(UITableViewCell *)arg1 didClickAvatarWithViewModel:(WCFinderNotifyCenterCellViewModel *)arg2;
@end

