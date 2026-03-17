//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class ExposureInfoModifyResponse, NSString;

@protocol WCPayModifyExposureCgiDelegate <NSObject>
- (void)OnModifyExposureRepsonseError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)OnModifyExposureRepsonseOK:(ExposureInfoModifyResponse *)arg1;
@end

