//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FlutterStartUpTransitionReportInfo, NSNumber;

@protocol WeAPMApi
- (void)getDartVMMemoryInfoWithCompletion:(void (^)(NSString *, FlutterError *))arg1;
- (FlutterStartUpTransitionReportInfo *)getTransitionReportInfoWithError:(id *)arg1;
- (NSNumber *)getBindFlutterInstanceMillsWithError:(id *)arg1;
- (NSNumber *)getSnapshotRenderMillsWithError:(id *)arg1;
- (NSNumber *)getNativeFirstScrollMillsWithError:(id *)arg1;
- (NSNumber *)getNativeFirstPointerDownMillsWithError:(id *)arg1;
- (NSNumber *)getFlutterEngineCreateFinishMillsWithError:(id *)arg1;
- (NSNumber *)getFlutterEngineCreateStartMillsWithError:(id *)arg1;
@end

