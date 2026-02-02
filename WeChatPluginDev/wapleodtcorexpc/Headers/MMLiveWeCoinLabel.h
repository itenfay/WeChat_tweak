//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, UIImageView;

@interface MMLiveWeCoinLabel
{
    UIImageView *_wecoinIconView;
    MMUILabel *_wecoinIconLabel;
    double _padding;
}

- (void).cxx_destruct;
@property(nonatomic) double padding; // @synthesize padding=_padding;
@property(retain, nonatomic) MMUILabel *wecoinIconLabel; // @synthesize wecoinIconLabel=_wecoinIconLabel;
@property(retain, nonatomic) UIImageView *wecoinIconView; // @synthesize wecoinIconView=_wecoinIconView;
- (void)sizeToFit;
- (void)setWecoin:(unsigned int)arg1 textFont:(id)arg2 iconSize:(struct CGSize)arg3 padding:(double)arg4;
- (void)layoutUI;
- (void)layoutSubviews;

@end

