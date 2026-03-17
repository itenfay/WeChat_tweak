//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class QBBeaconModuleStrategy;

@protocol QBBeaconAnalyticsModule
- (_Bool)isEnabled;
- (int)moduleKey;

@optional
- (QBBeaconModuleStrategy *)moduleStrategy;
- (void)setModuleStrategy:(QBBeaconModuleStrategy *)arg1;
- (_Bool)uploadModuleHistoryData;
- (_Bool)checkAndEnable;
- (void)appEnterBack;
- (void)appResumed;
- (void)appStarted;
@end

