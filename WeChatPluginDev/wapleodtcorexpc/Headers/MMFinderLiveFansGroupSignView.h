//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, NSString, UIFont, UIImageView;

@interface MMFinderLiveFansGroupSignView : UIView
{
    _Bool _autoAdjustWidth;
    _Bool _autoAdjustHeight;
    _Bool _isSuperfan;
    _Bool _forceClearBGColorForSuperfan;
    _Bool _isFansGroupIconCenter;
    _Bool _customAccessibilitySetting;
    _Bool _isTransfering;
    _Bool _forceLayout;
    long long _uiStyle;
    long long _uiMode;
    long long _uiShape;
    NSString *_fansGroupText;
    unsigned long long _fansGroupRank;
    double _fansGroupIconLeft;
    UIFont *_fanGroupTextFont;
    UIImageView *_fansGroupBackView;
    UIImageView *_fansSignIconView;
    MMUILabel *_fansRankLabel;
    MMUILabel *_fansSignLabel;
    UIImageView *_fansSignTailView;
    double _currentLayoutFontScale;
    struct CGSize _fanGroupIconSize;
    struct CGSize _originalIconImageSize;
}

+ (unsigned int)FanHighLevelLowerBound;
+ (unsigned int)FanMediumLevelLowerBound;
+ (id)getRankImageWithRank:(unsigned long long)arg1 isSuperfan:(_Bool)arg2;
+ (id)getFansGroupFontForUIStyle:(long long)arg1;
+ (double)getFansSignLabelLeftWithStyle:(long long)arg1 rank:(unsigned long long)arg2 isSuperfan:(_Bool)arg3;
+ (struct CGSize)getFansGroupSignSizeWithName:(id)arg1 uiStyle:(long long)arg2 rank:(unsigned int)arg3 isSuperfan:(_Bool)arg4 customFont:(id)arg5;
+ (struct CGSize)getFansGroupSignSizeWithName:(id)arg1 uiStyle:(long long)arg2 rank:(unsigned int)arg3 isSuperfan:(_Bool)arg4;
- (void).cxx_destruct;
@property(nonatomic) struct CGSize originalIconImageSize; // @synthesize originalIconImageSize=_originalIconImageSize;
@property(nonatomic) _Bool forceLayout; // @synthesize forceLayout=_forceLayout;
@property(nonatomic) double currentLayoutFontScale; // @synthesize currentLayoutFontScale=_currentLayoutFontScale;
@property(nonatomic) _Bool isTransfering; // @synthesize isTransfering=_isTransfering;
@property(retain, nonatomic) UIImageView *fansSignTailView; // @synthesize fansSignTailView=_fansSignTailView;
@property(retain, nonatomic) MMUILabel *fansSignLabel; // @synthesize fansSignLabel=_fansSignLabel;
@property(retain, nonatomic) MMUILabel *fansRankLabel; // @synthesize fansRankLabel=_fansRankLabel;
@property(retain, nonatomic) UIImageView *fansSignIconView; // @synthesize fansSignIconView=_fansSignIconView;
@property(retain, nonatomic) UIImageView *fansGroupBackView; // @synthesize fansGroupBackView=_fansGroupBackView;
@property(nonatomic) _Bool customAccessibilitySetting; // @synthesize customAccessibilitySetting=_customAccessibilitySetting;
@property(retain, nonatomic) UIFont *fanGroupTextFont; // @synthesize fanGroupTextFont=_fanGroupTextFont;
@property(nonatomic) double fansGroupIconLeft; // @synthesize fansGroupIconLeft=_fansGroupIconLeft;
@property(nonatomic) _Bool isFansGroupIconCenter; // @synthesize isFansGroupIconCenter=_isFansGroupIconCenter;
@property(nonatomic) struct CGSize fanGroupIconSize; // @synthesize fanGroupIconSize=_fanGroupIconSize;
@property(nonatomic) _Bool forceClearBGColorForSuperfan; // @synthesize forceClearBGColorForSuperfan=_forceClearBGColorForSuperfan;
@property(nonatomic) _Bool isSuperfan; // @synthesize isSuperfan=_isSuperfan;
@property(nonatomic) _Bool autoAdjustHeight; // @synthesize autoAdjustHeight=_autoAdjustHeight;
@property(nonatomic) _Bool autoAdjustWidth; // @synthesize autoAdjustWidth=_autoAdjustWidth;
@property(nonatomic) unsigned long long fansGroupRank; // @synthesize fansGroupRank=_fansGroupRank;
@property(retain, nonatomic) NSString *fansGroupText; // @synthesize fansGroupText=_fansGroupText;
@property(nonatomic) long long uiShape; // @synthesize uiShape=_uiShape;
@property(nonatomic) long long uiMode; // @synthesize uiMode=_uiMode;
@property(nonatomic) long long uiStyle; // @synthesize uiStyle=_uiStyle;
- (id)accessibilityLabel;
- (void)refreshWithUIStateInfo:(id)arg1;
- (id)getCurrentUIStateInfo;
- (void)transferToState:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onLoadImageFail:(id)arg1 extraInfo:(id)arg2;
- (void)updateFansGroupText:(id)arg1 checkEmpty:(_Bool)arg2;
- (_Bool)needDisplayFansTail;
- (void)updateFansRankLabel;
- (void)updateFansSignIconView;
- (void)updateSignLabelFontForCurrentUIStyle;
- (void)updateFansGroupBackViewImage;
- (id)getSuperfanSignLabelColorInLightMode;
- (void)updateUIForCurrentUIMode;
- (void)updateSelfSize;
- (void)updateFansSignTailHidden;
- (void)layoutFansSignTailView;
- (void)updateFansSignLabelOrigin;
- (void)layoutFansSignLabel;
- (void)updateFansRankLabelOrigin;
- (void)layoutFansRankLabel;
- (void)layoutFansSignIconView;
- (void)layoutFansGroupBackView;
- (_Bool)shouldShowFansGroupBackView;
- (void)createFansGroupBackView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)setCornerRadius:(double)arg1;
- (void)updateLayoutFontScale;
- (void)initDefaultLayoutFontScale;
- (void)innerInit;
- (id)initWithUIStyle:(long long)arg1 uiMode:(long long)arg2 isSuperfan:(_Bool)arg3 forceLayout:(_Bool)arg4;
- (id)initWithUIStyle:(long long)arg1 uiMode:(long long)arg2 isSuperfan:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

