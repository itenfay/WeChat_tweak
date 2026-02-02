//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol ContactVerifyPreCheckLogicDelegate <NSObject>

@optional
- (void)onContactVerifyPreCheckFailActionCancel:(NSString *)arg1 opcode:(unsigned int)arg2 responseRet:(int)arg3;
- (void)onContactVerifyPreCheckFailActionDone:(NSString *)arg1 opcode:(unsigned int)arg2 responseRet:(int)arg3;
- (void)onContactVerifyPreCheckFail:(NSString *)arg1 opcode:(unsigned int)arg2 responseRet:(int)arg3;
- (void)onContactVerifyPreCheckSuccess:(NSString *)arg1 opcode:(unsigned int)arg2;
- (_Bool)onShouldHandleContactVerifyPreCheckFail:(NSString *)arg1 opcode:(unsigned int)arg2 responseRet:(int)arg3;
@end

