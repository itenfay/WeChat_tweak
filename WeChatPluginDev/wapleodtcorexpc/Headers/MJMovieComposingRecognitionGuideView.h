//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJGradientView, MMUIButton, MMUILabel;
@protocol MJMovieComposingRecognitionGuideViewDelegate;

@interface MJMovieComposingRecognitionGuideView
{
    id <MJMovieComposingRecognitionGuideViewDelegate> _delegate;
    unsigned long long _guideScene;
    MJGradientView *_backgroundGradientView;
    MMUILabel *_titleLabel;
    MMUILabel *_subTitleLabel;
    MMUIButton *_confirmButton;
    MMUIButton *_cancelButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) MMUIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) MMUILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MJGradientView *backgroundGradientView; // @synthesize backgroundGradientView=_backgroundGradientView;
@property(nonatomic) unsigned long long guideScene; // @synthesize guideScene=_guideScene;
@property(nonatomic) __weak id <MJMovieComposingRecognitionGuideViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cancelButtonDidTouchUpInside:(id)arg1;
- (void)confirmButtonDidTouchUpInside:(id)arg1;
- (void)setRecognitionGuideViewTextsWithGuideScene:(unsigned long long)arg1;
- (void)layoutViews;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

