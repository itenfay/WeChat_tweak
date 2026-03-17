//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCMallWalletMangeControlLogicDelegate <NSObject>

@optional
- (_Bool)isWCMallWalletMangeControllerNeedPresentShow;
- (_Bool)isWCMallWalletMangeControlLogicNeedShowLoading;
- (void)onBatchFunctionOperateDone;
@end

