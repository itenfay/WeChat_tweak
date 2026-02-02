//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderJumpInfo_Style, NSString, WCFinderFeedContentVM, WCFinderJumpInfo, WCFinderPhotoFeedHeaderView;

@protocol WCFinderPhotoFeedHeaderDelegate <NSObject>

@optional
- (void)headerView:(WCFinderPhotoFeedHeaderView *)arg1 didClickLBSCardWithJumpInfo:(WCFinderJumpInfo *)arg2 style:(FinderJumpInfo_Style *)arg3;
- (void)headerView:(WCFinderPhotoFeedHeaderView *)arg1 lbsCardDidChangePoiFavState:(_Bool)arg2 withJumpInfo:(WCFinderJumpInfo *)arg3;
- (void)headerView:(WCFinderPhotoFeedHeaderView *)arg1 didClickRedPacketJumpInfo:(WCFinderJumpInfo *)arg2 style:(FinderJumpInfo_Style *)arg3;
- (void)headerView:(WCFinderPhotoFeedHeaderView *)arg1 didClickContentTopicAction:(NSString *)arg2 contentVM:(WCFinderFeedContentVM *)arg3;
- (void)headerView:(WCFinderPhotoFeedHeaderView *)arg1 didClickContentMentionAction:(NSString *)arg2 nickname:(NSString *)arg3 contentVM:(WCFinderFeedContentVM *)arg4;
- (void)headerView:(WCFinderPhotoFeedHeaderView *)arg1 didClickContentUsernameAction:(NSString *)arg2 contentVM:(WCFinderFeedContentVM *)arg3;
- (void)headerView:(WCFinderPhotoFeedHeaderView *)arg1 didClickCollectionAction:(WCFinderFeedContentVM *)arg2;
- (void)headerView:(WCFinderPhotoFeedHeaderView *)arg1 didClickLinkEntry:(WCFinderFeedContentVM *)arg2;
- (void)headerView:(WCFinderPhotoFeedHeaderView *)arg1 didClickEventEntry:(WCFinderFeedContentVM *)arg2;
- (void)headerView:(WCFinderPhotoFeedHeaderView *)arg1 didClickContentPOIAction:(WCFinderFeedContentVM *)arg2;
- (void)headerView:(WCFinderPhotoFeedHeaderView *)arg1 refreshFriendLikeUI:(WCFinderFeedContentVM *)arg2;
- (void)headerViewHeightChanged:(WCFinderPhotoFeedHeaderView *)arg1;
@end

