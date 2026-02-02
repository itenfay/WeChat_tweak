//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface MMPageSheetProgressiveDragView : UIView
{
    UIView *_barView;
    UIImageView *_arrowImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UIView *barView; // @synthesize barView=_barView;
- (void)layoutSubviews;
- (void)updateArrowColor:(id)arg1;
- (void)updateBarColor:(id)arg1;
- (void)onPageSheetDragToDismissOffset:(double)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

