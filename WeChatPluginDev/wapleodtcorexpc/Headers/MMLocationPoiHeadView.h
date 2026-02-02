//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FixTitleColorButton, MMUIActivityIndicatorView, MMUIButton, MMUILabel, NSString, POIInfo, TakeCarServiceDataLogic;
@protocol MMLocationPoiHeadViewDelegate;

@interface MMLocationPoiHeadView : UIView
{
    POIInfo *_poiInfo;
    TakeCarServiceDataLogic *_takeCarDataLogic;
    _Bool _isExpand;
    unsigned int _reportExpandStatus;
    _Bool _isLoading;
    _Bool _isFromNearbyLife;
    _Bool _shouldShowForwardBtn;
    _Bool _showTakeCarBtn;
    _Bool _shouldHiddenNaviBtn;
    _Bool _showPoiDetail;
    _Bool _shouldHiddenAddress;
    id <MMLocationPoiHeadViewDelegate> _delegate;
    MMUIActivityIndicatorView *_activityIndicatorView;
    MMUILabel *_addressMainLabel;
    MMUILabel *_addressSubLabel;
    UIView *_addressMsgView;
    MMUIButton *_topRectangeView;
    FixTitleColorButton *_forwardBtn;
    MMUIButton *_navMapBtn;
    MMUILabel *_navMapLabel;
    MMUIButton *_takeCarBtn;
    MMUILabel *_takeCarLabel;
    MMUIButton *_privatTipsView;
    FixTitleColorButton *_favBtn;
    double _animationPercent;
}

- (void).cxx_destruct;
@property(nonatomic) double animationPercent; // @synthesize animationPercent=_animationPercent;
@property(retain, nonatomic) FixTitleColorButton *favBtn; // @synthesize favBtn=_favBtn;
@property(retain, nonatomic) MMUIButton *privatTipsView; // @synthesize privatTipsView=_privatTipsView;
@property(retain, nonatomic) MMUILabel *takeCarLabel; // @synthesize takeCarLabel=_takeCarLabel;
@property(retain, nonatomic) MMUIButton *takeCarBtn; // @synthesize takeCarBtn=_takeCarBtn;
@property(retain, nonatomic) MMUILabel *navMapLabel; // @synthesize navMapLabel=_navMapLabel;
@property(retain, nonatomic) MMUIButton *navMapBtn; // @synthesize navMapBtn=_navMapBtn;
@property(retain, nonatomic) FixTitleColorButton *forwardBtn; // @synthesize forwardBtn=_forwardBtn;
@property(retain, nonatomic) MMUIButton *topRectangeView; // @synthesize topRectangeView=_topRectangeView;
@property(retain, nonatomic) UIView *addressMsgView; // @synthesize addressMsgView=_addressMsgView;
@property(retain, nonatomic) MMUILabel *addressSubLabel; // @synthesize addressSubLabel=_addressSubLabel;
@property(retain, nonatomic) MMUILabel *addressMainLabel; // @synthesize addressMainLabel=_addressMainLabel;
@property(retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(nonatomic) _Bool shouldHiddenAddress; // @synthesize shouldHiddenAddress=_shouldHiddenAddress;
@property(nonatomic) _Bool showPoiDetail; // @synthesize showPoiDetail=_showPoiDetail;
@property(nonatomic) _Bool shouldHiddenNaviBtn; // @synthesize shouldHiddenNaviBtn=_shouldHiddenNaviBtn;
@property(nonatomic) _Bool showTakeCarBtn; // @synthesize showTakeCarBtn=_showTakeCarBtn;
@property(nonatomic) _Bool shouldShowForwardBtn; // @synthesize shouldShowForwardBtn=_shouldShowForwardBtn;
@property(nonatomic) _Bool isFromNearbyLife; // @synthesize isFromNearbyLife=_isFromNearbyLife;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) __weak id <MMLocationPoiHeadViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)shouldShowFavButton;
- (double)shrinkFavBtnNeedHeight;
- (double)contentHeightWhenLoading:(double)arg1;
- (double)contentHeight:(double)arg1 detailHeight:(double)arg2;
- (void)onPhoneClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onTapTakeCarBtn:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)onMenuControllerDidHide;
- (void)onMenuControllerWillShow;
- (void)copyAddressString;
- (void)onTapCopyMenuItem;
- (void)onLongPressAddressLabel:(id)arg1;
- (void)onLongPressFavBtn:(id)arg1;
- (void)onTapFavBtn:(id)arg1;
- (void)onTapSwitchBtn:(id)arg1;
- (void)onTapNavMapBtn:(id)arg1;
- (void)onTapForwardBtn:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onDragProgressChanged:(double)arg1;
- (void)setSubAddress:(id)arg1;
- (double)buttonGroupLeft;
- (void)layoutBtnGroups;
- (void)updateFavSelected:(_Bool)arg1;
- (void)updateWithPoiInfo;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateLayout;
- (void)initSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 poiInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

