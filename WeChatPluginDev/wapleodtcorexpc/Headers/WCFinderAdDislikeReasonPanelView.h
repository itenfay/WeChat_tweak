//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, UIButton, UILabel;
@protocol WCFinderAdDislikeReasonPanelViewDelegate;

@interface WCFinderAdDislikeReasonPanelView : UIView
{
    id <WCFinderAdDislikeReasonPanelViewDelegate> _delegate;
    UIView *_triangleView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIButton *_rightTopButton;
    UIButton *_leftButton;
    UIButton *_centerButton;
    UIButton *_rightButton;
    UIView *_separateLine;
    MMUIButton *_bottomButton;
    MMUIButton *_maskView;
    UIView *_containerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) MMUIButton *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) MMUIButton *bottomButton; // @synthesize bottomButton=_bottomButton;
@property(retain, nonatomic) UIView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *centerButton; // @synthesize centerButton=_centerButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) UIButton *rightTopButton; // @synthesize rightTopButton=_rightTopButton;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *triangleView; // @synthesize triangleView=_triangleView;
@property(nonatomic) __weak id <WCFinderAdDislikeReasonPanelViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickMaskView:(id)arg1;
- (void)onClickBottomButton:(id)arg1;
- (void)onClickRightButton:(id)arg1;
- (void)onClickCenterButton:(id)arg1;
- (void)onClickLeftButton:(id)arg1;
- (void)onClickRightTopButton:(id)arg1;
- (void)resetAllButtonsState;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

