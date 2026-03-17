//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol MatrixPluginProtocol;

@protocol WCReportStrategyDelegate <NSObject>
- (NSArray *)tryGetMatrixReportCustomLagLimitReportIDs:(NSString *)arg1;
- (_Bool)isCanCustomAutoReportLag:(id <MatrixPluginProtocol>)arg1 customStrategy:(NSString *)arg2;
- (_Bool)isReportCustomLagLimit:(id <MatrixPluginProtocol>)arg1 customStrategy:(NSString *)arg2;
- (_Bool)isReportSupportCustomLagStrategy;
- (_Bool)isNetworkAllowAutoReportLag:(id <MatrixPluginProtocol>)arg1;
- (_Bool)isCanAutoReportLag:(id <MatrixPluginProtocol>)arg1;
- (_Bool)isReportLagLimit:(id <MatrixPluginProtocol>)arg1;
- (_Bool)isReportCrashLimit:(id <MatrixPluginProtocol>)arg1;
@end

