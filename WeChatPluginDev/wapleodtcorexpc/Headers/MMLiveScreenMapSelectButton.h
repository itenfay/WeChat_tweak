//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, UILabel;

@interface MMLiveScreenMapSelectButton
{
    _Bool _hideLogo;
    CDUnknownBlockType _screenMapSelectBlock;
    UIImageView *_poiImageView;
    UILabel *_poiNameLabel;
    UIImageView *_arrowImageView;
    double _maxWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) _Bool hideLogo; // @synthesize hideLogo=_hideLogo;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *poiNameLabel; // @synthesize poiNameLabel=_poiNameLabel;
@property(retain, nonatomic) UIImageView *poiImageView; // @synthesize poiImageView=_poiImageView;
@property(copy, nonatomic) CDUnknownBlockType screenMapSelectBlock; // @synthesize screenMapSelectBlock=_screenMapSelectBlock;
- (void)onClickPOIAction;
- (double)getPOILabelMaxWidth;
- (void)heightToFit;
- (void)adjustSubViewsCenterY;
- (void)sizeToFit;
- (void)updateWithGameUserInfo:(id)arg1;
- (void)setUpUI;
- (void)hideLogo:(_Bool)arg1 maxWidth:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

