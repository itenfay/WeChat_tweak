//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, WCMicroMerchantFeedsGroup;

@protocol WCMicroMerchantFeedsMgrDelegate <NSObject>
- (void)onMicroMerchantDataListUpdate:(NSArray *)arg1 group:(WCMicroMerchantFeedsGroup *)arg2;
@end

