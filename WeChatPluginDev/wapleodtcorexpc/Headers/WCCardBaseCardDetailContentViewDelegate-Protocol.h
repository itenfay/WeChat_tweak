//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, WCCardFieldItem;

@protocol WCCardBaseCardDetailContentViewDelegate <NSObject>
- (void)onJumpToFinderBtnClick:(WCCardFieldItem *)arg1;
- (void)onShareCardImageClick:(WCCardFieldItem *)arg1;
- (void)onShareCardBtnClick;
- (void)onAcceptCardBtnClick:(_Bool)arg1;
- (void)onCardHeaderViewOperateBtnClick;
- (void)onCardHeaderViewApplyBtnClick;
- (_Bool)isNeedToDisplayDeeplinkJunmpTips;
- (void)giftCardToFriend;
- (void)openCellList0Item:(WCCardFieldItem *)arg1;
- (void)openGiftCardInfoViewConroller;
- (void)openBrandProfileView;
- (void)openUsedStoresView;
- (void)openNearbyShopInfo;
- (void)openCardDetailView;
- (void)openOperationView;
- (void)openSecondaryField:(WCCardFieldItem *)arg1;
- (void)openTinyAppWithUserName:(NSString *)arg1 path:(NSString *)arg2;
- (void)openUrl:(NSString *)arg1;
- (void)onClickNearbyPhoneBtn;
- (_Bool)bIsCardFromOutAppScene;
- (double)getViewControllerContentViewHeight;
- (NSString *)getGiftCardShareFromUserName;
- (_Bool)shouldShowGiftFromUserHeaderView;
- (NSArray *)getUsedStoreList;
- (int)getCardStatus;
- (_Bool)shouldHideAcceptBtn;
- (_Bool)canShowUseBtnInHeader;
@end

