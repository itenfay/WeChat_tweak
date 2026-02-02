//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveTaskId, NSString, UIImageView;

@interface MMFinderLivedConnectMicAudiencePreviewCameraView : UIView
{
    _Bool _activeMode;
    UIView *_activeRenderTargetView;
    MMFinderLiveTaskId *_taskId;
    UIImageView *_passivePreviewView;
    struct CGRect _clearArea;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *passivePreviewView; // @synthesize passivePreviewView=_passivePreviewView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) struct CGRect clearArea; // @synthesize clearArea=_clearArea;
@property(nonatomic) _Bool activeMode; // @synthesize activeMode=_activeMode;
@property(retain, nonatomic) UIView *activeRenderTargetView; // @synthesize activeRenderTargetView=_activeRenderTargetView;
- (id)liveTask;
- (void)initializeComponents;
- (void)onLiveTask:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 localRenderFlipX:(_Bool)arg3;
- (void)layoutSubviews;
- (id)initWithTaskId:(id)arg1 activeMode:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

