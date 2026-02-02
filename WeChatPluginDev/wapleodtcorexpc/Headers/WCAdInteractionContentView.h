//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, NSMutableArray, UIPanGestureRecognizer, UITapGestureRecognizer, WCAdInteractionReportDataHandler, WCAdInteractionReportInfo, WCAdInteractionResourceInfo, WCStatTimerHelper;
@protocol WCAdInteractionContentViewDelegate;

@interface WCAdInteractionContentView
{
    id <WCAdInteractionContentViewDelegate> _delegate;
    WCAdInteractionResourceInfo *_resourceInfo;
    NSMutableArray *_subContentViews;
    CAGradientLayer *_gradientLayer;
    unsigned long long _contentStatus;
    UITapGestureRecognizer *_tapGesture;
    UIPanGestureRecognizer *_panGesture;
    WCStatTimerHelper *_contentTimeHelper;
    WCAdInteractionReportInfo *_reportInfo;
    WCAdInteractionReportDataHandler *_customReportHandler;
    struct CGPoint _panInitialCenter;
}

+ (id)fetchContentViewForResourceInfo:(id)arg1 frame:(struct CGRect)arg2 delegate:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdInteractionReportDataHandler *customReportHandler; // @synthesize customReportHandler=_customReportHandler;
@property(retain, nonatomic) WCAdInteractionReportInfo *reportInfo; // @synthesize reportInfo=_reportInfo;
@property(retain, nonatomic) WCStatTimerHelper *contentTimeHelper; // @synthesize contentTimeHelper=_contentTimeHelper;
@property(nonatomic) struct CGPoint panInitialCenter; // @synthesize panInitialCenter=_panInitialCenter;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) unsigned long long contentStatus; // @synthesize contentStatus=_contentStatus;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) NSMutableArray *subContentViews; // @synthesize subContentViews=_subContentViews;
@property(retain, nonatomic) WCAdInteractionResourceInfo *resourceInfo; // @synthesize resourceInfo=_resourceInfo;
@property(nonatomic) __weak id <WCAdInteractionContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tryToRecordCustomReportData:(id)arg1;
- (void)fetchContentReportInfoIntoDict:(id)arg1;
- (void)tryToReportContentDisappear;
- (void)tryToReportContentAppear;
- (void)resumeAllAnimations;
- (void)pauseAllAnimations;
- (_Bool)didContentViewTerminate;
- (_Bool)terminateContentViews;
- (_Bool)suspendContentViews;
- (_Bool)activeContentViews;
- (void)updateProgressWith:(double)arg1;
- (id)fetchFontWithSize:(double)arg1 weight:(unsigned long long)arg2;
- (void)organizeSubContentViews;
- (struct CGSize)calcAvailableAverageSize;
- (void)fireTapEvent;
- (void)handleTap:(id)arg1;
- (_Bool)canBeInteractived;
- (_Bool)canBeClicked;
- (id)fetchDeterminationInfo;
- (void)handlePanGesture:(id)arg1;
- (void)updateGestureWithActionInfo:(id)arg1;
- (void)initializeGesture;
- (void)initializeContentView;
- (void)removeSubContentView:(id)arg1;
- (void)insertSubContentView:(id)arg1;
- (id)fetchResourceInfoWithResourceId:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 resourceInfo:(id)arg2 delegate:(id)arg3;

@end

