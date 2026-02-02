//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UILongPressGestureRecognizer, WCAdURLImageView, WCCanvasClickEventManager, WCHighLightButton;

@interface WCCanvasButtonComponent
{
    _Bool _dynamicButtonSize;
    WCHighLightButton *_button;
    WCAdURLImageView *_bgImgView;
    UILongPressGestureRecognizer *_longpressGesture;
    WCCanvasClickEventManager *_clickManager;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool dynamicButtonSize; // @synthesize dynamicButtonSize=_dynamicButtonSize;
@property(retain, nonatomic) WCCanvasClickEventManager *clickManager; // @synthesize clickManager=_clickManager;
@property(retain, nonatomic) UILongPressGestureRecognizer *longpressGesture; // @synthesize longpressGesture=_longpressGesture;
@property(retain, nonatomic) WCAdURLImageView *bgImgView; // @synthesize bgImgView=_bgImgView;
@property(retain, nonatomic) WCHighLightButton *button; // @synthesize button=_button;
- (void)tryUpdateFinderLiveNotice;
- (void)onClickEventUpdateTitleWith:(id)arg1 buttonAppearance:(_Bool)arg2 buttonEnabled:(_Bool)arg3;
- (void)onClickEventUpdateTitleWith:(id)arg1;
- (void)updateButtonImageColor;
- (void)setButtonImage:(id)arg1;
- (void)setButtonComponentTitleFont:(id)arg1;
- (void)setButtonComponentTitleColor:(id)arg1 withDuration:(double)arg2;
- (void)setComponentStyleWithBackgroundColor:(id)arg1 textColor:(id)arg2 contentSize:(struct CGSize)arg3;
- (void)getComponentStyleWithBackgroundColor:(id *)arg1 textColor:(id *)arg2;
- (void)setButtonColors:(_Bool)arg1;
- (void)checkFinderLiveNoticeButtonStateWithLocal;
- (void)checkAndUpdateButtonState;
- (void)onAppointmentUpdatingStatus:(int)arg1;
- (_Bool)isAppointmentInfoValid;
- (void)onFinderLiveNoticeReserved;
- (id)fetchRelatedComponent;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)componentWillResumeState:(_Bool)arg1;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)onLongpressButton:(id)arg1;
- (void)onButtonClickEventWithSource:(unsigned long long)arg1;
- (void)tryToFireComponentClickEventWithSource:(unsigned long long)arg1;
- (void)onClickButton:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

