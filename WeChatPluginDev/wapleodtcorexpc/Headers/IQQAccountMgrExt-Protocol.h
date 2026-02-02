//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BindQQResponse;

@protocol IQQAccountMgrExt <NSObject>

@optional
- (void)OnUnBindQQFail;
- (void)OnUnBindQQOK;
- (void)OnBindQQOK;
- (void)OnBindQQErrorReturn:(BindQQResponse *)arg1;
@end

