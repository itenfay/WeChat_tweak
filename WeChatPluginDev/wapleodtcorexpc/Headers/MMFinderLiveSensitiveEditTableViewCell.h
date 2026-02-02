//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class FinderLiveSensitiveTextField, NSString;

@interface MMFinderLiveSensitiveEditTableViewCell : UITableViewCell
{
    CDUnknownBlockType _onSensitiveWordAddCallback;
    FinderLiveSensitiveTextField *_textField;
}

+ (double)preferHeight;
+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveSensitiveTextField *textField; // @synthesize textField=_textField;
@property(copy, nonatomic) CDUnknownBlockType onSensitiveWordAddCallback; // @synthesize onSensitiveWordAddCallback=_onSensitiveWordAddCallback;
@property(nonatomic) _Bool ignoreResignFirstResponder; // @dynamic ignoreResignFirstResponder;
- (void)resignInput;
- (unsigned int)getSensitiveWordMaxNum;
- (void)addSensitiveWord:(id)arg1;
- (void)handleForInputTextChanged:(id)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)layoutTextField;
- (void)layoutUI;
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

