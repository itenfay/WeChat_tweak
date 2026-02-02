//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIButton, WCFinderTagListItem, WCFinderTagListViewLayout, WCFinderTagListViewOptions;
@protocol WCFinderTagListViewDelegate;

@interface WCFinderTagListView : UIView
{
    _Bool _autoAdjustHeight;
    id <WCFinderTagListViewDelegate> _delegate;
    WCFinderTagListViewLayout *_layout;
    WCFinderTagListViewOptions *_options;
    NSMutableArray *_tagLabels;
    UIButton *_expandButton;
    double _allTagNoWrapWidth;
    long long _mmUIUserInterfaceStyle;
}

+ (double)displayHeightWithLayout:(id)arg1 options:(id)arg2 width:(double)arg3;
+ (double)displayHeightWithItems:(id)arg1 options:(id)arg2 width:(double)arg3;
- (void).cxx_destruct;
@property(nonatomic) long long mmUIUserInterfaceStyle; // @synthesize mmUIUserInterfaceStyle=_mmUIUserInterfaceStyle;
@property(nonatomic) double allTagNoWrapWidth; // @synthesize allTagNoWrapWidth=_allTagNoWrapWidth;
@property(retain, nonatomic) UIButton *expandButton; // @synthesize expandButton=_expandButton;
@property(retain, nonatomic) NSMutableArray *tagLabels; // @synthesize tagLabels=_tagLabels;
@property(nonatomic) _Bool autoAdjustHeight; // @synthesize autoAdjustHeight=_autoAdjustHeight;
@property(retain, nonatomic) WCFinderTagListViewOptions *options; // @synthesize options=_options;
@property(retain, nonatomic) WCFinderTagListViewLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) __weak id <WCFinderTagListViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onExpandButtonClicked:(id)arg1;
- (void)onTapLabel:(id)arg1;
@property(retain, nonatomic) WCFinderTagListItem *selectedItem;
- (id)selectedLabel;
- (_Bool)isLabelSelected:(id)arg1;
- (void)updateAccessibilityForLabel:(id)arg1;
- (void)updateLabel:(id)arg1 selected:(_Bool)arg2;
- (void)sizeToFit;
- (void)layoutSubviews;
- (id)createLabel;
- (void)setupCloseBtnIconStyle;
- (void)setupCloseBtnTextStyle;
- (void)updateExpandButtonStyle;
- (void)updateExpandButton;
- (void)updateTagsLabels;
- (void)reLayout;
@property(retain, nonatomic) NSArray *items;
- (id)initWithFrame:(struct CGRect)arg1;

@end

