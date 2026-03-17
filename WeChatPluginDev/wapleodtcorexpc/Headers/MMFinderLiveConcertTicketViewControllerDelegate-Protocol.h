//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveConcertTicketViewController, UIView;

@protocol MMFinderLiveConcertTicketViewControllerDelegate <NSObject>

@optional
- (UIView *)onTicketViewControllerShareActionSheetHostingViewRequested:(MMFinderLiveConcertTicketViewController *)arg1;
- (void)onTicketViewControllerExternalNavigationRequested:(MMFinderLiveConcertTicketViewController *)arg1;
- (void)onTicketViewControllerSaveCurrentStyleRequested:(MMFinderLiveConcertTicketViewController *)arg1;
- (void)onTicketViewControllerNextStyleRequested:(MMFinderLiveConcertTicketViewController *)arg1;
- (void)onTicketViewControllerLoadFailed:(MMFinderLiveConcertTicketViewController *)arg1;
- (void)onTicketViewControllerReadyForDisplay:(MMFinderLiveConcertTicketViewController *)arg1;
@end

