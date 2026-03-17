//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCRealTimeKVReportWrap;

@protocol IWCRealTimeKVReportMgrExt <NSObject>

@optional
- (void)onRealTimeKVReportFailedWithWrap:(WCRealTimeKVReportWrap *)arg1;
- (void)onRealTimeKVReportSucceedWithWrap:(WCRealTimeKVReportWrap *)arg1;
@end

