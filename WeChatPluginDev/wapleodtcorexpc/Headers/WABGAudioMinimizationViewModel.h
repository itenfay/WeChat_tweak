//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MiniAudioTaskContentView, MinimizeTaskData, NSString, WABGAudioMinimizationItemInfo;
@protocol WABGAudioMinimizationViewModelDelegate;

@interface WABGAudioMinimizationViewModel : NSObject
{
    _Bool _isReadyToShow;
    WABGAudioMinimizationItemInfo *_itemInfo;
    id <WABGAudioMinimizationViewModelDelegate> _delegate;
    MiniAudioTaskContentView *_taskContentView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MiniAudioTaskContentView *taskContentView; // @synthesize taskContentView=_taskContentView;
@property(nonatomic) _Bool isReadyToShow; // @synthesize isReadyToShow=_isReadyToShow;
@property(nonatomic) __weak id <WABGAudioMinimizationViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) WABGAudioMinimizationItemInfo *itemInfo; // @synthesize itemInfo=_itemInfo;
- (id)cropImageTo3by4:(id)arg1;
- (void)onMiniAudioContentViewPlayPauseButtonClicked:(_Bool)arg1;
- (void)onMiniAudioContentViewOuterContentClicked;
- (void)onMiniAudioContentViewCloseButtonClicked;
@property(readonly, nonatomic) MinimizeTaskData *taskData;
@property(readonly, nonatomic) _Bool canShow;
- (struct CGRect)coverViewFrame;
- (void)updateItemInfo:(id)arg1;
- (id)initWithItemInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

