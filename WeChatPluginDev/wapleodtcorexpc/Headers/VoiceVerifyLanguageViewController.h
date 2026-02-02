//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSArray, NSString;
@protocol VoiceVerifyLanguageDelegate;

@interface VoiceVerifyLanguageViewController
{
    unsigned int m_uiCurIndex;
    unsigned int m_uiCurWorkingIndex;
    NSArray *m_arrLanguages;
    NSArray *m_arrLanguageDisplayNames;
    MMTableView *m_tableView;
    id <VoiceVerifyLanguageDelegate> m_delegate;
}

+ (id)GetLanguageCodeByCurLanguage:(id)arg1;
+ (id)GetLanguageNameByLanguageCode:(id)arg1;
+ (id)GetLanguageCodes;
+ (id)GetLanguageNames;
- (void).cxx_destruct;
@property(nonatomic) __weak id <VoiceVerifyLanguageDelegate> m_delegate; // @synthesize m_delegate;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)OnBack;
- (void)viewWillAppear:(_Bool)arg1;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (_Bool)useCustomNavibar;
- (id)initWithLanguageCode:(id)arg1;
- (void)initLanguageData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

