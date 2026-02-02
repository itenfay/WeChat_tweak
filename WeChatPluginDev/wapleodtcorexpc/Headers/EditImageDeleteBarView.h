//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIButton, UILabel, UIView;

@interface EditImageDeleteBarView
{
    UIView *_line;
    _Bool _isSelected;
    UIButton *_deleteBtn;
    UILabel *_tipLabel;
    unsigned long long _editImageUIStyle;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long editImageUIStyle; // @synthesize editImageUIStyle=_editImageUIStyle;
@property(retain, nonatomic) UILabel *_tipLabel; // @synthesize _tipLabel;
@property(nonatomic) _Bool _isSelected; // @synthesize _isSelected;
@property(retain, nonatomic) UIButton *_deleteBtn; // @synthesize _deleteBtn;
- (void)setFrame:(struct CGRect)arg1;
- (void)reloadButton;
- (id)initWithFrame:(struct CGRect)arg1;

@end

