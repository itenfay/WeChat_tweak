//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface JailBreakHelper : NSObject
{
    unsigned int _m_hasCheckPuginTimes;
    unsigned int _m_lastCheckTime;
    NSMutableArray *_m_checkPaths;
}

+ (id)loadSetting;
+ (id)getIAPCheckPath;
+ (id)getJailbreakPath;
+ (id)getJailbreakRootDir;
+ (_Bool)JailBroken;
+ (void)initialize;
+ (void)PBArrayAdd_m_lastCheckTime;
+ (void)PBArrayAdd_m_checkPaths;
+ (void)PBArrayAdd_m_hasCheckPuginTimes;
- (void).cxx_destruct;
@property(nonatomic) unsigned int m_lastCheckTime; // @synthesize m_lastCheckTime=_m_lastCheckTime;
@property(retain, nonatomic) NSMutableArray *m_checkPaths; // @synthesize m_checkPaths=_m_checkPaths;
@property(nonatomic) unsigned int m_hasCheckPuginTimes; // @synthesize m_hasCheckPuginTimes=_m_hasCheckPuginTimes;
- (void)onPackageListUpdated:(id)arg1;
- (void)onPackageDownloadProcessUpdated:(id)arg1 downloadSize:(int)arg2 totalSize:(int)arg3;
- (void)onPackageDownloadFinish:(id)arg1 package:(id)arg2;
- (_Bool)save;
- (_Bool)isOverADay;
- (_Bool)HasInstallJailbreakPlugin:(id)arg1;
- (_Bool)IsJailBreak;
- (id)getKeyStr;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

