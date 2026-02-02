//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class QBBeaconModuleStrategy;

@interface QBBeaconEventModule : NSObject
{
    _Bool userEnabled;
    _Bool beaconStatisReportEnabled;
    QBBeaconModuleStrategy *moduleStrategy;
}

+ (id)sharedInstance;
@property(retain) QBBeaconModuleStrategy *moduleStrategy; // @synthesize moduleStrategy;
@property(nonatomic) _Bool beaconStatisReportEnabled; // @synthesize beaconStatisReportEnabled;
@property(nonatomic) _Bool userEnabled; // @synthesize userEnabled;
- (void).cxx_destruct;
- (void)refreshNetInfo;
- (void)initBeaconProperties;
- (void)appEnterBack;
- (void)recordAppLaunchEvent:(_Bool)arg1;
- (void)appResumed;
- (void)appStarted;
- (_Bool)uploadModuleHistoryData;
- (_Bool)isEnabled;
- (void)enableModule;
- (void)disableModule;
- (_Bool)checkAndEnable;
- (int)moduleKey;
- (id)init;

@end

