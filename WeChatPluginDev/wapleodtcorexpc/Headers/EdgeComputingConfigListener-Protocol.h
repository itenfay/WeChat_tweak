//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EdgeComputingScriptConfigModel, EdgeComputingSqlConfigModel;

@protocol EdgeComputingConfigListener <NSObject>

@optional
- (void)onSqlConfigSame:(EdgeComputingSqlConfigModel *)arg1;
- (void)onSqlConfigOffline:(EdgeComputingSqlConfigModel *)arg1;
- (void)onSqlConfigUpdate:(EdgeComputingSqlConfigModel *)arg1;
- (void)onScriptConfigSame:(EdgeComputingScriptConfigModel *)arg1;
- (void)onScriptConfigOffline:(EdgeComputingScriptConfigModel *)arg1;
- (void)onScriptConfigUpdate:(EdgeComputingScriptConfigModel *)arg1;
@end

