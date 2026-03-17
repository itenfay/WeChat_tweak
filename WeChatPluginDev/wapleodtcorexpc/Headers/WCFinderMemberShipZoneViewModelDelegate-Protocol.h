//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderLiveNoticeInfo, UIViewController, WCFinderMemberShipZoneViewModel;

@protocol WCFinderMemberShipZoneViewModelDelegate <NSObject>
- (UIViewController *)getCurrentViewController;
- (void)onMemberShipZoneViewShouldShowConcertTicketConfirmed:(FinderLiveNoticeInfo *)arg1;
- (void)onMemberShipZoneViewLiveNoticeReserveStateChanged:(unsigned long long)arg1 notice:(FinderLiveNoticeInfo *)arg2;
- (void)onMemberShipZoneViewModelDetailFetched:(WCFinderMemberShipZoneViewModel *)arg1 remote:(_Bool)arg2;
- (void)onMemberShipZoneViewModelRequestDetailFailed:(WCFinderMemberShipZoneViewModel *)arg1;
@end

