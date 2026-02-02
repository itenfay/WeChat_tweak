//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIColor, UIImageView;

@interface ContactMultiSelectCell
{
    _Bool _isEditing;
    _Bool _isSelected;
    _Bool _isDisabled;
    _Bool _isSelectedInRoomContact;
    _Bool _isCheckBoxHiddenInEditing;
    UIImageView *_selectedImageView;
    UIColor *_selectedColor;
}

+ (void)makeEditingCell:(id)arg1 selected:(_Bool)arg2 itemView:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool isCheckBoxHiddenInEditing; // @synthesize isCheckBoxHiddenInEditing=_isCheckBoxHiddenInEditing;
@property(nonatomic) _Bool isSelectedInRoomContact; // @synthesize isSelectedInRoomContact=_isSelectedInRoomContact;
@property(nonatomic) _Bool isDisabled; // @synthesize isDisabled=_isDisabled;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
- (void)changeSelectImageViewY:(double)arg1;
- (unsigned long long)accessibilityTraits;
- (void)setBackgroundColor:(id)arg1;
- (void)changeHideCheckBoxInEditing:(_Bool)arg1;
- (void)changeEditingStatus:(_Bool)arg1;
- (void)updateImageView;
- (void)changeDisableStatus:(_Bool)arg1;
- (void)changeRoomContactSelectedStatus:(_Bool)arg1;
- (void)changeSelectdStatus:(_Bool)arg1;
- (double)contentLeftMargin;
- (void)setFrame:(struct CGRect)arg1;
- (void)prepareForReuse;

@end

