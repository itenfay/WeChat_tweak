//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UICollectionView, UIColor, UIFont, UISelectionFeedbackGenerator;
@protocol MJPickerViewDataSource, MJPickerViewDelegate;

@interface MJPickerView : UIView
{
    UICollectionView *_collectionView;
    _Bool _triggeredByDragging;
    _Bool _triggeredSilently;
    long long _itemAtCenterPoint;
    long long _halfItemAtCenterPoint;
    struct map<long, double, std::less<long>, std::allocator<std::pair<const long, double>>> _itemCenterMap;
    _Bool _isFeedbackEnabled;
    _Bool _isDarkCornerEnabled;
    id <MJPickerViewDelegate> _delegate;
    id <MJPickerViewDataSource> _dataSource;
    UIFont *_font;
    UIColor *_textColor;
    double _interSpacing;
    double _labelHeight;
    UISelectionFeedbackGenerator *_feedback;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) UISelectionFeedbackGenerator *feedback; // @synthesize feedback=_feedback;
@property(nonatomic) _Bool isDarkCornerEnabled; // @synthesize isDarkCornerEnabled=_isDarkCornerEnabled;
@property(nonatomic) _Bool isFeedbackEnabled; // @synthesize isFeedbackEnabled=_isFeedbackEnabled;
@property(nonatomic) double labelHeight; // @synthesize labelHeight=_labelHeight;
@property(nonatomic) double interSpacing; // @synthesize interSpacing=_interSpacing;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) __weak id <MJPickerViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <MJPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)centralIndexPath;
- (_Bool)shouldFeedback;
- (void)updateDarkCornerIfNeeded;
- (void)addDarkCornerMask;
- (_Bool)scrollAcrossOrCloseToItemCenter;
- (struct CGSize)sizeForContent:(id)arg1 elementCategory:(unsigned long long)arg2;
- (struct CGSize)sizeForItem:(long long)arg1 elementCategory:(unsigned long long)arg2;
- (void)feedbackIfNeeded;
- (void)notifyPassThroughAndFeedback;
- (void)notifyDidSelect:(id)arg1;
- (void)notifyWillBeginDragging;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForLabelInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)handleSupplementaryLabelTapGesture:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)reloadData:(CDUnknownBlockType)arg1;
- (void)selectItem:(long long)arg1 silent:(_Bool)arg2 animated:(_Bool)arg3;
- (void)selectItem:(long long)arg1 animated:(_Bool)arg2;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

