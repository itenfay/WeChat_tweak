//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, UIScrollView, WCFinderLiveStarterSwitchModeItem;
@protocol WCFinderLiveStarterSwitchModeDelegate;

@interface WCFinderLiveStarterSwitchModeView : UIView
{
    _Bool _isPortrait;
    double _leftMargin;
    double _rightMargin;
    CDUnknownBlockType _redDotQueryBlock;
    CDUnknownBlockType _redDotExposeBlock;
    CDUnknownBlockType _redDotClickBlock;
    id <WCFinderLiveStarterSwitchModeDelegate> _delegate;
    NSArray *_itemArray;
    NSArray *_cellArray;
    UIScrollView *_scrollView;
    WCFinderLiveStarterSwitchModeItem *_item;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveStarterSwitchModeItem *item; // @synthesize item=_item;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSArray *cellArray; // @synthesize cellArray=_cellArray;
@property(retain, nonatomic) NSArray *itemArray; // @synthesize itemArray=_itemArray;
@property(nonatomic) __weak id <WCFinderLiveStarterSwitchModeDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType redDotClickBlock; // @synthesize redDotClickBlock=_redDotClickBlock;
@property(copy, nonatomic) CDUnknownBlockType redDotExposeBlock; // @synthesize redDotExposeBlock=_redDotExposeBlock;
@property(copy, nonatomic) CDUnknownBlockType redDotQueryBlock; // @synthesize redDotQueryBlock=_redDotQueryBlock;
@property(nonatomic) double rightMargin; // @synthesize rightMargin=_rightMargin;
@property(nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
@property(nonatomic) _Bool isPortrait; // @synthesize isPortrait=_isPortrait;
- (void)selectWithLiveModeSubItem:(id)arg1;
- (void)initWithLiveStarterSwitchModeItem:(id)arg1;
- (double)videoContainerViewPadding;
- (double)itemMargin;
- (double)getCollectionViewCellWidthAtIndexPath:(id)arg1;
- (void)layoutUI;
- (void)createUI;
- (void)layoutSubviews;
- (void)updateCellWithItem:(id)arg1 index:(long long)arg2 originX:(double)arg3;
- (void)playAnimation;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)getCellWithItem:(id)arg1 originX:(double)arg2;
- (void)createCellArray;

@end

