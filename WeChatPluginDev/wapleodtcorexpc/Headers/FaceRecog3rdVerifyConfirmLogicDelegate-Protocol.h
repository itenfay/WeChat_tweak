//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FaceRecog3rdVerifyConfirmLogic, NSString;

@protocol FaceRecog3rdVerifyConfirmLogicDelegate <NSObject>
- (void)onGetConfirmInfoSucceed:(FaceRecog3rdVerifyConfirmLogic *)arg1;
- (void)onGetConfirmInfo:(FaceRecog3rdVerifyConfirmLogic *)arg1 failedCauseOf:(unsigned int)arg2 msg:(NSString *)arg3 desc:(NSString *)arg4;
@end

