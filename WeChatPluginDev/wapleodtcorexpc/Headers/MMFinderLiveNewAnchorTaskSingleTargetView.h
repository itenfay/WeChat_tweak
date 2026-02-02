//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveQuestInstance_StageItem_TargetItem, MMUILabel, MMUIView, UIButton;

@interface MMFinderLiveNewAnchorTaskSingleTargetView
{
    _Bool _shouldShowNote;
    float _progressPercentage;
    FinderLiveQuestInstance_StageItem_TargetItem *_targetItem;
    MMUILabel *_rewardTitleLabel;
    MMUILabel *_rewardDetailLabel;
    MMUILabel *_rewardNoteLabel;
    MMUILabel *_taskTitleLabel;
    MMUILabel *_taskLabel;
    UIButton *_opButton;
    MMUILabel *_opLabel;
    MMUIView *_progressView;
    MMUIView *_curProgressView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIView *curProgressView; // @synthesize curProgressView=_curProgressView;
@property(retain, nonatomic) MMUIView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) MMUILabel *opLabel; // @synthesize opLabel=_opLabel;
@property(retain, nonatomic) UIButton *opButton; // @synthesize opButton=_opButton;
@property(retain, nonatomic) MMUILabel *taskLabel; // @synthesize taskLabel=_taskLabel;
@property(retain, nonatomic) MMUILabel *taskTitleLabel; // @synthesize taskTitleLabel=_taskTitleLabel;
@property(retain, nonatomic) MMUILabel *rewardNoteLabel; // @synthesize rewardNoteLabel=_rewardNoteLabel;
@property(retain, nonatomic) MMUILabel *rewardDetailLabel; // @synthesize rewardDetailLabel=_rewardDetailLabel;
@property(retain, nonatomic) MMUILabel *rewardTitleLabel; // @synthesize rewardTitleLabel=_rewardTitleLabel;
@property(nonatomic) _Bool shouldShowNote; // @synthesize shouldShowNote=_shouldShowNote;
@property(nonatomic) float progressPercentage; // @synthesize progressPercentage=_progressPercentage;
@property(retain, nonatomic) FinderLiveQuestInstance_StageItem_TargetItem *targetItem; // @synthesize targetItem=_targetItem;
- (void)onButtonClicked;
- (void)refreshStatus;
- (void)layoutUI;
- (void)setupUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

