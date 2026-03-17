//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class ScanCodeOcrReportRequest, ScanCodeOcrReportResult;

@protocol ScanCodeOCRReporter <NSObject>
- (void)reportOcr:(ScanCodeOcrReportRequest *)arg1 withOcrResult:(ScanCodeOcrReportResult *)arg2;
- (_Bool)needReport:(ScanCodeOcrReportRequest *)arg1;
@end

