//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BrandProfileFuwuInfo, CContact, NSString, WxaEcEntranceInfo;

@protocol BrandProfileHeaderViewDelegate <NSObject>
- (void)onMenuItemClick:(BrandProfileFuwuInfo *)arg1;
- (void)onRecommendFollowCellClicked:(NSString *)arg1 sessionId:(NSString *)arg2 reportJsonStr:(NSString *)arg3;
- (void)onRecommendFollowCellExposed:(NSString *)arg1;
- (void)onRecommendFollowViewExposed:(NSString *)arg1;
- (void)onMoreRecommendFollowClicked:(NSString *)arg1 sessionId:(NSString *)arg2;
- (void)onReserveFinderLiveShowMoreNoticeButtonClicked;
- (void)onReserveFinderLiveCardExpose;
- (void)onReserveFinderLiveButtonClicked:(_Bool)arg1;
- (void)onHeaderViewLayoutChanged;
- (void)onLiveStatusBtnClicked:(CContact *)arg1;
- (void)onPersonalVerifiedLabelClicked:(CContact *)arg1;
- (void)onFinderButtonClicked:(NSString *)arg1;
- (void)onShopWindowButtonClicked:(WxaEcEntranceInfo *)arg1;
- (void)onShopWindowButtonExpose;
- (void)onFoldButtonClicked:(CContact *)arg1;
- (void)onUnfocusButtonClicked:(CContact *)arg1;
- (void)onEnterButtonClicked:(CContact *)arg1;
- (void)onFocusButtonClicked:(CContact *)arg1;
- (void)onBrandAvatarClicked:(struct CGRect)arg1;

@optional
- (void)onHalfScreenMoreClick;
- (void)onHalfScreenSearchClick;
- (_Bool)isHalfScreen;
- (void)onFriendSubscribeBtnClicked:(NSString *)arg1;
- (void)onFriendSubscribeBtnExposed:(NSString *)arg1;
- (void)onRedPacketBannerClicked:(NSString *)arg1;
- (void)onRedPacketBannerExposed;
- (void)onNameLabelClicked;
@end

