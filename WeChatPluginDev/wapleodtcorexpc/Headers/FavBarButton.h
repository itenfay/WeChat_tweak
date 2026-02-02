//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, UIImageView, UIView;

@interface FavBarButton
{
    UIView *_divTopLine;
    UIImageView *_arrowIcon;
    MMUILabel *_label;
    double _pixelLineAndLabelHor;
    double _pixelLineAndLabelVer;
    double _pixelLabelAndArrowHor;
    double _arrowHeight;
    double _arrowWidth;
    double _fontSize;
    double _lineHeight;
    double _maxWidth;
    struct CGSize _labelSize;
}

- (void).cxx_destruct;
- (struct CGSize)setLabelText:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)calFavBarButtonSize;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

