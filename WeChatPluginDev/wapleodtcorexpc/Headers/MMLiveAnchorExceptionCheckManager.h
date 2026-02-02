//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveTask, MMFinderLiveTaskId, NSMutableArray;
@protocol MMLiveAnchorExceptionCheckDelegate;

@interface MMLiveAnchorExceptionCheckManager : NSObject
{
    _Bool _showingSilentTip;
    _Bool _showingFeverTip;
    _Bool _showingSoundQualityToBadTip;
    int _count;
    unsigned int _remainTime;
    id <MMLiveAnchorExceptionCheckDelegate> _delegate;
    MMFinderLiveTaskId *_taskId;
    NSMutableArray *_testArray;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showingSoundQualityToBadTip; // @synthesize showingSoundQualityToBadTip=_showingSoundQualityToBadTip;
@property(nonatomic) _Bool showingFeverTip; // @synthesize showingFeverTip=_showingFeverTip;
@property(nonatomic) _Bool showingSilentTip; // @synthesize showingSilentTip=_showingSilentTip;
@property(nonatomic) unsigned int remainTime; // @synthesize remainTime=_remainTime;
@property(copy, nonatomic) NSMutableArray *testArray; // @synthesize testArray=_testArray;
@property(nonatomic) int count; // @synthesize count=_count;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMLiveAnchorExceptionCheckDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateCurrentWillShowType:(unsigned long long)arg1;
- (id)getDataWithCount:(int)arg1;
- (void)reStartAudio;
- (void)cancelAnchorExceptionCheckActionWithType:(unsigned long long)arg1;
- (void)showWeakNetTipViewWithType:(unsigned long long)arg1 isShow:(_Bool)arg2;
- (_Bool)isHasSoundIntermittentlyData;
- (_Bool)checkIntermittently;
- (void)handleIntermittently;
- (_Bool)isHasSoundQualityBadData:(id)arg1;
- (_Bool)checkSoundQualityToBad;
- (void)handleSoundQualityToBad;
- (void)handleCancelSoundQualityToBadTip;
- (_Bool)checkDeviceFever:(int)arg1;
- (void)handleDeviceFever;
- (void)handleCancelDeviceFeverTip;
- (_Bool)isLiveDataAllSilent:(id)arg1;
- (_Bool)checkLiveSilent;
- (void)handleLiveSilent;
- (void)handleCancelLiveSilentTip;
- (void)checkAllException:(unsigned int)arg1;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (void)onEnterBackground;
- (void)dealloc;
- (id)initWithLiveTaskId:(id)arg1;

@end

