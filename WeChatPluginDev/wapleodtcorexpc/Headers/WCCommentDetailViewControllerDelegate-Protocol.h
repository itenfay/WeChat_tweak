//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCFinderContentTableViewCellDelegate-Protocol.h"

@class MMUIViewController, NSString, NSURL, WCCommentDetailViewController, WCCommentObject, WCFinderContact, WCFinderDataItem, WCFinderFeedContentVM;

@protocol WCCommentDetailViewControllerDelegate <WCFinderContentTableViewCellDelegate>

@optional
- (void)commentDetailViewController:(WCCommentDetailViewController *)arg1 onCommentObjectUpdate:(WCCommentObject *)arg2;
- (void)onClickContentMentionAction:(NSString *)arg1 nickname:(NSString *)arg2 dataItem:(WCFinderDataItem *)arg3 commentVC:(MMUIViewController *)arg4;
- (void)onClickContentTopicAction:(NSString *)arg1 dataItem:(WCFinderDataItem *)arg2 commentVC:(MMUIViewController *)arg3;
- (void)onClickContentExtReadingAction:(NSURL *)arg1 commentVC:(MMUIViewController *)arg2;
- (void)onClickEventEntry:(WCFinderFeedContentVM *)arg1 commentVC:(MMUIViewController *)arg2;
- (void)onClickContentUsernameAction:(WCFinderFeedContentVM *)arg1 commentVC:(MMUIViewController *)arg2;
- (void)clickContentPOIAction:(WCFinderDataItem *)arg1 commentVC:(MMUIViewController *)arg2;
- (void)updateCommentDetailVCPushState:(MMUIViewController *)arg1;
- (void)clickCommentNickname:(MMUIViewController *)arg1 username:(NSString *)arg2 contact:(WCFinderContact *)arg3 isWeChatFriend:(_Bool)arg4 commentObject:(WCCommentObject *)arg5;
@end

