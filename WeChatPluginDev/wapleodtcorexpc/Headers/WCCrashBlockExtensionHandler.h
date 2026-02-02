//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCCrashBlockExtensionHandler : NSObject
{
}

+ (_Bool)isLiveType;
+ (_Bool)isFinderType;
+ (id)shareInstance;
- (void)setPidInfo:(id)arg1;
- (void)setFlutterDumpThreadId:(unsigned long long)arg1;
- (void)setFlutterRevision:(id)arg1;
- (void)liveTypeChanged:(id)arg1;
- (void)finderTypeChanged:(id)arg1;
- (void)setAppleWatchFlag:(_Bool)arg1;
- (void)setWCFinderType:(int)arg1;
- (void)setVoIPRoomKey:(unsigned long long)arg1;
- (void)setVoIPRoomID:(unsigned long long)arg1;
- (int)VoIPFlag;
- (void)setVoIPFlag:(int)arg1;
- (void)setLiveVc:(_Bool)arg1;
- (void)setLiveVideoFps:(int)arg1;
- (int)liveUserType;
- (void)setLiveUserType:(int)arg1;
- (unsigned long long)liveId;
- (void)setLiveTab:(id)arg1;
- (void)setLiveId:(unsigned long long)arg1;
- (void)setLivingFlag:(_Bool)arg1;
- (void)setFileDecriptorCount:(long long)arg1;
- (void)setLiteAppExtraInfo:(id)arg1;
- (void)setLiteAppScene:(id)arg1;
- (void)decreaseExistWeAppCount;
- (void)setExistWeAppCount:(int)arg1;
- (id)getActiveWeAppScene;
- (void)setActiveWeAppScene:(id)arg1;
- (void)setDumpType:(unsigned long long)arg1;
- (void)setLastScene:(id)arg1;
- (id)p_getLastClick;
- (id)getLastClick;
- (void)setActiveMagicBrushBizList:(id)arg1;
- (void)setRunloopThreshold:(unsigned int)arg1;
- (void)setBlockTime:(unsigned long long)arg1;
- (void)setCVersion:(unsigned int)arg1;
- (void)setCurrentUin:(unsigned long long)arg1 andUsrName:(id)arg2;
- (void)p_setCurrentUserName:(id)arg1;
- (void)addLogInfo:(struct XLoggerInfo_t)arg1 withMessage:(const char *)arg2;
- (void)resetSceneArray;
- (void)freeLastSceneArray;
- (void)resetLogCycleArray;
- (void)freeLogCycleArray;
- (void)renewHeavyUserInfo;
- (void)renewInfoForReport;
- (id)getUserInfoForCurrentAppWithDumpType:(unsigned long long)arg1;
- (void)dealloc;
- (void)setupStdioBuffer;
- (id)init;

@end

