//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMWebImageView, NSString, PAGFile, PAGView, UILabel, UIView, WCProgressMaskView, WCVideoProducerTemplateCellViewModel;

@interface WCVideoProducerTemplateIconView : UICollectionViewCell
{
    PAGFile *_pagFile;
    _Bool _isTemplateCellSelected;
    WCVideoProducerTemplateCellViewModel *_templateCellViewModel;
    UIView *_templateIconContainerView;
    MMWebImageView *_templateIconImageView;
    UIView *_templateIconBackgroundView;
    UILabel *_templateNameLabel;
    PAGView *_loadingPagView;
    UIView *_selectedMaskView;
    UIView *_selectedDefaultView;
    UIView *_selectedEditableView;
    WCProgressMaskView *_progressMaskView;
}

+ (struct CGSize)cellViewSize;
+ (struct CGSize)iconSize;
+ (id)headerIdentifier;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) WCProgressMaskView *progressMaskView; // @synthesize progressMaskView=_progressMaskView;
@property(retain, nonatomic) UIView *selectedEditableView; // @synthesize selectedEditableView=_selectedEditableView;
@property(retain, nonatomic) UIView *selectedDefaultView; // @synthesize selectedDefaultView=_selectedDefaultView;
@property(retain, nonatomic) UIView *selectedMaskView; // @synthesize selectedMaskView=_selectedMaskView;
@property(retain, nonatomic) PAGView *loadingPagView; // @synthesize loadingPagView=_loadingPagView;
@property(nonatomic) _Bool isTemplateCellSelected; // @synthesize isTemplateCellSelected=_isTemplateCellSelected;
@property(retain, nonatomic) UILabel *templateNameLabel; // @synthesize templateNameLabel=_templateNameLabel;
@property(retain, nonatomic) UIView *templateIconBackgroundView; // @synthesize templateIconBackgroundView=_templateIconBackgroundView;
@property(retain, nonatomic) MMWebImageView *templateIconImageView; // @synthesize templateIconImageView=_templateIconImageView;
@property(retain, nonatomic) UIView *templateIconContainerView; // @synthesize templateIconContainerView=_templateIconContainerView;
@property(retain, nonatomic) WCVideoProducerTemplateCellViewModel *templateCellViewModel; // @synthesize templateCellViewModel=_templateCellViewModel;
- (void)updateSubviewForPropertyKeyPath:(id)arg1;
- (id)observingPropertyKeyPathsForViewModel;
- (void)viewModel:(id)arg1 didChangeProperty:(id)arg2 fromOldValue:(id)arg3 toNewValue:(id)arg4;
- (void)didChangeViewModel:(id)arg1 fromOldObject:(id)arg2 toNewObject:(id)arg3;
- (void)onLoadImageOK:(id)arg1;
- (void)_relayoutSelectedDefaultView;
- (void)_initSelectedDefaultViewIfNeeded;
- (void)_relayoutSelectedEditableView;
- (void)_initSelectedEditableIconBrandViewIfNeeded;
- (void)_initSelectedEditableIconMaskViewIfNeeded;
- (void)_setRounded;
- (void)_setRoundedRectangle;
- (id)loadingPagFile;
- (void)_initView;
- (void)_loadForAccessbility;
- (void)_relayoutSelectedMaskView:(id)arg1;
- (void)_relayoutTemplateNameLabel:(id)arg1 maxWidth:(double)arg2;
- (void)_updateProgressMaskViewWithCellVM:(id)arg1;
- (void)_updateTemplateNameWithCellVM:(id)arg1;
- (void)_loadForLauncherCellView:(id)arg1;
- (void)_loadForFolderCellView:(id)arg1;
- (void)_loadForStubCellView:(id)arg1;
- (void)_loadForNormalCellView:(id)arg1;
- (void)loadTemplateCellViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

