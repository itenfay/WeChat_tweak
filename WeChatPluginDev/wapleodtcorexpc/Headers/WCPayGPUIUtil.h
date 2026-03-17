//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCPayGPUIUtil : NSObject
{
}

+ (_Bool)isSelectInvalidContact:(id)arg1;
+ (unsigned long long)getCorrectIntValueFromDouble:(double)arg1;
+ (void)setTextFieldDisplayValueShortestWithValue:(double)arg1 textField:(id)arg2;
+ (id)genCenterContentLabel;
+ (id)genCellInputContentRichTextViewWithLinkDeleagte:(id)arg1;
+ (id)genDecimalPadKeyboardDoneBtnToolBarWithTarget:(id)arg1 selector:(SEL)arg2;
+ (id)genCellInputContentTextViewWithFrame:(struct CGRect)arg1 textViewDelegate:(id)arg2;
+ (id)genCellInputContentTextFieldWithFrame:(struct CGRect)arg1 textFieldDelegate:(id)arg2 textFieldDidChangeTarget:(id)arg3 didChangeCallbackSelector:(SEL)arg4;
+ (id)genCellInputContentTipsLabel;

@end

