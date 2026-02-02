//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableViewInfo, NSString, WCTableViewNormalCellManager;

@interface NameEditorViewController
{
    MMTableViewInfo *m_tableViewInfo;
    WCTableViewNormalCellManager *m_editInfo;
    NSString *m_nsOldText;
    NSString *m_nsFooterTip;
    NSString *m_nsHeaderTip;
    id m_targetOnSave;
    SEL m_selOnSave;
    _Bool m_bEnableEmpty;
    _Bool m_bAutoDismis;
    id m_userData;
    unsigned int m_uiScene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uiScene; // @synthesize m_uiScene;
@property(retain, nonatomic) WCTableViewNormalCellManager *m_editInfo; // @synthesize m_editInfo;
@property(retain, nonatomic) id m_userData; // @synthesize m_userData;
@property(nonatomic) _Bool m_bAutoDismis; // @synthesize m_bAutoDismis;
@property(nonatomic) _Bool m_bEnableEmpty; // @synthesize m_bEnableEmpty;
@property(retain, nonatomic) NSString *m_nsOldText; // @synthesize m_nsOldText;
- (void)enableAutoCorrect:(_Bool)arg1;
- (unsigned long long)logid;
- (void)registerYReportSdk;
- (void)dealloc;
- (id)initWithSaveTarget:(id)arg1 sel:(SEL)arg2 headerTip:(id)arg3 footerTip:(id)arg4 textTip:(id)arg5;
- (id)initWithSaveTarget:(id)arg1 sel:(SEL)arg2 footerTip:(id)arg3 textTip:(id)arg4;
- (void)updateWordCount:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)onSaveText;
- (void)disMissThisViewAnimated;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

