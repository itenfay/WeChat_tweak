//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSArray, NSString, UIButton, UITableView;
@protocol SolitaireGetPhoneNumberSheetDelegate;

@interface SolitaireGetPhoneNumberSheet
{
    id <SolitaireGetPhoneNumberSheetDelegate> _phoneSheetDelegate;
    MMUILabel *_infoLabel;
    UIButton *_comfirmButton;
    UIButton *_cancelButton;
    UITableView *_phoneListTableView;
    NSArray *_phoneNumbers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *phoneNumbers; // @synthesize phoneNumbers=_phoneNumbers;
@property(retain, nonatomic) UITableView *phoneListTableView; // @synthesize phoneListTableView=_phoneListTableView;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *comfirmButton; // @synthesize comfirmButton=_comfirmButton;
@property(retain, nonatomic) MMUILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(nonatomic) __weak id <SolitaireGetPhoneNumberSheetDelegate> phoneSheetDelegate; // @synthesize phoneSheetDelegate=_phoneSheetDelegate;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)onTapCancelButton;
- (void)onTapComfirmButton:(id)arg1;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (double)contentHeight;
- (void)layoutSubViews;
- (void)loadSubViews;
- (id)initWithPhoneNumbers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

