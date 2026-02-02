//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@class UIImageView, UIView;

@interface WCFinderLiveLivingItemView : UIButton
{
    UIImageView *_arrowImageView;
    UIView *_topLineView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

