//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, WCPayBindCardInfo, WCPayOfflinePayBlockLayer, WCPayOfflinePayDisableBlockLayer, WCPayOfflinePayEnablePageData, WCPayOfflinePayGuideBar;

@protocol WCPayOfflinePayViewControllerDelegate <NSObject>
- (void)onEnableTipsViewClickVerifyBtn;
- (WCPayOfflinePayEnablePageData *)getOfflineEnablePageData;
- (_Bool)isV2AuthCodeSettingPayment;
- (void)setV2AuthCodePayment:(WCPayBindCardInfo *)arg1 loading:(_Bool)arg2;
- (void)removeOfflinePreferCardChangeWording;
- (NSString *)getOfflinePreferCardChangeWording;
- (void)removeOfflineDisableBloackLayerData;
- (WCPayOfflinePayDisableBlockLayer *)getOfflineDisableBlockLayerData;
- (void)removeOfflineBlockLayerData;
- (WCPayOfflinePayBlockLayer *)getOfflineBloackLayerData;
- (void)removeOfflineGuideBarData;
- (WCPayOfflinePayGuideBar *)getOfflineGuideBarData;
- (_Bool)isPayMoneyLogicInProgress;
- (void)OnWCPayOfflinePayViewControllerNeedFreshCardListData:(_Bool)arg1 extraInfo:(NSDictionary *)arg2;
- (void)OnWCPayOfflinePayViewControllerClickTransToMixBtn;
- (void)OnWCPayOfflinePayViewControllerClickTransToBankCardBtn;
- (void)onWCpayOfflinePayViewControllerClickF2fHongBaoBtn;
- (void)OnWCPayOfflinePayNoCodeTipsViewEnableRefreshBtnAfterClick;
- (void)OnWCPayOfflinePayNoCodeTipsViewClickRefreshBtn;
- (void)StopOfflineGetMsg;
- (void)StartOfflineGetMsg;
- (void)onWCPayOfflinePayViewControllerClickQRCodeRewardBtn;
- (void)onWCPayOfflinePayViewControllerClickGroupPayBtn;
- (void)OnWCpayOfflinePayViewControllerClickReceiveMoneyBtn;
- (void)OnWCPayOfflinePayViewControllerAddNewCardBtnPress;
- (void)OnWCPayOfflinePayViewControllerUnfreezeBtnDown;
- (void)OnWCPayOfflinePayViewControllerQuickChangeOfflinePayLimit;
- (void)OnWCPayOfflinePayViewControllerChangeOfflinePayLimit;
- (void)OnWCPayOfflinePayViewControllerCreateOfflinePay;
- (void)OnWCPayOfflinePayViewControllerBack;
@end

