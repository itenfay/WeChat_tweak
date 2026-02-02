//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSRecursiveLock, NSString, OrderedDictionary;

@interface FileDetailMinimizeKeeperMgr
{
    NSRecursiveLock *_lock;
    OrderedDictionary *_fileVcDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OrderedDictionary *fileVcDic; // @synthesize fileVcDic=_fileVcDic;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
- (void)onMemoryWarning:(id)arg1;
- (void)onServiceInit;
- (_Bool)disablePDFView;
- (_Bool)hasAudioPlayingTask;
- (void)removeMinimizeViewControllerWithKey:(id)arg1;
- (void)addMinimizeViewController:(id)arg1 forKey:(id)arg2;
- (id)getMinimizeViewControllerWithKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

