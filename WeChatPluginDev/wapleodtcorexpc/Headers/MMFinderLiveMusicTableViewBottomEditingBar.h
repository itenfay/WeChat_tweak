//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, MMUIButton, MMUILabel, UIImageView;
@protocol MMFinderLiveMusicTableViewBottomEditingDelegate;

@interface MMFinderLiveMusicTableViewBottomEditingBar : UIView
{
    _Bool _isAllSelected;
    id <MMFinderLiveMusicTableViewBottomEditingDelegate> _editingDelegate;
    UIImageView *_selectedImageView;
    MMUILabel *_allSelectedTipLabel;
    MMUIButton *_deleteButton;
    CAGradientLayer *_gradientLayer;
}

+ (double)gradientMaskHeight;
+ (double)preferHeight;
- (void).cxx_destruct;
@property(nonatomic) _Bool isAllSelected; // @synthesize isAllSelected=_isAllSelected;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) MMUIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) MMUILabel *allSelectedTipLabel; // @synthesize allSelectedTipLabel=_allSelectedTipLabel;
@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(nonatomic) __weak id <MMFinderLiveMusicTableViewBottomEditingDelegate> editingDelegate; // @synthesize editingDelegate=_editingDelegate;
- (void)updateDeleteButtonEnabled:(_Bool)arg1;
- (void)clearAllSelectedState;
- (void)toggleSelectAllState:(_Bool)arg1;
- (void)toggleSelectState;
- (void)deleteButtonAction;
- (void)onSelectedImgTapGesture:(id)arg1;
- (void)layoutGradientLayer;
- (void)layoutDeleteButton;
- (void)layoutAllSelectedTipLabel;
- (void)layoutSelectedImageView;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

