//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ContactTagData, NSString;

@interface ContactsAuthorityManageContactListViewController
{
    ContactTagData *_m_tagData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ContactTagData *m_tagData; // @synthesize m_tagData=_m_tagData;
- (void)onSelectedOrCancelContact:(id)arg1 isSelected:(_Bool)arg2;
- (id)getReloadContactDataList;
- (void)initData;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

