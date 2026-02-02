//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCFinderFeedCommentEventDelegate-Protocol.h"

@class FinderJumpInfo_Style, NSIndexPath, NSString, WCFinderComment, WCFinderContact, WCFinderFeedDetailRootCommentCell, WCFinderJumpInfo;

@protocol WCFinderFeedDetailRootCommentCellDelegate <WCFinderFeedCommentEventDelegate>

@optional
- (NSIndexPath *)indexPathOfRootCommentCell:(WCFinderFeedDetailRootCommentCell *)arg1;
- (int)rootCommentCellGetCommentScene:(WCFinderFeedDetailRootCommentCell *)arg1;
- (void)rootCommentCell:(WCFinderFeedDetailRootCommentCell *)arg1 clickJumpInfo:(WCFinderJumpInfo *)arg2 style:(FinderJumpInfo_Style *)arg3;
- (void)onClickMentionNickname:(NSString *)arg1 comment:(WCFinderComment *)arg2;
- (void)onClickSubCommentWeChat:(NSString *)arg1;
- (void)onClickSubCommentFinder:(WCFinderContact *)arg1;
- (void)rootCommentCell:(WCFinderFeedDetailRootCommentCell *)arg1 clickCutSameVideoComment:(WCFinderComment *)arg2;
- (void)rootCommentCell:(WCFinderFeedDetailRootCommentCell *)arg1 clickTemplatePreviewWithComment:(WCFinderComment *)arg2;
- (void)rootCommentCell:(WCFinderFeedDetailRootCommentCell *)arg1 clickReplyUsername:(NSString *)arg2 atSection:(unsigned long long)arg3;
- (void)rootCommentCell:(WCFinderFeedDetailRootCommentCell *)arg1 clickTextViewAtSection:(unsigned long long)arg2;
- (void)rootCommentCell:(WCFinderFeedDetailRootCommentCell *)arg1 clickCommentRepostAtSection:(unsigned long long)arg2;
- (void)rootCommentCell:(WCFinderFeedDetailRootCommentCell *)arg1 clickNicknameAtSection:(unsigned long long)arg2;
- (void)rootCommentCell:(WCFinderFeedDetailRootCommentCell *)arg1 clickAvatarAtSection:(unsigned long long)arg2;
- (void)rootCommentCell:(WCFinderFeedDetailRootCommentCell *)arg1 longPressAtSection:(unsigned long long)arg2;
- (void)rootCommentCell:(WCFinderFeedDetailRootCommentCell *)arg1 clickFullRefContentTextAtSection:(unsigned long long)arg2 isExpand:(_Bool)arg3;
- (void)rootCommentCell:(WCFinderFeedDetailRootCommentCell *)arg1 clickFullTextAtSection:(unsigned long long)arg2 isExpand:(_Bool)arg3;
- (void)rootCommentCell:(WCFinderFeedDetailRootCommentCell *)arg1 likeCommentSection:(unsigned long long)arg2;
@end

