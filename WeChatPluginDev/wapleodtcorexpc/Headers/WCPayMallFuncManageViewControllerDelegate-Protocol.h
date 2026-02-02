//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSMutableArray;

@protocol WCPayMallFuncManageViewControllerDelegate <NSObject>
- (_Bool)isWCPayMallFuncManagerViewControllerBePresent;
- (void)OnWCPayMallFuncManageViewControllerBatchOperate:(NSMutableArray *)arg1;
- (void)OnWCPayMallFuncManageViewControllerCancel;
@end

