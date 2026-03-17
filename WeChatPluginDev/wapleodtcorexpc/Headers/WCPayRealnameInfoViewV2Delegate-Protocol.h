//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMTableViewInfo, MMUIViewController, WCPayRealnameAuthenReq;

@protocol WCPayRealnameInfoViewV2Delegate <NSObject>
- (void)onWCPayRealnameInfoViewV2ClickConfirm:(WCPayRealnameAuthenReq *)arg1;
- (MMTableViewInfo *)onWCPayRealnameInfoViewV2TableViewInfo;
- (MMUIViewController *)onWCPayRealnameInfoViewV2CurrentViewController;
@end

