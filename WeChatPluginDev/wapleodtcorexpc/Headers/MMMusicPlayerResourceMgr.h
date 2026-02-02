//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MVVideoTransitionResourceConfig, NSMutableDictionary, NSString;

@interface MMMusicPlayerResourceMgr
{
    _Bool _hasLoadVideoResourcePath;
    unsigned int _kVideoResrouceCount;
    NSString *_resMainDir;
    NSMutableDictionary *_dicVideoResourcePath;
    MVVideoTransitionResourceConfig *_curConfig;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MVVideoTransitionResourceConfig *curConfig; // @synthesize curConfig=_curConfig;
@property(nonatomic) unsigned int kVideoResrouceCount; // @synthesize kVideoResrouceCount=_kVideoResrouceCount;
@property(nonatomic) _Bool hasLoadVideoResourcePath; // @synthesize hasLoadVideoResourcePath=_hasLoadVideoResourcePath;
@property(retain, nonatomic) NSMutableDictionary *dicVideoResourcePath; // @synthesize dicVideoResourcePath=_dicVideoResourcePath;
@property(retain, nonatomic) NSString *resMainDir; // @synthesize resMainDir=_resMainDir;
- (void)onResDeleteFinishWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (id)genNameWithCurLanguage:(id)arg1;
- (_Bool)unzipRes:(unsigned long long)arg1 from:(id)arg2;
- (id)genMVTransitionModelArr;
- (id)getVideoResourcePathWithSubType:(unsigned int)arg1;
- (void)deleteVideoResourcePathWithSubType:(unsigned int)arg1;
- (void)addVideoResourcePath:(id)arg1 withSubType:(unsigned int)arg2;
- (void)loadVideoResourcePath;
- (id)pathForSubType:(unsigned long long)arg1;
- (id)nameForSubType:(unsigned long long)arg1;
- (_Bool)dirIsEmpty:(id)arg1;
- (id)getMVTransitionPathById:(id)arg1;
- (id)availableMVTransitionModelArrForPanel;
- (id)translucentIconPathForAppId:(id)arg1;
- (id)translucentIconForAppId:(id)arg1 size:(struct CGSize)arg2;
- (id)getVideoResourcePathWithIndex:(unsigned long long)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

