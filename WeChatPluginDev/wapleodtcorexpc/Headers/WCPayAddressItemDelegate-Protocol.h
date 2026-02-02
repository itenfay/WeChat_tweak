//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCBaseInfoItemDelegate-Protocol.h"

@class MMUIViewController;

@protocol WCPayAddressItemDelegate <WCBaseInfoItemDelegate>
- (double)onWCPayAddressItemMaxContentMax;
- (MMUIViewController *)onWCPayAddressItemGetCurrentViewController;
@end

