//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSString, WCCommentSubCommentTableViewCell, WCFinderComment, WCFinderContact;

@protocol WCCommentSubCommentTableViewCellActionDelegate <NSObject>

@optional
- (void)wcCommentSubCommentTableViewCell:(WCCommentSubCommentTableViewCell *)arg1 dislikeComment:(WCFinderComment *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)wcCommentSubCommentTableViewCell:(WCCommentSubCommentTableViewCell *)arg1 didClickMediaViewWithComment:(WCFinderComment *)arg2;
- (void)wcCommentSubCommentTableViewCell:(WCCommentSubCommentTableViewCell *)arg1 likeComment:(WCFinderComment *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)wcCommentSubCommentTableViewCell:(WCCommentSubCommentTableViewCell *)arg1 clickReplyUsername:(NSString *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)onClickSubCommentWeChat:(NSString *)arg1;
- (void)onClickSubCommentFinder:(WCFinderContact *)arg1;
- (void)onClickSubCommentAvatar:(NSIndexPath *)arg1;
- (void)feedDetailCommentCellOnLongPress:(NSIndexPath *)arg1;
- (void)onClickSubCommentReadMore:(NSIndexPath *)arg1 isExpand:(_Bool)arg2;
@end

