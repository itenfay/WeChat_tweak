//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIViewController.h>

@class MJPlaybackViewModel, MJVoiceCloneIntroView, MJVoiceCloneMainView, MJVoiceCloneProgressMaskView, MJVoiceInputManager, MMTimer, MMUIView, NSString;
@protocol MJVoiceCloneViewControllerDelegate;

@interface MJVoiceCloneViewController : UIViewController
{
    _Bool _isCancelledVoiceCloneRequest;
    float _voiceCloneFakeProgress;
    id <MJVoiceCloneViewControllerDelegate> _delegate;
    MJVoiceInputManager *_voiceInputManager;
    MJPlaybackViewModel *_playbackVM;
    MMUIView *_backgroundView;
    MJVoiceCloneIntroView *_introView;
    MJVoiceCloneMainView *_mainView;
    MJVoiceCloneProgressMaskView *_progressView;
    MMTimer *_voiceCloneFakeProgressTimer;
}

+ (id)genAudioID;
- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *voiceCloneFakeProgressTimer; // @synthesize voiceCloneFakeProgressTimer=_voiceCloneFakeProgressTimer;
@property(nonatomic) float voiceCloneFakeProgress; // @synthesize voiceCloneFakeProgress=_voiceCloneFakeProgress;
@property(retain, nonatomic) MJVoiceCloneProgressMaskView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) _Bool isCancelledVoiceCloneRequest; // @synthesize isCancelledVoiceCloneRequest=_isCancelledVoiceCloneRequest;
@property(retain, nonatomic) MJVoiceCloneMainView *mainView; // @synthesize mainView=_mainView;
@property(retain, nonatomic) MJVoiceCloneIntroView *introView; // @synthesize introView=_introView;
@property(retain, nonatomic) MMUIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) __weak MJPlaybackViewModel *playbackVM; // @synthesize playbackVM=_playbackVM;
@property(readonly, nonatomic) __weak MJVoiceInputManager *voiceInputManager; // @synthesize voiceInputManager=_voiceInputManager;
@property(nonatomic) __weak id <MJVoiceCloneViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stopFakeProgressTimer;
- (void)startFakeProgressTimer;
- (void)updateVoiceCloneFakeProgressByOnePercent;
- (void)updateProgressToast:(double)arg1 withText:(id)arg2;
- (void)showFailedRetryTipsWithText:(id)arg1 retryHandler:(CDUnknownBlockType)arg2;
- (void)showFailedTipsWithText:(id)arg1;
- (void)_reportVoiceCloneFailedWithReason:(id)arg1;
- (void)showSucceededProgressToast;
- (void)dismissProgressToast;
- (void)showProgressToastWithText:(id)arg1;
- (void)updateViewsForCancelVoiceClone;
- (void)updateViewsForStartVoiceClone;
- (void)voiceCloneProgressMaskViewDidCancel:(id)arg1;
- (void)requestSpeechCloneRegText;
- (void)requestVoiceCloneWithAudioID:(id)arg1 audioFilePath:(id)arg2;
- (void)voiceInputManager:(id)arg1 didStopRecordingWithIdentifier:(id)arg2 isCancelled:(_Bool)arg3 audioFilePath:(id)arg4 captions:(id)arg5 error:(id)arg6;
- (void)voiceInputManager:(id)arg1 didUpdateAudioLevel:(float)arg2 withIdentifier:(id)arg3;
- (void)voiceCloneMainViewDidCancelRecording:(id)arg1;
- (void)voiceCloneMainViewDidStopRecording:(id)arg1;
- (void)voiceCloneMainViewDidStartRecording:(id)arg1;
- (void)voiceCloneMainViewDidTapOnCloseButton:(id)arg1;
- (void)voiceCloneIntroViewDidTapOnGoRecordingButton:(id)arg1;
- (void)voiceCloneIntroView:(id)arg1 didTapOnAgreementLink:(id)arg2;
- (void)voiceCloneIntroViewDidTapOnCloseButton:(id)arg1;
- (void)setupViews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithPlaybackVM:(id)arg1 voiceInputManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

