//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol WCPayNFCCardApplyControlLogicDelegate <NSObject>
- (void)onWCPayNFCCardApplyControlLogicFailed:(NSString *)arg1;
- (void)onWCPayNFCCardApplyControlLogicCancel;
- (void)onWCPayNFCCardApplyControlLogicSuccess:(NSDictionary *)arg1;
@end

