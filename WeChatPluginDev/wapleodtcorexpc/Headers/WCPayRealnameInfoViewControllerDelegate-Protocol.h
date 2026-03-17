//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GetRealnameWordingRsp, WCPayControlData, WCPayRealnameAuthenReq;

@protocol WCPayRealnameInfoViewControllerDelegate <NSObject>
- (GetRealnameWordingRsp *)FillRealnameInfoWording;
- (void)FillRealnameInfoLayoutV2ClickConfirm:(WCPayRealnameAuthenReq *)arg1;
- (void)FillRealnameInfoNext:(WCPayControlData *)arg1;
- (void)FillRealnameInfoCancel;

@optional
- (void)ReturnToAddCard;
@end

