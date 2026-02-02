//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, MMVcardItem, NSString;

@interface VcardViewController
{
    MMVcardItem *_vcardItem;
    MMTableView *_tableView;
    NSString *_copyedText;
    struct map<unsigned long, unsigned long, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>>> _mapSectionToSectionType;
    struct map<unsigned long, unsigned long, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>>> _mapPersonCellToCellType;
    struct map<unsigned long, unsigned long, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>>> _mapUrlCellToCellType;
    struct map<unsigned long, unsigned long, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>>> _mapBirthdayCellToCellType;
    struct map<unsigned long, unsigned long, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>>> _mapNoteCellToCellType;
    struct map<unsigned long, unsigned long, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>>> _mapLogoCellToCellType;
    struct map<unsigned long, unsigned long, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>>> _mapSoundCellToCellType;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *copyedText; // @synthesize copyedText=_copyedText;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMVcardItem *vcardItem; // @synthesize vcardItem=_vcardItem;
- (void)onPhoneLongPressed:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)onLinkLongPressed:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)showMenuItemForText:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)onCopy:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)heightForUrlSectionRow:(unsigned long long)arg1;
- (double)heightForPersonSectionRow:(unsigned long long)arg1;
- (double)heightForCellAddress:(id)arg1;
- (double)heightForCellText:(id)arg1;
- (void)makeSoundSectionCell:(id)arg1 row:(unsigned long long)arg2;
- (void)makeSoundCell:(id)arg1;
- (void)makeLogoSectionCell:(id)arg1 row:(unsigned long long)arg2;
- (void)makeNoteSectionCell:(id)arg1 row:(unsigned long long)arg2;
- (void)makeBirthdaySectionCell:(id)arg1 row:(unsigned long long)arg2;
- (void)makeUrlSectionCell:(id)arg1 row:(unsigned long long)arg2;
- (void)makePersonSectionCell:(id)arg1 row:(unsigned long long)arg2;
- (void)makeAddressCell:(id)arg1 addressType:(id)arg2 addressItem:(id)arg3;
- (id)validAddressFields:(id)arg1;
- (void)makeCell:(id)arg1 col:(id)arg2 value:(id)arg3;
- (int)getLinesForLabelValueText:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)selectSoundSectionRow:(unsigned long long)arg1;
- (void)selectUrlSectionRow:(unsigned long long)arg1;
- (id)ensureHttpScheme:(id)arg1;
- (void)selectPersonSectionRow:(unsigned long long)arg1;
- (void)callPhoneNumber:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)createNewContact;
- (void)copyVcardPropertyToContact:(id)arg1;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)addToExistContact;
- (id)convertVcardAddressToCNAddress:(id)arg1;
- (void)viewDidLoad;
- (void)onReturn;
- (void)initView;
- (void)initFooterView;
- (void)onAddContact:(id)arg1;
- (void)initHeaderView;
- (id)getShowName:(id)arg1;
- (void)initData;
- (void)initSectionType;
- (void)initCellType;
- (void)initSoundSectionCellType;
- (void)initLogoSectionCellType;
- (void)initNoteSectionCellType;
- (void)initBirthdaySectionCellType;
- (void)initUrlSectionCellType;
- (void)initPersonSectionCellType;
- (_Bool)containDigit:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

