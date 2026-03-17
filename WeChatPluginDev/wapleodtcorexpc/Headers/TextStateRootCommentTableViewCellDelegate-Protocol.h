//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, TextStateRootCommentTableViewCell, WCFinderComment;

@protocol TextStateRootCommentTableViewCellDelegate <NSObject>

@optional
- (void)rootCommentCell:(TextStateRootCommentTableViewCell *)arg1 dislikeCommentSection:(unsigned long long)arg2 comment:(WCFinderComment *)arg3;
- (void)rootCommentCell:(TextStateRootCommentTableViewCell *)arg1 didClickMediaViewWithComment:(WCFinderComment *)arg2;
- (void)onClickSubCommentWeChat:(NSString *)arg1;
- (void)rootCommentCell:(TextStateRootCommentTableViewCell *)arg1 clickReplyUsername:(NSString *)arg2 atSection:(unsigned long long)arg3;
- (void)rootCommentCell:(TextStateRootCommentTableViewCell *)arg1 clickTextViewAtSection:(unsigned long long)arg2;
- (void)rootCommentCell:(TextStateRootCommentTableViewCell *)arg1 clickCommentRepostAtSection:(unsigned long long)arg2;
- (void)rootCommentCell:(TextStateRootCommentTableViewCell *)arg1 clickAvatarAtSection:(unsigned long long)arg2;
- (void)rootCommentCell:(TextStateRootCommentTableViewCell *)arg1 longPressAtSection:(unsigned long long)arg2;
- (void)rootCommentCell:(TextStateRootCommentTableViewCell *)arg1 clickFullRefContentTextAtSection:(unsigned long long)arg2 isExpand:(_Bool)arg3;
- (void)rootCommentCell:(TextStateRootCommentTableViewCell *)arg1 clickFullTextAtSection:(unsigned long long)arg2 isExpand:(_Bool)arg3;
- (void)rootCommentCell:(TextStateRootCommentTableViewCell *)arg1 likeCommentSection:(unsigned long long)arg2;
@end

