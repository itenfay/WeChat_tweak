//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock, NSString;

@interface ChatLogDataStat : NSObject
{
    NSMutableDictionary *_dicFileInfo;
    NSMutableDictionary *_dicSessionInfo;
    long long _cacheVersion;
    NSRecursiveLock *_markLock;
}

+ (void)resetChatLogStat;
+ (_Bool)saveChatLogStat:(id)arg1 isAll:(_Bool)arg2;
+ (id)loadChatLogStatFromFile;
+ (void)initialize;
+ (void)PBArrayAdd_cacheVersion;
+ (void)PBArrayAdd_dicSessionInfo;
+ (void)PBArrayAdd_dicFileInfo;
- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *markLock; // @synthesize markLock=_markLock;
@property(nonatomic) long long cacheVersion; // @synthesize cacheVersion=_cacheVersion;
@property(retain, nonatomic) NSMutableDictionary *dicSessionInfo; // @synthesize dicSessionInfo=_dicSessionInfo;
@property(retain, nonatomic) NSMutableDictionary *dicFileInfo; // @synthesize dicFileInfo=_dicFileInfo;
- (shared_ptr_5102c92c)convertSessionItemInfoToItem:(id)arg1;
- (id)convertSessionItemToInfo:(shared_ptr_5102c92c)arg1;
- (void)saveObject:(id)arg1 withKey:(id)arg2;
- (id)getObjectForKey:(id)arg1;
- (void)saveSessionInfo:(id)arg1 withKey:(id)arg2;
- (id)getSessionInfoForKey:(id)arg1;
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

