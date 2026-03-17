//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSString, WWShareInvite;

@protocol IEnterpriseBizTransferExt <NSObject>

@optional
- (void)onBizShareInfoResult:(int)arg1 errorMsg:(NSString *)arg2 shareInfo:(WWShareInvite *)arg3 mainBrandUserName:(NSString *)arg4;
- (void)onBizTransferResult:(int)arg1 errorMsg:(NSString *)arg2 cmd:(unsigned int)arg3 bodyData:(NSData *)arg4 mainBrandUserName:(NSString *)arg5;
@end

