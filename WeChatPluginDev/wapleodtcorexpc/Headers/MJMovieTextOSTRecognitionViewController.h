//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIViewController.h>

@class MJActionPanelMainMenuView, MJAudioExtractor, MJPlaybackViewModel, MJTimelineViewController, MJTimelineViewModel, MMTimer, MMUIButton, MMUIImageView, MMUILabel, MMUIView, NSString, WCProgressCircleView;
@protocol MJMovieTextOSTRecognitionViewControllerDelegate;

@interface MJMovieTextOSTRecognitionViewController : UIViewController
{
    _Bool _isAppearing;
    float _recognitionFakeProgress;
    id <MJMovieTextOSTRecognitionViewControllerDelegate> _delegate;
    unsigned long long _status;
    MJTimelineViewController *_timelineVC;
    MJTimelineViewModel *_timelineVM;
    MJPlaybackViewModel *_playbackVM;
    NSString *_currentSessionID;
    MMUIView *_backgroundViewInitial;
    MMUIImageView *_startRecognitionTipImageView;
    MMUILabel *_startRecognitionTipLabel;
    MMUIButton *_startRecognitionButton;
    MMUIView *_backgroundViewRunning;
    WCProgressCircleView *_recognitionProgressView;
    MMUILabel *_recognitionProgressLabel;
    MMUIButton *_cancelRecognitionButton;
    MMTimer *_recognitionFakeProgressTimer;
    MMUIView *_backgroundViewSucceed;
    MJActionPanelMainMenuView *_menuView;
    MJAudioExtractor *_audioExtractor;
}

+ (id)cachedCaptionsWithMediaFileURL:(id)arg1 timeRange:(CDStruct_e83c9415)arg2;
+ (void)extractCaptionItemsFromAudioData:(id)arg1 audioID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (_Bool)isSegmentCaptionExtractable:(id)arg1;
+ (id)genSessionID;
- (void).cxx_destruct;
@property(retain, nonatomic) MJAudioExtractor *audioExtractor; // @synthesize audioExtractor=_audioExtractor;
@property(retain, nonatomic) MJActionPanelMainMenuView *menuView; // @synthesize menuView=_menuView;
@property(retain, nonatomic) MMUIView *backgroundViewSucceed; // @synthesize backgroundViewSucceed=_backgroundViewSucceed;
@property(retain, nonatomic) MMTimer *recognitionFakeProgressTimer; // @synthesize recognitionFakeProgressTimer=_recognitionFakeProgressTimer;
@property(nonatomic) float recognitionFakeProgress; // @synthesize recognitionFakeProgress=_recognitionFakeProgress;
@property(retain, nonatomic) MMUIButton *cancelRecognitionButton; // @synthesize cancelRecognitionButton=_cancelRecognitionButton;
@property(retain, nonatomic) MMUILabel *recognitionProgressLabel; // @synthesize recognitionProgressLabel=_recognitionProgressLabel;
@property(retain, nonatomic) WCProgressCircleView *recognitionProgressView; // @synthesize recognitionProgressView=_recognitionProgressView;
@property(retain, nonatomic) MMUIView *backgroundViewRunning; // @synthesize backgroundViewRunning=_backgroundViewRunning;
@property(retain, nonatomic) MMUIButton *startRecognitionButton; // @synthesize startRecognitionButton=_startRecognitionButton;
@property(retain, nonatomic) MMUILabel *startRecognitionTipLabel; // @synthesize startRecognitionTipLabel=_startRecognitionTipLabel;
@property(retain, nonatomic) MMUIImageView *startRecognitionTipImageView; // @synthesize startRecognitionTipImageView=_startRecognitionTipImageView;
@property(retain, nonatomic) MMUIView *backgroundViewInitial; // @synthesize backgroundViewInitial=_backgroundViewInitial;
@property(readonly, nonatomic) NSString *currentSessionID; // @synthesize currentSessionID=_currentSessionID;
@property(retain, nonatomic) MJPlaybackViewModel *playbackVM; // @synthesize playbackVM=_playbackVM;
@property(retain, nonatomic) MJTimelineViewModel *timelineVM; // @synthesize timelineVM=_timelineVM;
@property(retain, nonatomic) MJTimelineViewController *timelineVC; // @synthesize timelineVC=_timelineVC;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) __weak id <MJMovieTextOSTRecognitionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isAppearing; // @synthesize isAppearing=_isAppearing;
- (void)leaveEditingStateIfNeeded;
- (void)postProcessCaptionsWithClipSegment:(id)arg1 captionGroups:(id)arg2;
- (void)extractCaptionsWithProgressHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)numberOfCaptionExtractableSegments;
- (void)menuViewDidSelectEditCaptionStyle;
- (void)menuViewDidSelectEditCaptionText;
- (void)menuViewDidSelectRemove;
- (void)cancelRecognition;
- (void)cancelRecognitionButtonDidTouchUpInside:(id)arg1;
- (void)startRecognition;
- (void)stopFakeProgressTimer;
- (void)startFakeProgressTimer;
- (void)updateRecognitionFakeProgressByOnePercent;
- (void)tapOnStartRecognitionButton;
- (void)startRecognitionButtonDidTouchUpInside:(id)arg1;
- (void)timelineViewControllerDidSelectRetryOSTRecognition:(id)arg1;
- (void)timelineViewControllerDidDoubleTap:(id)arg1;
- (_Bool)tryFocusOnAndHighlightCurrentCaptionSegment;
- (void)resetPreview;
- (void)reloadData:(id)arg1;
- (void)showHandleboxForCurrentCaptionSegment;
- (void)updateOnIsPlayingDidChange:(_Bool)arg1;
- (void)updateOnPlaybackTimeDidChange:(CDStruct_1b6d18a9)arg1;
- (void)updateOnSkimTimeDidChange:(CDStruct_1b6d18a9)arg1;
- (void)mainMenuView:(id)arg1 didSelectItem:(id)arg2;
- (void)updateMenuWithSegmentVM:(id)arg1;
- (id)menuItemsWithSegmentVM:(id)arg1 time:(CDStruct_1b6d18a9)arg2;
- (id)menuItemsDisabled;
- (id)menuItemsEnabled;
- (_Bool)checkIfSessionExpired:(id)arg1;
- (void)setCurrentSessionID:(id)arg1;
- (void)syncStatusToTimelineVM;
- (void)setStatus:(unsigned long long)arg1;
- (_Bool)canEnterStatus:(unsigned long long)arg1;
- (_Bool)enterStatus:(unsigned long long)arg1;
- (void)unbindViews;
- (void)bindViews;
- (void)removeViewsIfNeeded;
- (void)setupViewsForSucceedStatus;
- (void)setupViewsForRunningStatus;
- (void)setupViewsForInitialStatus;
- (void)setupViews;
- (void)setupStatus;
- (void)setupForWillDisappear;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)setupForWillAppear;
- (void)viewWillAppear:(_Bool)arg1;
- (void)commonInit;
- (void)viewDidLoad;
- (id)initWithTimelineViewModel:(id)arg1 playbackViewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

