//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMLiveStrokedLabel, MMLiveTaskId, NSString, PAGView;
@protocol MMFinderLiveGestureAnimationViewDelegate;

@interface MMFinderLiveGestureAnimationView : UIView
{
    unsigned int _audioId;
    id <MMFinderLiveGestureAnimationViewDelegate> _delegate;
    NSString *_instanceId;
    MMLiveTaskId *_taskId;
    PAGView *_pagView;
    MMLiveStrokedLabel *_label;
    NSString *_soundPath;
    double _labelAppearTime;
    double _labelDisappearTime;
}

- (void).cxx_destruct;
@property(nonatomic) double labelDisappearTime; // @synthesize labelDisappearTime=_labelDisappearTime;
@property(nonatomic) double labelAppearTime; // @synthesize labelAppearTime=_labelAppearTime;
@property(retain, nonatomic) NSString *soundPath; // @synthesize soundPath=_soundPath;
@property(retain, nonatomic) MMLiveStrokedLabel *label; // @synthesize label=_label;
@property(retain, nonatomic) PAGView *pagView; // @synthesize pagView=_pagView;
@property(nonatomic) unsigned int audioId; // @synthesize audioId=_audioId;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) NSString *instanceId; // @synthesize instanceId=_instanceId;
@property(nonatomic) __weak id <MMFinderLiveGestureAnimationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)playSoundEffect;
- (void)onAnimationEnd:(id)arg1;
- (void)layoutSubviews;
- (void)play;
- (_Bool)prepareForGiftingDisplayWithGesture:(id)arg1 text:(id)arg2 mute:(_Bool)arg3 instanceId:(id)arg4;
- (_Bool)prepareForGenericDisplayWithGesture:(id)arg1 mute:(_Bool)arg2 instanceId:(id)arg3;
- (id)initWithTaskId:(id)arg1 audioId:(unsigned int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

