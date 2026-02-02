//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveTask, MMLiveTaskId, MMLiveViewController, NSArray, NSMutableDictionary, NSString, OrderedDictionary;

@interface MMLiveBaseComponentView
{
    MMLiveBaseComponentView *_parentComponentView;
    MMLiveTaskId *_taskId;
    MMLiveTask *_liveTask;
    NSString *_componentKey;
    OrderedDictionary *_components;
    NSMutableDictionary *_layoutDependentKeys;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *layoutDependentKeys; // @synthesize layoutDependentKeys=_layoutDependentKeys;
@property(retain, nonatomic) OrderedDictionary *components; // @synthesize components=_components;
@property(retain, nonatomic) NSString *componentKey; // @synthesize componentKey=_componentKey;
@property(retain, nonatomic) MMLiveTask *liveTask; // @synthesize liveTask=_liveTask;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak MMLiveBaseComponentView *parentComponentView; // @synthesize parentComponentView=_parentComponentView;
- (void)visibilityChanged:(_Bool)arg1 invokeType:(unsigned long long)arg2;
- (void)onExitLive;
- (void)onLiveProgressUpdated:(unsigned int)arg1;
- (void)onLiveQualityUpdated:(id)arg1;
- (void)onLiveResumed;
- (void)onLivePaused;
- (void)onLiveUpdated;
- (void)onEnterLiveWithError:(id)arg1;
- (void)onEnterLive;
- (void)onCreateLive;
- (void)onPrepareLive;
- (void)layoutUI;
- (id)subComponentForKey:(id)arg1;
@property(readonly, nonatomic) NSArray *subComponents;
- (void)onSubComponentLayoutChanged:(id)arg1;
- (_Bool)removeFromParentComponent;
- (_Bool)removeSubComponent:(id)arg1;
- (_Bool)addSubComponent:(id)arg1 layoutDependentKeys:(id)arg2;
@property(readonly, nonatomic) __weak MMLiveViewController *liveViewController;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 andLiveTask:(id)arg2 componentKey:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 andTaskId:(id)arg2 componentKey:(id)arg3;

@end

