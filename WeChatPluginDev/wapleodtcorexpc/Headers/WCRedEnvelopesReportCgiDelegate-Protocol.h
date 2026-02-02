//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, ReportHBResp;

@protocol WCRedEnvelopesReportCgiDelegate <NSObject>
- (void)onWCRedEnvelopesReportCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWCRedEnvelopesReportCgiResponseOK:(ReportHBResp *)arg1;
@end

