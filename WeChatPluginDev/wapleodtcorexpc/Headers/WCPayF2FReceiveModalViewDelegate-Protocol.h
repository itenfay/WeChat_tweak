//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCPayF2FReceiveModalViewData;

@protocol WCPayF2FReceiveModalViewDelegate <NSObject>
- (void)onWCPayF2FReceiveModalViewCancel;
- (void)onWCPayF2FReceiveModalViewClickConfirmBtn:(WCPayF2FReceiveModalViewData *)arg1;
@end

