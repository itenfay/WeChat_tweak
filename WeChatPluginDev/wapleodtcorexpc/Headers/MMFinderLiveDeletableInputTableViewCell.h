//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMUIButton, NSString, UIPanGestureRecognizer, UITextField, UIView;

@interface MMFinderLiveDeletableInputTableViewCell : UITableViewCell
{
    _Bool _isInDeleteState;
    _Bool _isEditing;
    CDUnknownBlockType _shouldBeginEditingCallback;
    CDUnknownBlockType _didEndEditingCallback;
    CDUnknownBlockType _deleteCallback;
    CDUnknownBlockType _deleteStateCallback;
    CDUnknownBlockType _shouldEndEditingCheckCallback;
    CDUnknownBlockType _editingChangedCallback;
    UITextField *_textField;
    UIView *_bgView;
    MMUIButton *_deleteButton;
    MMUIButton *_confirmDeleteButton;
    UIPanGestureRecognizer *_pan;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(nonatomic) _Bool isInDeleteState; // @synthesize isInDeleteState=_isInDeleteState;
@property(retain, nonatomic) UIPanGestureRecognizer *pan; // @synthesize pan=_pan;
@property(retain, nonatomic) MMUIButton *confirmDeleteButton; // @synthesize confirmDeleteButton=_confirmDeleteButton;
@property(retain, nonatomic) MMUIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(copy, nonatomic) CDUnknownBlockType editingChangedCallback; // @synthesize editingChangedCallback=_editingChangedCallback;
@property(copy, nonatomic) CDUnknownBlockType shouldEndEditingCheckCallback; // @synthesize shouldEndEditingCheckCallback=_shouldEndEditingCheckCallback;
@property(copy, nonatomic) CDUnknownBlockType deleteStateCallback; // @synthesize deleteStateCallback=_deleteStateCallback;
@property(copy, nonatomic) CDUnknownBlockType deleteCallback; // @synthesize deleteCallback=_deleteCallback;
@property(copy, nonatomic) CDUnknownBlockType didEndEditingCallback; // @synthesize didEndEditingCallback=_didEndEditingCallback;
@property(copy, nonatomic) CDUnknownBlockType shouldBeginEditingCallback; // @synthesize shouldBeginEditingCallback=_shouldBeginEditingCallback;
- (long long)textFieldWordLimit;
- (void)textFieldDidChangeContent:(id)arg1;
- (void)clearText;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)didClickConfirmDelete;
- (void)didClickDelete;
- (void)handlePanGesture:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)setDeleteState:(_Bool)arg1 animated:(_Bool)arg2;
- (void)innerSetDeleteState:(_Bool)arg1 animated:(_Bool)arg2;
- (void)beginEditing;
- (void)endEditing;
- (void)customizeTextField:(id)arg1;
- (void)customLayoutSubviews;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

