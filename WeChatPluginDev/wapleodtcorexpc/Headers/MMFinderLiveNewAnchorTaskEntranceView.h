//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, MMFinderLiveTaskId, MMRollableLabelView, MMUIImageView, MMUILabel, MMUIView, UIView;

@interface MMFinderLiveNewAnchorTaskEntranceView
{
    unsigned int _scene;
    CDUnknownBlockType _actionBlock;
    MMFinderLiveTaskId *_taskId;
    UIView *_baseView;
    CAGradientLayer *_gradientLayer;
    MMUIImageView *_image;
    MMUILabel *_title;
    MMUIView *_scrollBaseView;
    MMRollableLabelView *_titleView;
    CAGradientLayer *_titleGradientLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *titleGradientLayer; // @synthesize titleGradientLayer=_titleGradientLayer;
@property(retain, nonatomic) MMRollableLabelView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) MMUIView *scrollBaseView; // @synthesize scrollBaseView=_scrollBaseView;
@property(retain, nonatomic) MMUILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) MMUIImageView *image; // @synthesize image=_image;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *baseView; // @synthesize baseView=_baseView;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (void)onClickedTask;
- (void)updateHighlighted:(_Bool)arg1;
- (void)updateTitle:(id)arg1;
- (void)layoutUI;
- (void)setupUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 scene:(unsigned int)arg2;

@end

