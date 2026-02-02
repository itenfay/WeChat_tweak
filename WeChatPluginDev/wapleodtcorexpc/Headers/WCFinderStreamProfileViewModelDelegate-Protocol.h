//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCFinderStreamProfileSubViewModelProtocol-Protocol.h"

@class NSString, UIViewController;

@protocol WCFinderStreamProfileViewModelDelegate <WCFinderStreamProfileSubViewModelProtocol>
- (UIViewController *)getCurrentViewController;

@optional
- (void)streamProfileViewLiveNoticeDidPushToMembershipIntroduceOnGotoNotice;
- (void)streamProfileViewShouldShowConcertTicketConfirmed;
- (void)streamProfileViewDisplayLogoutView;
- (void)streamProfileViewModelTabShouldChanged;
- (void)streamProfileViewModifyShieldFinderFeedsIsSuccess:(_Bool)arg1 errorMsg:(NSString *)arg2 setToShield:(_Bool)arg3;
- (void)streamProfileViewLiveNoticeReserveStateChanged:(unsigned long long)arg1;
- (void)streamProfileViewLiveNoticeRevoked:(_Bool)arg1;
- (void)streamProfileViewDataSourceFetchError;
@end

