//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, PAGView, UIButton, UIImageView;

@interface MMFinderLiveAnchorRecordShowView
{
    _Bool _hideOpenGame;
    _Bool _isCaptured;
    _Bool _hasFirstUpdate;
    CDUnknownBlockType _actionBlock;
    long long _pauseStatus;
    UIImageView *_headImageView;
    PAGView *_headPagView;
    MMUILabel *_titleLabel;
    MMUIButton *_detailButton;
    UIButton *_actionButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MMUIButton *detailButton; // @synthesize detailButton=_detailButton;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) PAGView *headPagView; // @synthesize headPagView=_headPagView;
@property(retain, nonatomic) UIImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) long long pauseStatus; // @synthesize pauseStatus=_pauseStatus;
@property(nonatomic) _Bool hasFirstUpdate; // @synthesize hasFirstUpdate=_hasFirstUpdate;
@property(nonatomic) _Bool isCaptured; // @synthesize isCaptured=_isCaptured;
@property(nonatomic) _Bool hideOpenGame; // @synthesize hideOpenGame=_hideOpenGame;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (id)getAttributedString;
- (void)layoutUI;
- (void)createUI;
- (void)actionClick;
- (void)detailClick;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateHeaImageViewWithLivePauseStatus:(_Bool)arg1;
- (void)updateWithLivePauseStatus:(_Bool)arg1 hideOpenGame:(_Bool)arg2;
- (double)getShowViewHeightWithPauseStatus:(_Bool)arg1;

@end

