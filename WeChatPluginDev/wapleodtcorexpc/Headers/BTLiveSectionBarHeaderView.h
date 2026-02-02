//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, UIImageView;

@interface BTLiveSectionBarHeaderView : UIView
{
    MMUILabel *_titleLabel;
    UIImageView *_arrowIcon;
    UIView *_arrowContainerView;
    UIImageView *_liveImageView;
    MMUILabel *_brandCountLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *brandCountLabel; // @synthesize brandCountLabel=_brandCountLabel;
@property(retain, nonatomic) UIImageView *liveImageView; // @synthesize liveImageView=_liveImageView;
@property(retain, nonatomic) UIView *arrowContainerView; // @synthesize arrowContainerView=_arrowContainerView;
@property(retain, nonatomic) UIImageView *arrowIcon; // @synthesize arrowIcon=_arrowIcon;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityLabel;
- (void)transToFoldState:(long long)arg1;
- (void)transToExpandState;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)init;

@end

