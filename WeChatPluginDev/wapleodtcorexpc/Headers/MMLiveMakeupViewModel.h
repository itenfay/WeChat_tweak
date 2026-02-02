//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveTaskId, NSArray;
@protocol MMLiveBeautyLogicProvider, MMLiveMakeupViewModelObserver;

@interface MMLiveMakeupViewModel : NSObject
{
    MMLiveTaskId *_taskId;
    id <MMLiveBeautyLogicProvider> _beautyLogicProvider;
    NSArray *_makeupEffectItems;
    id <MMLiveMakeupViewModelObserver> _observer;
    unsigned long long _currentUsedItemIndex;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long currentUsedItemIndex; // @synthesize currentUsedItemIndex=_currentUsedItemIndex;
@property(nonatomic) __weak id <MMLiveMakeupViewModelObserver> observer; // @synthesize observer=_observer;
@property(nonatomic) __weak NSArray *makeupEffectItems; // @synthesize makeupEffectItems=_makeupEffectItems;
@property(retain, nonatomic) id <MMLiveBeautyLogicProvider> beautyLogicProvider; // @synthesize beautyLogicProvider=_beautyLogicProvider;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (id)currentItem;
- (id)beautyLogic;
- (id)getLiveTask;
- (void)saveMakeupDetailValues;
- (void)updateMakupDetail:(id)arg1;
- (void)saveMakeupValues;
- (void)updateMakeup:(id)arg1;
- (void)setDetailValueDefault;
- (id)initWithTaskId:(id)arg1;

@end

