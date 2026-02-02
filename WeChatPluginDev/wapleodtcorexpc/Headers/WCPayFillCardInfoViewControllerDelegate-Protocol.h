//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCPayReadOnlyInfo-Protocol.h"

@class WCPayControlData, WCPayRealnameAuthenReq;

@protocol WCPayFillCardInfoViewControllerDelegate <WCPayReadOnlyInfo>
- (WCPayRealnameAuthenReq *)FillCardInfoRealnameReq;
- (void)FillCardInfoReadAgreement;
- (void)FillCardInfoNext:(WCPayControlData *)arg1;
- (void)FillCardInfoCancel;
- (_Bool)NeedShowServiceAppInfo;
@end

