//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController, NSString;

@protocol WCFinderPaidCollectionConsumeLogicDelegate <NSObject>
- (void)onPaidCollectionConsumeLogicPurchaseCourseCancel;
- (void)onPaidCollectionConsumeLogicPurchaseCourseFailWithMsg:(NSString *)arg1;
- (void)onPaidCollectionConsumeLogicPurchaseCourseSuccessWithMsg:(NSString *)arg1;
- (MMUIViewController *)getCurrentViewController;
@end

