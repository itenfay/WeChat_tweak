//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCShareCardBaseCardHeaderDelegate-Protocol.h"

@class WCCardUsedStoreInfo;

@protocol WCShareCardNewTicketHeaderDelegate <WCShareCardBaseCardHeaderDelegate>
- (void)jumpButtonDidClikced;
- (void)onTicketHeaderAcceptBtnClick;
- (void)onTicketHeaderUsredStoreBtnClick;
- (WCCardUsedStoreInfo *)ticketHeaderGetStoreInfo;
- (_Bool)ticketHeaderHaveUsedStoreInfo;
- (_Bool)ticketHeaderHaveNearByStoreInfo;
@end

