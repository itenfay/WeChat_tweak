//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCPayControlData, WCPayFetchBalanceReport;

@protocol WCPayNewFetchViewControllerDelegate <NSObject>

@optional
- (_Bool)WCPayFetchIsCurrentLogicTop;
- (void)WCPayFetchViewControlllerNeedUpdateData;
- (WCPayFetchBalanceReport *)getReportLogic;
- (void)WCPayFetchViewControllerAddCard;
- (void)WCPayFetchViewControllerNext:(WCPayControlData *)arg1 FetchAll:(_Bool)arg2;
- (void)WCPayFetchViewControllerCancel:(_Bool)arg1;
@end

