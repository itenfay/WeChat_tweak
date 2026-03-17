//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMCustomerOrderInfo;
@protocol MMOrderCenterTableViewCellComponentAggregatedDelegate;

@protocol MMOrderCenterTableViewCellComponent <NSObject>
+ (_Bool)shouldUseComponentForOrder:(MMCustomerOrderInfo *)arg1;
+ (double)heightForOrder:(MMCustomerOrderInfo *)arg1 inWidth:(double)arg2 estimate:(_Bool)arg3;
@property(nonatomic) __weak id <MMOrderCenterTableViewCellComponentAggregatedDelegate> delegate;
- (void)onCellWillDisplay;
- (void)updateWithOrder:(MMCustomerOrderInfo *)arg1;
@end

