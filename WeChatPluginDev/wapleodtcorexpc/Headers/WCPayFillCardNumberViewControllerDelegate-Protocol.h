//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCPayReadOnlyInfo-Protocol.h"

@class NSString, UIImage, WCPayControlData, WCPayRealnameAuthenReq, WCPayRealnameAuthenResp;

@protocol WCPayFillCardNumberViewControllerDelegate <WCPayReadOnlyInfo>
- (void)FillCardNumberConfirmWithImage:(UIImage *)arg1 cardNumber:(NSString *)arg2 data:(WCPayControlData *)arg3;
- (void)FillCardNumberNext:(WCPayControlData *)arg1;
- (void)FillCardNumberCancel:(_Bool)arg1;

@optional
- (unsigned int)FillCardNumberSource;
- (WCPayRealnameAuthenResp *)FillCardNumberRealnameResp;
- (WCPayRealnameAuthenReq *)FillCardNumberRealnameReq;
- (void)FillCardNumberShowedAllFavorInfo;
- (void)FillCardNumberBackToRefreshCardList;
@end

