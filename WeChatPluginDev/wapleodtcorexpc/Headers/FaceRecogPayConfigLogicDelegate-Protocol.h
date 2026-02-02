//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FaceRecogPayConfigLogic, NSString;

@protocol FaceRecogPayConfigLogicDelegate <NSObject>

@optional
- (void)onGetPayBioConfigOK:(FaceRecogPayConfigLogic *)arg1 succeedForBioId:(unsigned long long)arg2;
- (void)onGetPayBioConfig:(FaceRecogPayConfigLogic *)arg1 failedCauseOf:(int)arg2 errMsg:(NSString *)arg3;
@end

