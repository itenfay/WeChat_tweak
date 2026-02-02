//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAShapeLayer, MMTimer, NSString, PatWrap, RichTextView, SendPatToastWindow, UIView;

@interface SendPatToastViewController
{
    _Bool _hideAfterShown;
    PatWrap *_patWrap;
    unsigned long long _alignment;
    double _duration;
    CDUnknownBlockType _completionBlock;
    SendPatToastWindow *_window;
    UIView *_bubbleView;
    CAShapeLayer *_bubbleLayer;
    RichTextView *_richTextView;
    MMTimer *_timer;
    long long _currentOrientation;
    NSString *_content;
    struct CGRect _headImageFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long currentOrientation; // @synthesize currentOrientation=_currentOrientation;
@property(nonatomic) _Bool hideAfterShown; // @synthesize hideAfterShown=_hideAfterShown;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) RichTextView *richTextView; // @synthesize richTextView=_richTextView;
@property(retain, nonatomic) CAShapeLayer *bubbleLayer; // @synthesize bubbleLayer=_bubbleLayer;
@property(retain, nonatomic) UIView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(nonatomic) __weak SendPatToastWindow *window; // @synthesize window=_window;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) struct CGRect headImageFrame; // @synthesize headImageFrame=_headImageFrame;
@property(nonatomic) unsigned long long alignment; // @synthesize alignment=_alignment;
@property(retain, nonatomic) PatWrap *patWrap; // @synthesize patWrap=_patWrap;
- (void)onUpdatePatSuffixWrap:(id)arg1 forUser:(id)arg2;
- (void)onTouchWindow;
- (void)onDeviceOrienationChange:(id)arg1;
- (void)doUpdateAnimationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)doShowAnimation;
- (void)onFireTimer;
- (void)hideWithAnimated:(int)arg1;
- (void)hide;
- (void)show;
- (void)addArrowToBezierPath:(id)arg1;
- (id)generateBubblePathInRect:(struct CGRect)arg1 arrowX:(double)arg2;
- (id)generateBubbleLayer;
- (void)updateAnchorPoint;
- (void)refreshLayer;
- (void)refreshView;
- (void)refreshContent;
- (void)initSubviews;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

