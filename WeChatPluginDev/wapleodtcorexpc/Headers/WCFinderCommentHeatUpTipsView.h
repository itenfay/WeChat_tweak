//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderObjectHelpPromotionInfo, NSMutableArray, NSString, UIButton, UILabel, UITapGestureRecognizer, WCFinderFeedContentVM;

@interface WCFinderCommentHeatUpTipsView : UIView
{
    CDUnknownBlockType _liteAppShowKeyboardAction;
    CDUnknownBlockType _heatUpComplection;
    UIView *_heatUpViewContainer;
    NSMutableArray *_heatUpHeaderViews;
    UIView *_topLineView;
    UIButton *_heatUpButton;
    UILabel *_titleLabel;
    UILabel *_appendLabel;
    NSString *_tid;
    FinderObjectHelpPromotionInfo *_promotions;
    WCFinderFeedContentVM *_contentVM;
    UITapGestureRecognizer *_nicknameGesture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *nicknameGesture; // @synthesize nicknameGesture=_nicknameGesture;
@property(nonatomic) __weak WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) FinderObjectHelpPromotionInfo *promotions; // @synthesize promotions=_promotions;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) UILabel *appendLabel; // @synthesize appendLabel=_appendLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *heatUpButton; // @synthesize heatUpButton=_heatUpButton;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(copy, nonatomic) NSMutableArray *heatUpHeaderViews; // @synthesize heatUpHeaderViews=_heatUpHeaderViews;
@property(retain, nonatomic) UIView *heatUpViewContainer; // @synthesize heatUpViewContainer=_heatUpViewContainer;
@property(copy, nonatomic) CDUnknownBlockType heatUpComplection; // @synthesize heatUpComplection=_heatUpComplection;
@property(copy, nonatomic) CDUnknownBlockType liteAppShowKeyboardAction; // @synthesize liteAppShowKeyboardAction=_liteAppShowKeyboardAction;
- (_Bool)showUserPromotionsInfo;
- (void)setReporParam;
- (void)updateWithPromotionInfo:(id)arg1 feedContentVM:(id)arg2;
- (void)clickShowDetialAction;
- (void)promotionSuccessful;
- (void)clickHeatUpAction;
- (void)layoutSubviews;
- (void)layoutInfo;
- (id)generatorAvatorView:(id)arg1 headUrl:(id)arg2 headerViewSize:(struct CGSize)arg3;
- (void)setUpUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

