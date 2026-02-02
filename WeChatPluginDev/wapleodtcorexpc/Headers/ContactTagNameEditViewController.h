//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableViewInfo, MMUILabel, NSArray, NSString, UITextField;
@protocol ContactTagNameEditViewControllerDelegate;

@interface ContactTagNameEditViewController
{
    _Bool _bIsTagNameOverLimit;
    _Bool _bIsShowWarningText;
    _Bool _bIsFavTag;
    unsigned int _tagLengthLimit;
    id <ContactTagNameEditViewControllerDelegate> _delegate;
    NSString *_existTagName;
    NSString *_tagSvrName;
    MMTableViewInfo *_tableViewInfo;
    UITextField *_tagNameEditTextField;
    NSArray *_existFavTags;
    MMUILabel *_warningTextLabel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bIsFavTag; // @synthesize bIsFavTag=_bIsFavTag;
@property(retain, nonatomic) MMUILabel *warningTextLabel; // @synthesize warningTextLabel=_warningTextLabel;
@property(nonatomic) _Bool bIsShowWarningText; // @synthesize bIsShowWarningText=_bIsShowWarningText;
@property(retain, nonatomic) NSArray *existFavTags; // @synthesize existFavTags=_existFavTags;
@property(nonatomic) unsigned int tagLengthLimit; // @synthesize tagLengthLimit=_tagLengthLimit;
@property(nonatomic) _Bool bIsTagNameOverLimit; // @synthesize bIsTagNameOverLimit=_bIsTagNameOverLimit;
@property(retain, nonatomic) UITextField *tagNameEditTextField; // @synthesize tagNameEditTextField=_tagNameEditTextField;
@property(retain, nonatomic) MMTableViewInfo *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
@property(retain, nonatomic) NSString *tagSvrName; // @synthesize tagSvrName=_tagSvrName;
@property(retain, nonatomic) NSString *existTagName; // @synthesize existTagName=_existTagName;
@property(nonatomic) __weak id <ContactTagNameEditViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTagNameChanged:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)onContactsTagSaveComfirm;
- (void)setSaveButtonEnable:(_Bool)arg1;
- (_Bool)isChangeTagName;
- (void)makeWarningTextCell:(id)arg1 CellInfo:(id)arg2;
- (void)hideWarningText;
- (void)showWarningText:(id)arg1;
- (void)makeEditCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeTopicEditView;
- (void)initTableViewInfoData;
- (void)onDone;
- (void)onReturn;
- (void)dismissViewController;
- (void)viewDidBePresented:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initViewControllerWithCurrentTagName:(id)arg1 withExistTags:(id)arg2 withDelegate:(id)arg3;
- (id)initViewControllerWithCurrentTagName:(id)arg1 withTagSvrName:(id)arg2 withDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

