//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CContact, MMUIButton, MMUILabel, UIImageView;
@protocol RecentForwardSheetItemViewDelegate;

@interface RecentForwardSheetItemView : UIView
{
    _Bool _isEditing;
    _Bool _isSelected;
    _Bool _forceDarkMode;
    CContact *_oContact;
    UIImageView *_selectedImageView;
    MMUILabel *_titleLabel;
    MMUIButton *_smallDeleteButton;
    id <RecentForwardSheetItemViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <RecentForwardSheetItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMUIButton *smallDeleteButton; // @synthesize smallDeleteButton=_smallDeleteButton;
@property(nonatomic) _Bool forceDarkMode; // @synthesize forceDarkMode=_forceDarkMode;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(retain, nonatomic) CContact *oContact; // @synthesize oContact=_oContact;
- (unsigned long long)accessibilityTraits;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onClickSmallDeleteButton;
- (void)updateImageView;
- (void)changeEditingStatus:(_Bool)arg1;
- (void)changeSelectedStatus:(_Bool)arg1;
- (id)initWithContact:(id)arg1 iconWidth:(double)arg2 bottomPadding:(double)arg3 titleFont:(id)arg4 itemMarginLeft:(double)arg5;

@end

