//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, StoreEmotionBackupLogicObject;

@interface StoreEmotionBackupMgr
{
    StoreEmotionBackupLogicObject *_backupLogicObject;
    unsigned long long _scene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) StoreEmotionBackupLogicObject *backupLogicObject; // @synthesize backupLogicObject=_backupLogicObject;
- (void)onStoreEmotionBackupLogicNoneedBackup;
- (void)onStoreEmotionBackupLogicFailed;
- (void)onStoreEmotionBackupLogicOK;
- (void)onPreQuit;
- (void)onAuthOK;
- (_Bool)canStartCgiNow;
- (_Bool)hasCheckFileExist;
- (void)backupStoreEmotionToServerFromScene:(unsigned long long)arg1 needCheckFileExist:(_Bool)arg2;
- (void)backupStoreEmotionToServerFromScene:(unsigned long long)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

