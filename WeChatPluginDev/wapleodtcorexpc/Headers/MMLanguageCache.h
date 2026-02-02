//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary, NSRecursiveLock, NSString;

@interface MMLanguageCache : NSObject
{
    _Bool m_haveSave;
    unsigned int m_currentCount;
    NSRecursiveLock *m_dictLock;
    unsigned int _appVersion;
    NSString *_curSystemLanguage;
    NSMutableDictionary *_cacheLanStringDict;
    NSString *_appUUID;
    NSDate *_updateModifeTime;
}

+ (id)getLanguageCache;
+ (void)initialize;
+ (void)PBArrayAdd_updateModifeTime;
+ (void)PBArrayAdd_appVersion;
+ (void)PBArrayAdd_appUUID;
+ (void)PBArrayAdd_cacheLanStringDict;
+ (void)PBArrayAdd_curSystemLanguage;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *updateModifeTime; // @synthesize updateModifeTime=_updateModifeTime;
@property(nonatomic) unsigned int appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *appUUID; // @synthesize appUUID=_appUUID;
@property(retain, nonatomic) NSMutableDictionary *cacheLanStringDict; // @synthesize cacheLanStringDict=_cacheLanStringDict;
@property(copy, nonatomic) NSString *curSystemLanguage; // @synthesize curSystemLanguage=_curSystemLanguage;
- (void)save;
- (id)getStringForStringID:(id)arg1;
- (void)resetString:(id)arg1 for:(id)arg2;
- (void)resetCurLan:(id)arg1 withUpdateBundlePath:(id)arg2;
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

