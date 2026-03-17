//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FunctionDetail, GetAllFunctionResponse_AlertInfo, GetEUInfoResp, MMUIViewController, NSIndexPath, WCPayControlData;

@protocol WCPayMainViewLogicControllerDelegate <NSObject>
- (void)checkAndShowAlertInfo:(GetAllFunctionResponse_AlertInfo *)arg1;
- (void)reloadCellWithIndexPath:(NSIndexPath *)arg1;
- (void)openWeappWithItemData:(FunctionDetail *)arg1;
- (void)openH5WithItemData:(FunctionDetail *)arg1;
- (void)showBusinessDisclaimerWithItemData:(FunctionDetail *)arg1;
- (void)refreshViewAfterGetGDPRResponse:(GetEUInfoResp *)arg1;
- (void)refreshViewAfterGetFunctionData:(_Bool)arg1;
- (void)refreshViewAfterUpdatePaycardListData:(WCPayControlData *)arg1 isFromCache:(_Bool)arg2;
- (void)popToRootWithoutAnimation;
- (void)timeoutNumberStartTimeout;
- (MMUIViewController *)getViewController;
@end

