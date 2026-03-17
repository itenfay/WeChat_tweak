//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveConcertTicketView;

@protocol MMFinderLiveConcertTicketViewDelegate <NSObject>

@optional
- (void)onTicketViewExternalNavigationRequested:(MMFinderLiveConcertTicketView *)arg1;
- (void)onTicketViewLoadFailed:(MMFinderLiveConcertTicketView *)arg1;
- (void)onTicketViewReadyForDisplay:(MMFinderLiveConcertTicketView *)arg1;
@end

