//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMWebImageView, UIImageView, UILabel;
@protocol WCFinderHotBigBubbleViewDelegate;

@interface WCFinderHotBigBubbleView : UIView
{
    id <WCFinderHotBigBubbleViewDelegate> _delegate;
    UIImageView *_arrowImageView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    MMWebImageView *_leftImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMWebImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(nonatomic) __weak id <WCFinderHotBigBubbleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutAllSubviews;
- (void)updateWithLeftImgName:(id)arg1 title:(id)arg2 subTitle:(id)arg3;
- (void)addShape:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

