//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMLiveTaskId, NSMutableDictionary, NSString;
@protocol MMFinderLiveGestureAnimationContainerViewDelegate;

@interface MMFinderLiveGestureAnimationContainerView : UIView
{
    unsigned int _audioId;
    id <MMFinderLiveGestureAnimationContainerViewDelegate> _delegate;
    MMLiveTaskId *_taskId;
    NSMutableDictionary *_playingInstances;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *playingInstances; // @synthesize playingInstances=_playingInstances;
@property(nonatomic) unsigned int audioId; // @synthesize audioId=_audioId;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMFinderLiveGestureAnimationContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onGestureAnimationViewDidEndPlaying:(id)arg1;
- (void)onGestureAnimationViewWillBeginPlaying:(id)arg1;
- (_Bool)addGestureAnimationPagForGestureId:(id)arg1 instanceId:(id)arg2 referenceAspectRatio:(double)arg3 translationX:(double)arg4 translationY:(double)arg5 rotation:(double)arg6 scale:(double)arg7 giftSenderNickname:(id)arg8;
- (id)initWithTaskId:(id)arg1 audioId:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

