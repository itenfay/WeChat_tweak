//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCAddressStageDataStruct;

@protocol WCAddressHalfScreenDelegate <NSObject>
- (void)onFailureCompletionWithText:(NSString *)arg1 andComponent:(int)arg2;
- (void)multiPickerWillDisappear;
- (void)chooseStageAtComponent:(int)arg1 withProvince:(WCAddressStageDataStruct *)arg2 andCity:(WCAddressStageDataStruct *)arg3 andDistrict:(WCAddressStageDataStruct *)arg4 andStreet:(WCAddressStageDataStruct *)arg5;
- (void)onFinishMultiPickerWithProvince:(WCAddressStageDataStruct *)arg1 andCity:(WCAddressStageDataStruct *)arg2 andDistrict:(WCAddressStageDataStruct *)arg3 andStreet:(WCAddressStageDataStruct *)arg4 andPostCode:(NSString *)arg5;
@end

