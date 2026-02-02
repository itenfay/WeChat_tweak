//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveNewAnchorTaskViewModel, NSString;

@interface MMFinderLiveNewAnchorTaskTargetsView
{
    _Bool _isMultiStage;
    CDUnknownBlockType _actionBlock;
    MMFinderLiveNewAnchorTaskViewModel *_taskVM;
    NSString *_reward;
    NSString *_rewardDetail;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isMultiStage; // @synthesize isMultiStage=_isMultiStage;
@property(retain, nonatomic) NSString *rewardDetail; // @synthesize rewardDetail=_rewardDetail;
@property(retain, nonatomic) NSString *reward; // @synthesize reward=_reward;
@property(retain, nonatomic) MMFinderLiveNewAnchorTaskViewModel *taskVM; // @synthesize taskVM=_taskVM;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (void)onButtonClicked;
- (struct CGSize)titleSize:(id)arg1;
- (void)refreshStatus;

@end

