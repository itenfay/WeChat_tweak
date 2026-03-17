//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCPayControlData;

@protocol WCPayVerifyPayCardViewControllerDelegate <NSObject>

@optional
- (void)VerifyPayCardModifyPhone:(WCPayControlData *)arg1;
- (void)VerifyPayCardAgain:(WCPayControlData *)arg1;
- (void)VerifyPayCardNext:(WCPayControlData *)arg1;
- (void)VerifyPayCardBack;
@end

