//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCPayControlData;

@protocol IWCPayPayMoneyLogicExt <NSObject>

@optional
- (void)onWCPayResultBeforeUserInteractionEnd:(NSString *)arg1;
- (void)onWCPayPayMoneySuccess:(WCPayControlData *)arg1;
@end

