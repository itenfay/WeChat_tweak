//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface CUpdateInfo : NSObject
{
    _Bool _m_bShowInSetting;
    _Bool _m_bShowInTab;
    _Bool _m_bSysNoticeShowInTab;
    unsigned int _m_uiNewVersion;
    unsigned int _m_uiLastShowAlertTime;
    unsigned int _m_uiSysNoticeVersion;
    unsigned int _m_uiSysNoticeCount;
    unsigned int _m_uiNewVersionUpdateTime;
    NSString *_m_nsDescription;
    NSString *_m_nsNewestVersionDescription;
}

+ (void)updateSysNotice:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_m_nsNewestVersionDescription;
+ (void)PBArrayAdd_m_bSysNoticeShowInTab;
+ (void)PBArrayAdd_m_uiSysNoticeCount;
+ (void)PBArrayAdd_m_uiSysNoticeVersion;
+ (void)PBArrayAdd_m_uiNewVersionUpdateTime;
+ (void)PBArrayAdd_m_uiLastShowAlertTime;
+ (void)PBArrayAdd_m_bShowInTab;
+ (void)PBArrayAdd_m_bShowInSetting;
+ (void)PBArrayAdd_m_nsDescription;
+ (void)PBArrayAdd_m_uiNewVersion;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *m_nsNewestVersionDescription; // @synthesize m_nsNewestVersionDescription=_m_nsNewestVersionDescription;
@property(nonatomic) unsigned int m_uiNewVersionUpdateTime; // @synthesize m_uiNewVersionUpdateTime=_m_uiNewVersionUpdateTime;
@property(nonatomic) unsigned int m_uiSysNoticeCount; // @synthesize m_uiSysNoticeCount=_m_uiSysNoticeCount;
@property(nonatomic) unsigned int m_uiSysNoticeVersion; // @synthesize m_uiSysNoticeVersion=_m_uiSysNoticeVersion;
@property(nonatomic) unsigned int m_uiLastShowAlertTime; // @synthesize m_uiLastShowAlertTime=_m_uiLastShowAlertTime;
@property(nonatomic) _Bool m_bSysNoticeShowInTab; // @synthesize m_bSysNoticeShowInTab=_m_bSysNoticeShowInTab;
@property(nonatomic) _Bool m_bShowInTab; // @synthesize m_bShowInTab=_m_bShowInTab;
@property(nonatomic) _Bool m_bShowInSetting; // @synthesize m_bShowInSetting=_m_bShowInSetting;
@property(copy, nonatomic) NSString *m_nsDescription; // @synthesize m_nsDescription=_m_nsDescription;
@property(nonatomic) unsigned int m_uiNewVersion; // @synthesize m_uiNewVersion=_m_uiNewVersion;
- (id)getPBPropertyTable;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

