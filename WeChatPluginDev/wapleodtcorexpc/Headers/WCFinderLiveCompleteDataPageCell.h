//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class AnchorCloseLivePageDataItem, MMUILabel, UIButton;

@interface WCFinderLiveCompleteDataPageCell : UICollectionViewCell
{
    _Bool _clickEnable;
    CDUnknownBlockType _itemSelectBlock;
    AnchorCloseLivePageDataItem *_pageDataItem;
    MMUILabel *_titleLabel;
    MMUILabel *_numberLabel;
    MMUILabel *_subTitleLabel;
    UIButton *_clickButton;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *clickButton; // @synthesize clickButton=_clickButton;
@property(retain, nonatomic) MMUILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) MMUILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool clickEnable; // @synthesize clickEnable=_clickEnable;
@property(retain, nonatomic) AnchorCloseLivePageDataItem *pageDataItem; // @synthesize pageDataItem=_pageDataItem;
@property(copy, nonatomic) CDUnknownBlockType itemSelectBlock; // @synthesize itemSelectBlock=_itemSelectBlock;
- (void)updateViewAccessibilityInfo;
- (unsigned long long)accessibilityTraits;
- (void)configViewAccessibility;
- (void)dataViewClick;
- (void)layoutUI;
- (void)createUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateWithePageDataItem:(id)arg1 clickEnable:(_Bool)arg2;

@end

