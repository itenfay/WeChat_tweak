//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class FinderLiveQuestInstance_StageItem_TargetItem, MMFinderLiveNewAnchorTaskViewModel, MMUILabel, MMUIView, UIButton;

@interface MMFinderLiveAnchorTaskCardCell : UICollectionViewCell
{
    _Bool _isMultiStage;
    _Bool _isSingleItem;
    float _progressPercentage;
    CDUnknownBlockType _actionBlock;
    MMFinderLiveNewAnchorTaskViewModel *_taskVM;
    FinderLiveQuestInstance_StageItem_TargetItem *_targetItem;
    double _maxTitleWidth;
    MMUILabel *_taskLabel;
    UIButton *_opButton;
    MMUILabel *_opLabel;
    MMUIView *_progressView;
    MMUIView *_curProgressView;
}

+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIView *curProgressView; // @synthesize curProgressView=_curProgressView;
@property(retain, nonatomic) MMUIView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) MMUILabel *opLabel; // @synthesize opLabel=_opLabel;
@property(retain, nonatomic) UIButton *opButton; // @synthesize opButton=_opButton;
@property(retain, nonatomic) MMUILabel *taskLabel; // @synthesize taskLabel=_taskLabel;
@property(nonatomic) float progressPercentage; // @synthesize progressPercentage=_progressPercentage;
@property(nonatomic) double maxTitleWidth; // @synthesize maxTitleWidth=_maxTitleWidth;
@property(nonatomic) _Bool isSingleItem; // @synthesize isSingleItem=_isSingleItem;
@property(nonatomic) _Bool isMultiStage; // @synthesize isMultiStage=_isMultiStage;
@property(retain, nonatomic) FinderLiveQuestInstance_StageItem_TargetItem *targetItem; // @synthesize targetItem=_targetItem;
@property(retain, nonatomic) MMFinderLiveNewAnchorTaskViewModel *taskVM; // @synthesize taskVM=_taskVM;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (void)onButtonClicked;
- (void)refreshStatus;
- (void)layoutUI;
- (id)color;
- (void)layoutSubviews;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

