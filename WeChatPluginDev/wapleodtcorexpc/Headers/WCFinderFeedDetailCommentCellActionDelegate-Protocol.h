//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCFinderFeedCommentEventDelegate-Protocol.h"

@class NSIndexPath, NSString, WCFinderComment, WCFinderContact, WCFinderFeedSubCommentTableViewCell;

@protocol WCFinderFeedDetailCommentCellActionDelegate <WCFinderFeedCommentEventDelegate>

@optional
- (void)finderFeedSubCommentTableViewCell:(WCFinderFeedSubCommentTableViewCell *)arg1 likeComment:(WCFinderComment *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)finderFeedSubCommentTableViewCell:(WCFinderFeedSubCommentTableViewCell *)arg1 onLongPressAtIndexPath:(NSIndexPath *)arg2;
- (void)finderFeedSubCommentTableViewCell:(WCFinderFeedSubCommentTableViewCell *)arg1 clickReplyUsername:(NSString *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)onClickMentionNickname:(NSString *)arg1 comment:(WCFinderComment *)arg2;
- (void)onClickSubCommentWeChat:(NSString *)arg1;
- (void)onClickSubCommentFinder:(WCFinderContact *)arg1;
- (void)onClickSubCommentNickname:(NSIndexPath *)arg1;
- (void)onClickSubCommentAvatar:(NSIndexPath *)arg1;
- (void)onClickSubCommentReadMore:(NSIndexPath *)arg1 isExpand:(_Bool)arg2;
@end

