//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, UILabel, UITapGestureRecognizer;
@protocol MJMovieComposingTitleGuideViewDelegate;

@interface MJMovieComposingTitleGuideView
{
    _Bool _hasBeenTouched;
    MMUIButton *_closeButton;
    UILabel *_titleLabel;
    id <MJMovieComposingTitleGuideViewDelegate> _delegate;
    UITapGestureRecognizer *_tapGR;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *tapGR; // @synthesize tapGR=_tapGR;
@property(nonatomic) _Bool hasBeenTouched; // @synthesize hasBeenTouched=_hasBeenTouched;
@property(nonatomic) __weak id <MJMovieComposingTitleGuideViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
- (void)tapGRAction:(id)arg1;
- (void)closeButtonTouchUpInside:(id)arg1;
- (void)updateLayoutToShirnked;
- (void)updateLayoutToNoraml;
- (void)layoutViews;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

