//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BaseResponse, NSString;

@protocol OpenIMContactVerifyLogicDelegate <NSObject>

@optional
- (void)onOpenIMContactVerifyFail:(BaseResponse *)arg1;
- (void)onOpenIMContactVerifyDone:(NSString *)arg1;
@end

