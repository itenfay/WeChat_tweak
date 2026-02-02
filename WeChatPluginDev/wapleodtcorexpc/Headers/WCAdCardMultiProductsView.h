//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ColorGradientView, NSString, WCAdCardMultiProductsDisplayLink, WCAdCardMultiProductsScreenOneView, WCAdCardMultiProductsScreenTwoView, WCDataItem;

@interface WCAdCardMultiProductsView
{
    WCDataItem *_dataItem;
    unsigned long long _currentScreenIndex;
    WCAdCardMultiProductsScreenOneView *_screenOneView;
    WCAdCardMultiProductsScreenTwoView *_screenTwoView;
    ColorGradientView *_topGradientView;
    ColorGradientView *_bottomGradientView;
    ColorGradientView *_rightGradientView;
    WCAdCardMultiProductsDisplayLink *_positionDisplayLink;
}

+ (double)getHeightForDataItem:(id)arg1 maxWidth:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdCardMultiProductsDisplayLink *positionDisplayLink; // @synthesize positionDisplayLink=_positionDisplayLink;
@property(retain, nonatomic) ColorGradientView *rightGradientView; // @synthesize rightGradientView=_rightGradientView;
@property(retain, nonatomic) ColorGradientView *bottomGradientView; // @synthesize bottomGradientView=_bottomGradientView;
@property(retain, nonatomic) ColorGradientView *topGradientView; // @synthesize topGradientView=_topGradientView;
@property(retain, nonatomic) WCAdCardMultiProductsScreenTwoView *screenTwoView; // @synthesize screenTwoView=_screenTwoView;
@property(retain, nonatomic) WCAdCardMultiProductsScreenOneView *screenOneView; // @synthesize screenOneView=_screenOneView;
@property(nonatomic) unsigned long long currentScreenIndex; // @synthesize currentScreenIndex=_currentScreenIndex;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)onMultiProductsScreenViewRestorePrevioisCenterWith:(id)arg1;
- (void)onMultiProductsScreenViewSaveCurrentCenterWith:(id)arg1;
- (void)terminateAnimations;
- (void)switchMultiProductsScreenToTwo;
- (void)switchMultiProductsScreenToOne;
- (void)switchMultiProductsScreenWithIndex:(unsigned long long)arg1;
- (void)hideRightGradientView;
- (void)showRightGradientView;
- (void)showVerticalGradientViews;
- (id)generateGradientView;
- (void)resizeSubviewsWithSize:(struct CGSize)arg1;
- (void)generateScreens;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 dataItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

