//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMLiveStarterViewControllerDelegate-Protocol.h"

@class FinderJumpInfo, MMFinderGameLiveStarterViewModel, NSArray, NSMutableArray, NSString, WCFinderRedDotCtrlInfo, WCFinderRedDotTipsShowInfo;
@protocol MMFinderLiveFansGroupOperationReportDelegate, MMFinderLiveMusicSettingReportDelegate, MMFinderLivePromoteManageReportDelegate;

@protocol WCFinderLiveStarterViewControllerDelegate <MMLiveStarterViewControllerDelegate>

@optional
- (void)onMMLiveStarterViewControllerRequestMinimize;
- (void)onMMLiveStarterViewControllerResetForcePortraitForExtend;
- (void)mmLiveStarterViewControllerInvokeForceRotateToOrientation:(long long)arg1 ignoreTopWindowOrientation:(_Bool)arg2;
- (void)onMMLiveStarterViewControllerDidClickRotate;
- (void)mmLiveStarterViewControllerClearRedDotReportCacheWithPrefix:(NSString *)arg1;
- (NSArray *)mmLiveStarterViewControllerAllRedDotCtrlInfoAtPath:(NSString *)arg1;
- (WCFinderRedDotCtrlInfo *)mmLiveStarterViewControllerRedDotCtrlInfoAtPath:(NSString *)arg1;
- (WCFinderRedDotTipsShowInfo *)mmLiveStarterViewControllerRedDotShowInfoAtPath:(NSString *)arg1;
- (void)onMMLiveStarterViewControllerRedDotClickedAtPath:(NSString *)arg1;
- (void)onMMLiveStarterViewControllerRedDotExposedAtPath:(NSString *)arg1;
- (void)onMMLiveStarterViewControllerRedDotExposedAtPathArray:(NSArray *)arg1;
- (void)onMMLiveStarterViewControllerShowAnchorCustomizeRewardListPanel;
- (void)onMMLiveStarterViewControllerShowSongListPanelWithDelegate:(id <MMFinderLiveMusicSettingReportDelegate>)arg1;
- (void)onMMLiveStarterViewControllerShowLiveNotice:(id <MMFinderLivePromoteManageReportDelegate>)arg1;
- (void)onMMLiveStarterViewControllerShowPromoteManagePanel:(id <MMFinderLivePromoteManageReportDelegate>)arg1;
- (void)onMMLiveStarterViewControllerShowFansGroupPanel:(id <MMFinderLiveFansGroupOperationReportDelegate>)arg1;
- (void)onMMLiveStarterViewControllerShowMusicSettingPanelWithDelegate:(id <MMFinderLiveMusicSettingReportDelegate>)arg1;
- (void)onMMLiveStarterViewControllerSelectRoomsForRedPacket:(NSArray *)arg1;
- (void)onMMLiveStarterViewControllerShowGameList:(NSMutableArray *)arg1 showSearch:(_Bool)arg2;
- (void)onMMLiveStarterViewControllerStartGameLiveWithViewModel:(MMFinderGameLiveStarterViewModel *)arg1;
- (void)onMMLiveStarterViewControllerPrefetchShopShelf;
- (void)onMMLiveStarterViewControllerAddGoods;
- (void)onMMLiveStarterViewControllerEditDesc;
- (void)onStarterVCGamePlayOperationPanelClickJump:(FinderJumpInfo *)arg1;
@end

