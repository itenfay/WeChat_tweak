//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableViewInfo, MMUILabel, NSString, UITextField;
@protocol WCCreateNewGroupDemoViewControllerDelegate;

@interface WCCreateNewGroupDemoViewController
{
    _Bool bWaitParentViewControllerDismissWhenDone;
    _Bool _bIsTagNameOverLimit;
    _Bool _bIsShowWarningText;
    id <WCCreateNewGroupDemoViewControllerDelegate> _delegate;
    NSString *_existTagName;
    NSString *_tagSvrName;
    MMTableViewInfo *_tableViewInfo;
    UITextField *_tagNameEditTextField;
    MMUILabel *_warningTextLabel;
    NSString *_tagNamePlaceHolder;
    NSString *_hintText;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *hintText; // @synthesize hintText=_hintText;
@property(retain, nonatomic) NSString *tagNamePlaceHolder; // @synthesize tagNamePlaceHolder=_tagNamePlaceHolder;
@property(retain, nonatomic) MMUILabel *warningTextLabel; // @synthesize warningTextLabel=_warningTextLabel;
@property(nonatomic) _Bool bIsShowWarningText; // @synthesize bIsShowWarningText=_bIsShowWarningText;
@property(nonatomic) _Bool bIsTagNameOverLimit; // @synthesize bIsTagNameOverLimit=_bIsTagNameOverLimit;
@property(retain, nonatomic) UITextField *tagNameEditTextField; // @synthesize tagNameEditTextField=_tagNameEditTextField;
@property(retain, nonatomic) MMTableViewInfo *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
@property(retain, nonatomic) NSString *tagSvrName; // @synthesize tagSvrName=_tagSvrName;
@property(retain, nonatomic) NSString *existTagName; // @synthesize existTagName=_existTagName;
@property(nonatomic) __weak id <WCCreateNewGroupDemoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTagNameChanged:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)checkSaveAlert;
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
- (void)setWaitParentViewControllerDismissWhenDone:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithPlaceHolder:(id)arg1 hintText:(id)arg2 withDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

