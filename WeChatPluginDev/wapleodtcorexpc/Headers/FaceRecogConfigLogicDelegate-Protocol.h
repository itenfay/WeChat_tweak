//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FaceRecogConfigLogic, NSString;

@protocol FaceRecogConfigLogicDelegate <NSObject>

@optional
- (void)onGetBioConfig:(FaceRecogConfigLogic *)arg1 succeedForScene:(unsigned int)arg2 succeedForBioId:(unsigned long long)arg3;
- (void)onGetBioConfig:(FaceRecogConfigLogic *)arg1 failedCauseOf:(int)arg2 forScene:(unsigned int)arg3 errMsg:(NSString *)arg4;
@end

