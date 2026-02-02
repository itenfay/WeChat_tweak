//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ContactTagData, NSArray;

@interface ContactTagDeleteContactViewController
{
    ContactTagData *_m_contactTagData;
    NSArray *_arrContactNameList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *arrContactNameList; // @synthesize arrContactNameList=_arrContactNameList;
@property(retain, nonatomic) ContactTagData *m_contactTagData; // @synthesize m_contactTagData=_m_contactTagData;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (_Bool)onShouldSelectContact:(id)arg1;
- (void)onCancel:(id)arg1;
- (void)updatePanelBtn;
- (void)viewDidLoad;

@end

