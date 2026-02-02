//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TAVExportReportData, TAVRenderReportData;

@protocol TAVKeyEventMonitorObserver <NSObject>
- (void)logExportFinish:(TAVExportReportData *)arg1;
- (void)logRenderFinish:(TAVRenderReportData *)arg1;
@end

