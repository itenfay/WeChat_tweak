//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderJumpInfo, FinderLiteAppParam, FinderMiniAppInfo, FinderMusicRadio, MMListenCategoryItem, NSString, WCFinderBrandInfo, WCFinderHeadImageView, WCFinderProfilePostTipsInfo, WCFinderStreamProfileHeaderView;

@protocol WCFinderStreamProfileHeaderViewDelegate <NSObject>

@optional
- (void)onClickMusician:(MMListenCategoryItem *)arg1;
- (void)onClickMusicRadio:(FinderMusicRadio *)arg1;
- (void)onClickIdentifierInfo:(WCFinderStreamProfileHeaderView *)arg1;
- (void)onClickLocationForHeaderView:(WCFinderStreamProfileHeaderView *)arg1;
- (void)onClickWarnningView:(FinderJumpInfo *)arg1;
- (void)onClickMemberZoneButton:(WCFinderStreamProfileHeaderView *)arg1;
- (void)onClickPostTipsButtonWithInfo:(WCFinderProfilePostTipsInfo *)arg1 enterScene:(unsigned long long)arg2;
- (void)onClickPostTipsViewWithInfo:(WCFinderProfilePostTipsInfo *)arg1;
- (void)onHeaderClickMusicPlayInfoView;
- (void)onBottomMemberZoneButtonClick;
- (void)onBottomLiveButtonClick;
- (void)onBottomPostNewLifeButtonClick;
- (void)onBottomPostButtonClick;
- (void)onFinderAuthViewDidClicked;
- (void)onShowMoreAction:(id)arg1;
- (void)onClickHistoryLiveListBtn;
- (void)onClickFriendAlsoFollowBtn;
- (void)onClickRedPacket:(NSString *)arg1;
- (void)onClickLiteApp:(FinderLiteAppParam *)arg1;
- (void)onClickJumpInfo:(FinderJumpInfo *)arg1;
- (void)onClickServiceViewWithFinderJumpInfo:(FinderJumpInfo *)arg1;
- (void)onClickSignatureAtText:(NSString *)arg1;
- (void)onTapRedPacketEvent;
- (void)onClickShowWXProfileSwitch:(_Bool)arg1;
- (void)onClickGoToWxProfileView;
- (void)onFullProfileAction:(WCFinderStreamProfileHeaderView *)arg1;
- (void)onClickPOIView:(WCFinderStreamProfileHeaderView *)arg1;
- (void)onClickMiniApp:(FinderMiniAppInfo *)arg1;
- (void)onClickPostButton:(WCFinderStreamProfileHeaderView *)arg1;
- (void)onClickClubMemberView:(WCFinderStreamProfileHeaderView *)arg1;
- (void)onClickOriginalFeedView:(WCFinderStreamProfileHeaderView *)arg1;
- (void)onClickFansView:(WCFinderStreamProfileHeaderView *)arg1;
- (void)onClickWeconKFMessage:(WCFinderStreamProfileHeaderView *)arg1;
- (void)onClickMessageButton:(WCFinderStreamProfileHeaderView *)arg1;
- (void)onClickUnFollowButton:(WCFinderStreamProfileHeaderView *)arg1;
- (void)onClickFollowButton:(WCFinderStreamProfileHeaderView *)arg1;
- (void)onClickBrand:(id)arg1 brandInfo:(WCFinderBrandInfo *)arg2;
- (void)onClickSignatureGuide:(WCFinderStreamProfileHeaderView *)arg1;
- (void)onClickMoreActionView:(WCFinderStreamProfileHeaderView *)arg1;
- (void)onClickHeaderNickName:(WCFinderStreamProfileHeaderView *)arg1;
- (void)onHeaderView:(WCFinderStreamProfileHeaderView *)arg1 clickHeadImageView:(WCFinderHeadImageView *)arg2;
@end

