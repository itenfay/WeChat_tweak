//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;

@interface ChatRoomSpecialAttentionMemberSelectViewController
{
    NSArray *_arrAdminOrOwnerUserName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *arrAdminOrOwnerUserName; // @synthesize arrAdminOrOwnerUserName=_arrAdminOrOwnerUserName;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)mmcurrentIndexForTableView:(id)arg1;
- (long long)mmtableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)mmsectionIndexTitlesForTableView:(id)arg1;
- (_Bool)mmForceUseSpecialIndexShapeTableView:(id)arg1;
- (_Bool)mmforceUseTableView:(id)arg1;
- (id)mmimageTableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (void)loadHeaderViewSelection;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)getSpecialAttentionMemberOwnOrAdminKey;
- (Class)getNewContactsSearchPanelViewClass;
- (void)addContact:(id)arg1;
- (void)viewDidLoad;

@end

