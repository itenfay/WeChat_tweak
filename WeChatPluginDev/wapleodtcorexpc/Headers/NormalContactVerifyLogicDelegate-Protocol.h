//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BaseResponse, NSString, VerifyUserPreCheckResponse, VerifyUserResponse;

@protocol NormalContactVerifyLogicDelegate <NSObject>

@optional
- (void)onNormalContactVerifyPreChecFail:(NSString *)arg1 opcode:(unsigned int)arg2 baseResponse:(BaseResponse *)arg3 andVerifyUserResponse:(VerifyUserPreCheckResponse *)arg4;
- (void)onNormalContactVerifyPreCheckDone:(NSString *)arg1 opcode:(unsigned int)arg2;
- (void)onNormalContactVerifyFail:(BaseResponse *)arg1 andVerifyUserResponse:(VerifyUserResponse *)arg2;
- (void)onNormalContactVerifyDone:(NSString *)arg1 encodeUserName:(NSString *)arg2;
@end

