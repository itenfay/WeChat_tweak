//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIButton, UIColor;
@protocol MMMsgTipsExpandMultiHeadCardViewDelegate;

@interface MMMsgTipsExpandMultiHeadCardView : UIView
{
    id <MMMsgTipsExpandMultiHeadCardViewDelegate> _delegate;
    UIColor *_cardBackgroundColor;
    id _userData;
    UIView *_cardView;
    UIView *_headImageContainerView;
    NSMutableArray *_headImageViewList;
    UIView *_separatorLineView;
    UIButton *_button;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UIView *separatorLineView; // @synthesize separatorLineView=_separatorLineView;
@property(retain, nonatomic) NSMutableArray *headImageViewList; // @synthesize headImageViewList=_headImageViewList;
@property(retain, nonatomic) UIView *headImageContainerView; // @synthesize headImageContainerView=_headImageContainerView;
@property(retain, nonatomic) UIView *cardView; // @synthesize cardView=_cardView;
@property(nonatomic) __weak id userData; // @synthesize userData=_userData;
@property(retain, nonatomic) UIColor *cardBackgroundColor; // @synthesize cardBackgroundColor=_cardBackgroundColor;
@property(nonatomic) __weak id <MMMsgTipsExpandMultiHeadCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onButtonTapped;
- (void)updateUserList:(id)arg1 buttonTitle:(id)arg2;
- (void)setupLayout;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

