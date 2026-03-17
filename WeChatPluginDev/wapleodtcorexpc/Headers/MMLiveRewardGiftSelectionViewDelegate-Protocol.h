//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveRewardGiftItem, MMLiveRewardGiftSelectionView, NSArray, NSDictionary, UIViewController, WCFinderJumpInfo, WCFinderJumpInfoParams;

@protocol MMLiveRewardGiftSelectionViewDelegate <NSObject>

@optional
- (NSArray *)handleFreeGiftWithCurrentPackageItems:(NSArray *)arg1;
- (void)onNeedJoinSuperFanClubFromGiftSelectionWithGiftItem:(MMFinderLiveRewardGiftItem *)arg1;
- (NSDictionary *)getExtraActionResultDictForReportWithSelectionView:(MMLiveRewardGiftSelectionView *)arg1;
- (_Bool)onShowUnlockTipIfNeeded:(MMLiveRewardGiftSelectionView *)arg1 giftItem:(MMFinderLiveRewardGiftItem *)arg2;
- (void)onJumpWebView:(MMLiveRewardGiftSelectionView *)arg1 jumpParams:(WCFinderJumpInfoParams *)arg2 jumpInfo:(WCFinderJumpInfo *)arg3 fromVc:(UIViewController *)arg4;
- (void)onGotoBuyGiftPackets;
- (void)onRewardGiftSelectionViewCancel:(MMLiveRewardGiftSelectionView *)arg1;
- (void)onSelectGiftWithGiftItem:(MMFinderLiveRewardGiftItem *)arg1;
- (void)onRewardGiftSelectionViewWillClose:(_Bool)arg1;
- (void)onJoinFansClubWithGiftItem:(MMFinderLiveRewardGiftItem *)arg1 openScene:(unsigned long long)arg2;
- (void)onJoinFansClubWithGiftItem:(MMFinderLiveRewardGiftItem *)arg1;
- (void)onSelectRewardGiftAttackContact;
- (void)onSelectRewardRecipientContact;
@end

