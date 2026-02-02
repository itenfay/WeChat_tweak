//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary;

@protocol WCPayGPMemberFillMoneyControllerDelegate <NSObject>
- (void)onWCPayGPMemberFillMoneyControllerBackWithSelectContact:(NSArray *)arg1 withUserPayAmountDict:(NSDictionary *)arg2;
- (void)onWCPayGPMemberFillMoneyControllerCancel;
@end

