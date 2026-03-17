//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WAWebViewController;

@protocol WAPageFlowReportExtention <NSObject>

@optional
- (void)EXReport_onAppExit:(unsigned int)arg1 onPage:(WAWebViewController *)arg2;
- (void)EXReport_onBackOnPage:(WAWebViewController *)arg1 toPage:(WAWebViewController *)arg2;
- (void)EXReport_onTargetToNativaPage:(NSString *)arg1;
@end

