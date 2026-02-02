//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCPayNFCCardChargeControlLogicDelegate <NSObject>
- (void)onWCPayNFCCardChargeControlLogicFailed:(NSString *)arg1;
- (void)onWCPayNFCCardChargeControlLogicCancel;
- (void)onWCPayNFCCardChargeControlLogicSuccess;
@end

