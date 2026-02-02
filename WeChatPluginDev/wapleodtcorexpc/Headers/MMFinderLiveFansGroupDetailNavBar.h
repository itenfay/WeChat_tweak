//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveTask, MMFinderLiveTaskId, MMUIButton, MMUILabel, NSString, WCFinderHeadImageView;

@interface MMFinderLiveFansGroupDetailNavBar : UIView
{
    CDUnknownBlockType _leftButtonActionCallback;
    CDUnknownBlockType _rightButtonActionCallback;
    CDUnknownBlockType _gotoFansGroupMemListCallback;
    MMFinderLiveTaskId *_taskId;
    MMUIButton *_navLeftButton;
    MMUIButton *_navRightButton;
    MMUILabel *_titleView;
    WCFinderHeadImageView *_headerImgView;
    MMUIButton *_arrowButton;
    double _selfWidth;
}

+ (double)getTitleContentWidth:(id)arg1;
+ (double)preferHeight;
- (void).cxx_destruct;
@property(nonatomic) double selfWidth; // @synthesize selfWidth=_selfWidth;
@property(retain, nonatomic) MMUIButton *arrowButton; // @synthesize arrowButton=_arrowButton;
@property(retain, nonatomic) WCFinderHeadImageView *headerImgView; // @synthesize headerImgView=_headerImgView;
@property(retain, nonatomic) MMUILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) MMUIButton *navRightButton; // @synthesize navRightButton=_navRightButton;
@property(retain, nonatomic) MMUIButton *navLeftButton; // @synthesize navLeftButton=_navLeftButton;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(copy, nonatomic) CDUnknownBlockType gotoFansGroupMemListCallback; // @synthesize gotoFansGroupMemListCallback=_gotoFansGroupMemListCallback;
@property(copy, nonatomic) CDUnknownBlockType rightButtonActionCallback; // @synthesize rightButtonActionCallback=_rightButtonActionCallback;
@property(copy, nonatomic) CDUnknownBlockType leftButtonActionCallback; // @synthesize leftButtonActionCallback=_leftButtonActionCallback;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (id)getAdaptedDisplayAnchorNameInMaxWidth:(double)arg1;
- (double)getTitleSuffixWidth;
- (double)getTitleMaxDisplayWidth;
- (id)getAdapatedDisplayTitle;
@property(readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
- (void)onTitleTap;
- (void)onArrowButtonAction;
- (void)rightButtonAction;
- (void)leftButtonAction;
- (id)getCurrentRightButton;
- (id)getCurrentLeftButton;
- (id)getCurrentTitleView;
- (id)getArrowButton;
- (id)getHeaderImgView;
- (void)updateUI;
- (void)layoutNavRightButton;
- (void)layoutNavLeftButton;
- (void)layoutArrowButton;
- (void)layoutHeaderImgView;
- (void)layoutTitleView;
- (void)updateTitleWidgesOrigin;
- (void)layoutUI;
- (void)layoutSubviews;
- (_Bool)shouldAdaptToDarkLight;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

