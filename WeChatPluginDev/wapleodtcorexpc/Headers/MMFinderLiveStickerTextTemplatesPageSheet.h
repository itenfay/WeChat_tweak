//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveScrollGradientMaskingView, NSArray, NSString, UIButton, UICollectionView, UICollectionViewFlowLayout, UILabel, UIView;
@protocol MMFinderLiveStickerTextTemplatesPageSheetDelegate;

@interface MMFinderLiveStickerTextTemplatesPageSheet
{
    id <MMFinderLiveStickerTextTemplatesPageSheetDelegate> _delegate;
    NSArray *_templateItems;
    unsigned long long _result;
    UIView *_customTitleBarView;
    UIButton *_closeButton;
    UILabel *_titleLabel;
    UIButton *_confirmButton;
    UIView *_collectionContainerView;
    MMLiveScrollGradientMaskingView *_collectionViewMaskingView;
    UICollectionViewFlowLayout *_templatesCollectionViewLayout;
    UICollectionView *_templatesCollectionView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UICollectionView *templatesCollectionView; // @synthesize templatesCollectionView=_templatesCollectionView;
@property(retain, nonatomic) UICollectionViewFlowLayout *templatesCollectionViewLayout; // @synthesize templatesCollectionViewLayout=_templatesCollectionViewLayout;
@property(retain, nonatomic) MMLiveScrollGradientMaskingView *collectionViewMaskingView; // @synthesize collectionViewMaskingView=_collectionViewMaskingView;
@property(retain, nonatomic) UIView *collectionContainerView; // @synthesize collectionContainerView=_collectionContainerView;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *customTitleBarView; // @synthesize customTitleBarView=_customTitleBarView;
@property(nonatomic) unsigned long long result; // @synthesize result=_result;
@property(retain, nonatomic) NSArray *templateItems; // @synthesize templateItems=_templateItems;
@property(nonatomic) __weak id <MMFinderLiveStickerTextTemplatesPageSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void)initializeComponents;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)onCanceled;
- (void)onConfirmed;
- (void)layoutSubviews;
- (void)pageSheetDidAppear;
- (void)pageSheetDidClose:(_Bool)arg1;
- (double)pageSheetContentWidth;
- (id)initWithTemplateItems:(id)arg1 selectedIndex:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

