//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;

@interface SettingLanguageViewController
{
    unsigned int m_uiCurIndex;
    unsigned int m_uiCurWorkingIndex;
    NSArray *m_arrLanguages;
    NSArray *m_arrLanguageDisplayNames;
    _Bool _showInWeCheck;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showInWeCheck; // @synthesize showInWeCheck=_showInWeCheck;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)doChangeLanguage;
- (void)save;
- (void)cancel;
- (void)viewDidLoad;
- (void)initLanguageData;

@end

