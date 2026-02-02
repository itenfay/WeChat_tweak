//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderLiveProductHintAnimationInfo, MMFinderLiveECHotSaleLikeAnimationView, MMFinderLiveNumberAnimationLogic, MMFinderLiveTaskId, NSArray, NSString;

@interface MMFinderLiveECHotSaleLikeAnimationMaskView : UIView
{
    _Bool _isDuringHintAnimation;
    _Bool _hasAnimationViewEnter;
    MMFinderLiveTaskId *_taskID;
    unsigned long long _productID;
    FinderLiveProductHintAnimationInfo *_currentInfo;
    NSArray *_history;
    MMFinderLiveECHotSaleLikeAnimationView *_currentAnimationView;
    struct CGPoint _margin;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMFinderLiveECHotSaleLikeAnimationView *currentAnimationView; // @synthesize currentAnimationView=_currentAnimationView;
@property(nonatomic) _Bool hasAnimationViewEnter; // @synthesize hasAnimationViewEnter=_hasAnimationViewEnter;
@property(retain, nonatomic) NSArray *history; // @synthesize history=_history;
@property(retain, nonatomic) FinderLiveProductHintAnimationInfo *currentInfo; // @synthesize currentInfo=_currentInfo;
@property(nonatomic) _Bool isDuringHintAnimation; // @synthesize isDuringHintAnimation=_isDuringHintAnimation;
@property(nonatomic) unsigned long long productID; // @synthesize productID=_productID;
@property(retain, nonatomic) MMFinderLiveTaskId *taskID; // @synthesize taskID=_taskID;
@property(nonatomic) struct CGPoint margin; // @synthesize margin=_margin;
@property(readonly, nonatomic) MMFinderLiveNumberAnimationLogic *numberAnimationLogic;
- (void)onShouldFinishAnimationView:(id)arg1;
- (void)receiveHintAnimationInfo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)finderLiveLogReportValueForKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

