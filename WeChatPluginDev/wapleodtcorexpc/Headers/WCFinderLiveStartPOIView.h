//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, UILabel;
@protocol WCFinderLiveStartPOIViewDelegate;

@interface WCFinderLiveStartPOIView
{
    _Bool _hideLogo;
    id <WCFinderLiveStartPOIViewDelegate> _delegate;
    UIImageView *_poiImageView;
    UILabel *_poiNameLabel;
    UIImageView *_arrowImageView;
    UILabel *_poiEduTipsLabel;
    double _maxWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) _Bool hideLogo; // @synthesize hideLogo=_hideLogo;
@property(retain, nonatomic) UILabel *poiEduTipsLabel; // @synthesize poiEduTipsLabel=_poiEduTipsLabel;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *poiNameLabel; // @synthesize poiNameLabel=_poiNameLabel;
@property(retain, nonatomic) UIImageView *poiImageView; // @synthesize poiImageView=_poiImageView;
@property(nonatomic) __weak id <WCFinderLiveStartPOIViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickPOIAction;
- (double)getPOILabelMaxWidth;
- (void)heightToFit;
- (void)adjustSubViewsCenterY;
- (void)sizeToFit;
- (void)updatePOIViewWith:(id)arg1 showEduTipsLabel:(_Bool)arg2 hideLogo:(_Bool)arg3 maxWidth:(double)arg4;
- (void)setUpUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

