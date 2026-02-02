//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;

@interface SettingTranslateLanguageViewController
{
    unsigned int m_uiCurIndex;
    unsigned int m_uiCurWorkingIndex;
    NSArray *m_arrLanguages;
    NSArray *m_arrLanguageDisplayNames;
    int _scene;
    CDUnknownBlockType _onTranslateLanguageChangedBlock;
    id _userData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id userData; // @synthesize userData=_userData;
@property(copy, nonatomic) CDUnknownBlockType onTranslateLanguageChangedBlock; // @synthesize onTranslateLanguageChangedBlock=_onTranslateLanguageChangedBlock;
@property(nonatomic) int scene; // @synthesize scene=_scene;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)save;
- (void)cancel;
- (id)currentSelectDisplayName;
- (void)registerYReportSdk;
- (void)viewDidLoad;
- (void)initLanguageData;
- (id)init;

@end

