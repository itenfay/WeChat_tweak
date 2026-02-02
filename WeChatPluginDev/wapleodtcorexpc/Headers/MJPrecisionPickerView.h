//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MJPrecisionPickerViewLayout, NSString, UICollectionView, UIColor, UIFont;
@protocol MJPrecisionPickerViewDataSource, MJPrecisionPickerViewDelegate;

@interface MJPrecisionPickerView : UIView
{
    UICollectionView *_collectionView;
    MJPrecisionPickerViewLayout *_collectionViewLayout;
    _Bool _triggeredSilently;
    struct {
        _Bool needsScroll;
        _Bool silently;
        _Bool animated;
        long long toValue;
    } _scrollInfo;
    _Bool _isDirty;
    struct vector<UPPrecisionCellModel, std::allocator<UPPrecisionCellModel>> _cellModels;
    long long _lastValueAtCenter;
    long long _lastScrollAcrossValue;
    struct map<long, double, std::less<long>, std::allocator<std::pair<const long, double>>> _valueCenterMap;
    _Bool _isShowLabelIndicator;
    id <MJPrecisionPickerViewDataSource> _dataSource;
    id <MJPrecisionPickerViewDelegate> _delegate;
    long long _minValue;
    long long _maxValue;
    unsigned long long _precision;
    unsigned long long _stride;
    long long _defaultValue;
    double _autoSnapThreshold;
    double _strideWidth;
    UIFont *_font;
    UIColor *_textColor;
    double _labelHeight;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool isShowLabelIndicator; // @synthesize isShowLabelIndicator=_isShowLabelIndicator;
@property(nonatomic) double labelHeight; // @synthesize labelHeight=_labelHeight;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) double strideWidth; // @synthesize strideWidth=_strideWidth;
@property(nonatomic) double autoSnapThreshold; // @synthesize autoSnapThreshold=_autoSnapThreshold;
@property(nonatomic) long long defaultValue; // @synthesize defaultValue=_defaultValue;
@property(nonatomic) unsigned long long stride; // @synthesize stride=_stride;
@property(nonatomic) unsigned long long precision; // @synthesize precision=_precision;
@property(nonatomic) long long maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) long long minValue; // @synthesize minValue=_minValue;
@property(nonatomic) __weak id <MJPrecisionPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MJPrecisionPickerViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)findNearestIndividualIndexPath:(id)arg1;
- (_Bool)isCollectionViewLoaded;
- (id)indexPathForValue:(long long)arg1;
- (struct CGPoint)contentOffsetForValue:(long long)arg1;
- (long long)valueAtCenterPoint;
- (_Bool)scrollAcrossOrCloseToValue;
- (void)notifySelectValue;
- (void)notifyScrollAcrossValue;
- (void)updateMaskRect;
- (double)widthForLabel:(id)arg1;
- (double)widthForContent:(id)arg1 ofValue:(long long)arg2;
- (void)rebuild;
- (void)rebuildIfNeeded;
- (const CDStruct_b8f58034 *)modelAtIndex:(long long)arg1;
- (long long)modelCount;
- (void)scrollToValue:(long long)arg1 silently:(_Bool)arg2 animated:(_Bool)arg3;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (double)widthForLabelItemAtIndexPath:(id)arg1;
- (long long)lengthForItemAtIndexPath:(id)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)handleSupplementaryLabelTapGesture:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)selectValue:(long long)arg1 silent:(_Bool)arg2 animated:(_Bool)arg3;
- (void)selectValue:(long long)arg1 animated:(_Bool)arg2;
- (void)commonInit;
- (void)setupDefaultValues;
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

