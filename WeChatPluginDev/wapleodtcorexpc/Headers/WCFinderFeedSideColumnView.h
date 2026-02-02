//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAShapeLayer, NSArray, NSMutableArray, UIButton, UILabel;
@protocol WCFinderFeedSideColumnViewDelegate;

@interface WCFinderFeedSideColumnView : UIView
{
    id <WCFinderFeedSideColumnViewDelegate> _delegate;
    NSArray *_contentVMList;
    UIView *_blurView;
    UILabel *_titleLabel;
    UIButton *_closeButton;
    NSMutableArray *_feedViews;
    CAShapeLayer *_maskLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) NSMutableArray *feedViews; // @synthesize feedViews=_feedViews;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) NSArray *contentVMList; // @synthesize contentVMList=_contentVMList;
@property(nonatomic) __weak id <WCFinderFeedSideColumnViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)animateDisplay;
- (void)animateUnDisplayThenRemove;
- (void)_onClickItemView:(id)arg1;
- (void)layoutSubviews;
- (void)_onClickCloseButton;
- (double)maxHeight;
- (void)sizeToFit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

