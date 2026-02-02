//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, MMUILabel;
@protocol MMFinderLiveGoodsManagerViewBottomActionViewDelegate;

@interface MMFinderLiveGoodsManagerViewBottomActionView : UIView
{
    unsigned int _selectedCellsSize;
    MMUIButton *_setTopButton;
    MMUIButton *_deleteButton;
    MMUILabel *_sizeLabel;
    UIView *_seperatorView;
    id <MMFinderLiveGoodsManagerViewBottomActionViewDelegate> _editingDelegate;
}

+ (double)contentHeight;
- (void).cxx_destruct;
@property(nonatomic) __weak id <MMFinderLiveGoodsManagerViewBottomActionViewDelegate> editingDelegate; // @synthesize editingDelegate=_editingDelegate;
@property(nonatomic) unsigned int selectedCellsSize; // @synthesize selectedCellsSize=_selectedCellsSize;
@property(retain, nonatomic) UIView *seperatorView; // @synthesize seperatorView=_seperatorView;
@property(retain, nonatomic) MMUILabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
@property(retain, nonatomic) MMUIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) MMUIButton *setTopButton; // @synthesize setTopButton=_setTopButton;
- (void)updateButtonStatus;
- (void)updateWithSelectedCellSize:(unsigned long long)arg1;
- (void)setTopButtonAction;
- (void)deleteButtonAction;
- (void)layoutSeperatorLine;
- (void)layoutSizeLabel;
- (void)layoutSetTopButton;
- (void)layoutDeleteButton;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

@end

