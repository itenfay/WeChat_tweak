//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJVideoTemplate, NSMutableSet, NSString;

@interface WCMomentsTemplateManager
{
    _Bool _isCheckingUpdatesForDefaulteTemplates;
    NSMutableSet *_preloadingTemplateIDs;
    MJVideoTemplate *_defaultTemplate;
    double _lastTimeThatUpdatesDefaulteTemplates;
}

- (void).cxx_destruct;
@property(nonatomic) double lastTimeThatUpdatesDefaulteTemplates; // @synthesize lastTimeThatUpdatesDefaulteTemplates=_lastTimeThatUpdatesDefaulteTemplates;
@property(nonatomic) _Bool isCheckingUpdatesForDefaulteTemplates; // @synthesize isCheckingUpdatesForDefaulteTemplates=_isCheckingUpdatesForDefaulteTemplates;
@property(retain, nonatomic) MJVideoTemplate *defaultTemplate; // @synthesize defaultTemplate=_defaultTemplate;
- (void)_clearDeprecatedData;
- (void)removeRegularGuidRecords;
- (void)removeRegularGuidRecord:(long long)arg1;
- (void)didAcceptRegularGuide:(long long)arg1;
- (_Bool)shouldShowRegularGuide:(long long)arg1;
- (id)MMKVKeyForRegularGuide:(long long)arg1;
- (_Bool)canMakeSameMiaoJianTemplateForMomentsTemplateInfo:(id)arg1;
- (id)recommendedExportSettings;
- (void)preloadTemplateInfoIfNeededWithID:(id)arg1 scene:(unsigned long long)arg2;
@property(readonly, nonatomic) NSMutableSet *preloadingTemplateIDs; // @synthesize preloadingTemplateIDs=_preloadingTemplateIDs;
- (void)updateDefaultTemplate:(id)arg1;
- (void)loadDefaultTemplate;
- (void)checkUpdatesForDefaultTemplates;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

