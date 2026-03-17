//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveGenericPaymentItem, MMFinderLiveGenericPaymentSheetView, NSString;

@protocol MMFinderLiveGenericPaymentSheetViewDelegate <NSObject>
- (void)paymentSheetView:(MMFinderLiveGenericPaymentSheetView *)arg1 didClickAgreementUrl:(NSString *)arg2;
- (void)paymentSheetViewDidClickQuestionView:(MMFinderLiveGenericPaymentSheetView *)arg1;
- (void)paymentSheetView:(MMFinderLiveGenericPaymentSheetView *)arg1 didClickPayWithItem:(MMFinderLiveGenericPaymentItem *)arg2;
- (void)paymentSheetViewWillClose:(MMFinderLiveGenericPaymentSheetView *)arg1;
@end

