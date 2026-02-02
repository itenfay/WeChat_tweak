//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCPayControlData;

@protocol WCPayResetPwdCardInfoViewControllerDelegate <NSObject>
- (void)ResetPwdCardInfoPoped;
- (void)ResetPwdCardInfoReadAgreement;
- (void)ResetPwdCardInfoNext:(WCPayControlData *)arg1;
- (void)ResetPwdCardInfoCardInfoCancel;
@end

