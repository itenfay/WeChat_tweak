//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCPayControlData, WCPayControlLogic, WCPayInnerPayResponseStruct;

@protocol IWCPayControlLogicExt <NSObject>

@optional
- (void)OnRealnameRegistered:(WCPayControlData *)arg1;
- (void)OnFinishedLoadingAndGoToFirstViewController:(WCPayControlLogic *)arg1;
- (void)OnFinishedWCPayInnerPayLogic:(WCPayInnerPayResponseStruct *)arg1 CompleteStatus:(int)arg2 ExtraInfo:(NSString *)arg3;
- (void)OnPayCardListChanged:(WCPayControlData *)arg1;
- (void)OnGetLocalCachePayCardList:(WCPayControlData *)arg1;
- (void)OnFinishedWCPayLogic:(NSString *)arg1 CompleteStatus:(int)arg2;
- (void)OnPreFinishedWCPayLogic:(NSString *)arg1 waitUntilDone:(_Bool *)arg2;
@end

