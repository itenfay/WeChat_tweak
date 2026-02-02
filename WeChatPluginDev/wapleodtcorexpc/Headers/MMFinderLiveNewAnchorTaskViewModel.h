//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveTaskId, NSMutableArray, NSMutableDictionary;
@protocol MMFinderLiveNewAnchorTaskViewModelDelegate;

@interface MMFinderLiveNewAnchorTaskViewModel : NSObject
{
    _Bool _shouldShowCompletePageAnchorNotice;
    unsigned int _scene;
    NSMutableArray *_taskArray;
    long long _showCardIndex;
    id <MMFinderLiveNewAnchorTaskViewModelDelegate> _delegate;
    MMFinderLiveTaskId *_taskId;
    NSMutableDictionary *_targetProgressDic;
    NSMutableArray *_needGuideTargetTypes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *needGuideTargetTypes; // @synthesize needGuideTargetTypes=_needGuideTargetTypes;
@property(retain, nonatomic) NSMutableDictionary *targetProgressDic; // @synthesize targetProgressDic=_targetProgressDic;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMFinderLiveNewAnchorTaskViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldShowCompletePageAnchorNotice; // @synthesize shouldShowCompletePageAnchorNotice=_shouldShowCompletePageAnchorNotice;
@property(nonatomic) long long showCardIndex; // @synthesize showCardIndex=_showCardIndex;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSMutableArray *taskArray; // @synthesize taskArray=_taskArray;
- (id)liveTask;
- (void)onNewAnchorQuestUpdated:(id)arg1 taskId:(id)arg2;
- (id)getAnchorTaskDesc:(id)arg1;
- (id)highLightBrandAttrString:(id)arg1;
- (id)getTargetKey:(id)arg1;
- (void)processTaskArray;
- (id)getRewardStr:(id)arg1;
- (id)getBonusStringWithStage:(id)arg1;
- (id)getBonusStringWithTask:(id)arg1;
- (_Bool)shouldShowBonusBtn:(id)arg1;
- (unsigned long long)getTargetProgress:(id)arg1;
- (unsigned int)getTargetStatusOnLive:(id)arg1;
- (unsigned int)getTargetStatusOnStart:(id)arg1;
- (unsigned int)getTargetStatus:(id)arg1;
- (id)getTargetWording:(id)arg1 withScene:(unsigned int)arg2;
- (id)getTargetTitle:(id)arg1 needDot:(_Bool)arg2;
- (unsigned int)getTargetType:(id)arg1;
- (unsigned int)getTaskStatus:(id)arg1;
- (void)getTasks:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1 scene:(unsigned int)arg2;

@end

