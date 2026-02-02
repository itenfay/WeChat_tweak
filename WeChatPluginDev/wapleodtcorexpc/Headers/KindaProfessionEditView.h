//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMKProfessionEditViewOnSelectProfessionCallback, NSArray, NSMutableArray, NSString, UITextField, WCPayGetProfessionItem, WCPayProfession;

@interface KindaProfessionEditView
{
    NSArray *professions;
    WCPayProfession *_profession;
    WCPayGetProfessionItem *item;
    UITextField *m_view;
    NSMutableArray *m_profession_list;
    MMKProfessionEditViewOnSelectProfessionCallback *m_callback;
}

- (void).cxx_destruct;
- (void)setDefaultProfession:(int)arg1 name:(id)arg2;
- (void)setOnSelectProfessionCallback:(id)arg1;
- (void)setData:(id)arg1;
- (_Bool)getFocus;
- (void)setFocus:(_Bool)arg1;
- (int)getProfessionType;
- (id)getProfessionName;
- (void)getProfessionViewController:(id)arg1 didSelectedProfession:(id)arg2;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (id)getView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

