//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, ReportPayResResp;

@protocol WCPayT2BCPayReportCgiDelegate <NSObject>
- (void)onWCPayT2BCPayReportCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayT2BCPayReportCgiResponseOK:(ReportPayResResp *)arg1;
@end

