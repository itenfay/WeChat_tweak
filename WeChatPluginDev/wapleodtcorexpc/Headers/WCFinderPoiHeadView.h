//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, MMUILabel, NSMutableArray, NSString, UIImageView, UILabel, WCFinderPoiBasicInfo;
@protocol WCFinderPoiHeadViewDelegate;

@interface WCFinderPoiHeadView : UIView
{
    _Bool _isFinderHalfScreen;
    _Bool _shouldShowTakeCarButton;
    id <WCFinderPoiHeadViewDelegate> _delegate;
    double _maxWidth;
    WCFinderPoiBasicInfo *_poiBasicInfo;
    MMUILabel *_poiNameLabel;
    MMUIButton *_forwardBtn;
    MMUIButton *_favBtn;
    NSMutableArray *_descViewArray;
    UIView *_addressContainer;
    UIView *_separateLine;
    UILabel *_addressLabel;
    UIImageView *_rightArrowView;
    MMUIButton *_navMapBtn;
    MMUILabel *_navMapLabel;
    MMUIButton *_takeCarBtn;
    MMUILabel *_takeCarLabel;
    UIView *_bottomBlankView;
    UIView *_dishesContainer;
    UIView *_dishesTopBlankView;
    MMUILabel *_dishesTitleLabel;
    MMUIButton *_dishesMoreButton;
    NSMutableArray *_dishesViewArray;
    UIView *_groupBuyContainer;
    UIView *_groupBuyTopBlankView;
    MMUILabel *_groupBuyTitleLabel;
    NSMutableArray *_groupBuyViewArray;
    MMUIButton *_groupBuyMoreButton;
}

+ (double)heightWhenShrinkingWith:(id)arg1;
+ (double)heightWith:(id)arg1 maxWidth:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *groupBuyMoreButton; // @synthesize groupBuyMoreButton=_groupBuyMoreButton;
@property(retain, nonatomic) NSMutableArray *groupBuyViewArray; // @synthesize groupBuyViewArray=_groupBuyViewArray;
@property(retain, nonatomic) MMUILabel *groupBuyTitleLabel; // @synthesize groupBuyTitleLabel=_groupBuyTitleLabel;
@property(retain, nonatomic) UIView *groupBuyTopBlankView; // @synthesize groupBuyTopBlankView=_groupBuyTopBlankView;
@property(retain, nonatomic) UIView *groupBuyContainer; // @synthesize groupBuyContainer=_groupBuyContainer;
@property(retain, nonatomic) NSMutableArray *dishesViewArray; // @synthesize dishesViewArray=_dishesViewArray;
@property(retain, nonatomic) MMUIButton *dishesMoreButton; // @synthesize dishesMoreButton=_dishesMoreButton;
@property(retain, nonatomic) MMUILabel *dishesTitleLabel; // @synthesize dishesTitleLabel=_dishesTitleLabel;
@property(retain, nonatomic) UIView *dishesTopBlankView; // @synthesize dishesTopBlankView=_dishesTopBlankView;
@property(retain, nonatomic) UIView *dishesContainer; // @synthesize dishesContainer=_dishesContainer;
@property(retain, nonatomic) UIView *bottomBlankView; // @synthesize bottomBlankView=_bottomBlankView;
@property(retain, nonatomic) MMUILabel *takeCarLabel; // @synthesize takeCarLabel=_takeCarLabel;
@property(retain, nonatomic) MMUIButton *takeCarBtn; // @synthesize takeCarBtn=_takeCarBtn;
@property(retain, nonatomic) MMUILabel *navMapLabel; // @synthesize navMapLabel=_navMapLabel;
@property(retain, nonatomic) MMUIButton *navMapBtn; // @synthesize navMapBtn=_navMapBtn;
@property(retain, nonatomic) UIImageView *rightArrowView; // @synthesize rightArrowView=_rightArrowView;
@property(retain, nonatomic) UILabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(retain, nonatomic) UIView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) UIView *addressContainer; // @synthesize addressContainer=_addressContainer;
@property(retain, nonatomic) NSMutableArray *descViewArray; // @synthesize descViewArray=_descViewArray;
@property(retain, nonatomic) MMUIButton *favBtn; // @synthesize favBtn=_favBtn;
@property(retain, nonatomic) MMUIButton *forwardBtn; // @synthesize forwardBtn=_forwardBtn;
@property(retain, nonatomic) MMUILabel *poiNameLabel; // @synthesize poiNameLabel=_poiNameLabel;
@property(retain, nonatomic) WCFinderPoiBasicInfo *poiBasicInfo; // @synthesize poiBasicInfo=_poiBasicInfo;
@property(nonatomic) _Bool shouldShowTakeCarButton; // @synthesize shouldShowTakeCarButton=_shouldShowTakeCarButton;
@property(nonatomic) _Bool isFinderHalfScreen; // @synthesize isFinderHalfScreen=_isFinderHalfScreen;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) __weak id <WCFinderPoiHeadViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)dataReportParamDict;
- (void)onTapDescViewExpandButton:(id)arg1;
- (struct CGSize)favBtnSize;
- (void)onTapRecommendDishes;
- (void)onTapAddressEntrance;
- (void)onTapTakeCarBtn:(id)arg1;
- (void)onTapNavMapBtn:(id)arg1;
- (void)onTapFavBtn:(id)arg1;
- (void)onTapForwardBtn:(id)arg1;
- (void)updateDetailFlexLayout;
- (void)updateMainFlexLayput;
- (void)groupBuyViewActionButtonDidClick:(id)arg1;
- (void)onTapGroupBuyMoreButton;
- (void)onTapGroupBuyView:(id)arg1;
- (id)genGroupBuyView:(id)arg1 isLast:(_Bool)arg2 hasGroupBuyMoreButton:(_Bool)arg3;
- (id)genRecommendDishView:(id)arg1;
- (void)updateFavSelected:(_Bool)arg1;
- (void)changeMainViewsAlpha:(double)arg1;
- (void)changeDetailViewsAlpha:(double)arg1;
- (void)onDragProgressChanged:(double)arg1;
- (void)updateWith:(id)arg1;
- (void)setDescView:(id)arg1 isExpanding:(_Bool)arg2;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

