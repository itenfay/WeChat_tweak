//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class FinderLiveQuestInstance, MMFinderLiveNewAnchorTaskRewardView, MMFinderLiveNewAnchorTaskTargetsView, MMFinderLiveNewAnchorTaskViewModel, UIView;

@interface MMFinderLiveNewAnchorTaskCardView : UICollectionViewCell
{
    CDUnknownBlockType _actionBlock;
    CDUnknownBlockType _jumpRewardHomeBlock;
    FinderLiveQuestInstance *_taskItem;
    MMFinderLiveNewAnchorTaskViewModel *_taskVM;
    MMFinderLiveNewAnchorTaskTargetsView *_targetsView;
    MMFinderLiveNewAnchorTaskRewardView *_rewardView;
}

+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveNewAnchorTaskRewardView *rewardView; // @synthesize rewardView=_rewardView;
@property(retain, nonatomic) MMFinderLiveNewAnchorTaskTargetsView *targetsView; // @synthesize targetsView=_targetsView;
@property(retain, nonatomic) MMFinderLiveNewAnchorTaskViewModel *taskVM; // @synthesize taskVM=_taskVM;
@property(retain, nonatomic) FinderLiveQuestInstance *taskItem; // @synthesize taskItem=_taskItem;
@property(copy, nonatomic) CDUnknownBlockType jumpRewardHomeBlock; // @synthesize jumpRewardHomeBlock=_jumpRewardHomeBlock;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (void)layoutUI;
- (void)setupUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain, nonatomic) UIView *backgroundView;

@end

