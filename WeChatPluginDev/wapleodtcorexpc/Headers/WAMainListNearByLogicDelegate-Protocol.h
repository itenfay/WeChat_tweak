//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WAMainListNearByLogicDelegate <NSObject>

@optional
- (void)onGetNearByInfoFailedWithErrCode:(int)arg1;
- (void)onGetNearByInfoFailedWithLocationInvalid;
- (void)onNearByInfoTriggerUpdated;
- (void)onFirstTimeGetNearByInfo;
- (void)onGetLocationWithLatitude:(double)arg1 longitude:(double)arg2;
@end

