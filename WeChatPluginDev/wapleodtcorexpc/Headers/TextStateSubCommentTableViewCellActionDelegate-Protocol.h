//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSString, TextStateSubCommentTableViewCell, WCFinderComment;

@protocol TextStateSubCommentTableViewCellActionDelegate <NSObject>

@optional
- (void)subCommentTableViewCell:(TextStateSubCommentTableViewCell *)arg1 dislikeComment:(WCFinderComment *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)subCommentTableViewCell:(TextStateSubCommentTableViewCell *)arg1 didClickMediaViewWithComment:(WCFinderComment *)arg2;
- (void)subCommentTableViewCell:(TextStateSubCommentTableViewCell *)arg1 likeComment:(WCFinderComment *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)subCommentTableViewCell:(TextStateSubCommentTableViewCell *)arg1 clickReplyUsername:(NSString *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)onClickSubCommentWeChat:(NSString *)arg1;
- (void)onClickSubCommentAvatar:(NSIndexPath *)arg1;
- (void)subCommentTableViewCell:(TextStateSubCommentTableViewCell *)arg1 onLongPressAtIndexPath:(NSIndexPath *)arg2;
- (void)onClickSubCommentReadMore:(NSIndexPath *)arg1 isExpand:(_Bool)arg2;
@end

