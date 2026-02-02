//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class ExposureInfoModifyResponse, NSString;

@protocol WCPayF2FModifyExposureCgiDelegate <NSObject>
- (void)OnF2FModifyExposureRepsonseError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)OnF2FModifyExposureRepsonseOK:(ExposureInfoModifyResponse *)arg1;
@end

