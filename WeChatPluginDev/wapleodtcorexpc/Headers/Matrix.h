//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MatrixBuilder;

@interface Matrix : NSObject
{
    MatrixBuilder *_builder;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) MatrixBuilder *builder; // @synthesize builder=_builder;
- (void)notifyAppWillSuspend;
- (void)notifyAppBackgroundFetch;
- (_Bool)checkXPCReboot;
- (_Bool)isAfterLastLaunchUserRebootDevice;
- (id)userSceneOfLastRun;
- (void)setUserScene:(id)arg1;
- (unsigned long long)lastAppLaunchTime;
- (unsigned long long)appLaunchTime;
- (unsigned long long)lastRebootType;
- (void)reportIssueComplete:(id)arg1 success:(_Bool)arg2;
- (id)getPluginWithTag:(id)arg1;
- (id)getPlugins;
- (void)stopPlugins;
- (void)startPlugins;
- (void)addMatrixBuilder:(id)arg1;
- (id)init;

@end

