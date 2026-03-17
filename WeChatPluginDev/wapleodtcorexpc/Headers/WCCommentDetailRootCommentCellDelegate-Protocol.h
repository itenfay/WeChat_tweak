//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCCommentDetailRootCommentCell, WCFinderComment, WCFinderContact;

@protocol WCCommentDetailRootCommentCellDelegate <NSObject>

@optional
- (void)rootCommentCell:(WCCommentDetailRootCommentCell *)arg1 dislikeCommentSection:(unsigned long long)arg2 comment:(WCFinderComment *)arg3;
- (void)rootCommentCell:(WCCommentDetailRootCommentCell *)arg1 didClickMediaViewWithComment:(WCFinderComment *)arg2;
- (void)onClickSubCommentWeChat:(NSString *)arg1;
- (void)onClickSubCommentFinder:(WCFinderContact *)arg1;
- (void)rootCommentCell:(WCCommentDetailRootCommentCell *)arg1 clickReplyUsername:(NSString *)arg2 atSection:(unsigned long long)arg3;
- (void)rootCommentCell:(WCCommentDetailRootCommentCell *)arg1 clickTextViewAtSection:(unsigned long long)arg2;
- (void)rootCommentCell:(WCCommentDetailRootCommentCell *)arg1 clickCommentRepostAtSection:(unsigned long long)arg2;
- (void)rootCommentCell:(WCCommentDetailRootCommentCell *)arg1 clickAvatarAtSection:(unsigned long long)arg2;
- (void)rootCommentCell:(WCCommentDetailRootCommentCell *)arg1 longPressAtSection:(unsigned long long)arg2;
- (void)rootCommentCell:(WCCommentDetailRootCommentCell *)arg1 clickFullRefContentTextAtSection:(unsigned long long)arg2 isExpand:(_Bool)arg3;
- (void)rootCommentCell:(WCCommentDetailRootCommentCell *)arg1 clickFullTextAtSection:(unsigned long long)arg2 isExpand:(_Bool)arg3;
- (void)rootCommentCell:(WCCommentDetailRootCommentCell *)arg1 likeCommentSection:(unsigned long long)arg2;
@end

