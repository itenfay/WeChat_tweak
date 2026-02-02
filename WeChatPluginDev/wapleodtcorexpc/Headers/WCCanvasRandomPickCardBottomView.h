//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, UILabel, WCCanvasRandomLayoutEncorePickInfo, WCCanvasRandomPickCardBottomIntroduceView, WCCanvasRandomPickCardButtonView;
@protocol WCCanvasRandomPickCardBottomViewDelegate;

@interface WCCanvasRandomPickCardBottomView
{
    _Bool _didShowSwitchAnimation;
    WCCanvasRandomLayoutEncorePickInfo *_encoreInfo;
    id <WCCanvasRandomPickCardBottomViewDelegate> _delegate;
    WCCanvasRandomPickCardBottomIntroduceView *_introduceView;
    UILabel *_doneLabel;
    WCCanvasRandomPickCardButtonView *_buttonView;
    MMUIButton *_backgroundButton;
}

+ (void)addShadowToView:(id)arg1;
+ (id)generateSimpleLabelWithFont:(id)arg1 textColor:(id)arg2 text:(id)arg3;
+ (struct CGSize)calcSizeForEncoreInfo:(id)arg1 orientation:(long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool didShowSwitchAnimation; // @synthesize didShowSwitchAnimation=_didShowSwitchAnimation;
@property(retain, nonatomic) MMUIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(retain, nonatomic) WCCanvasRandomPickCardButtonView *buttonView; // @synthesize buttonView=_buttonView;
@property(retain, nonatomic) UILabel *doneLabel; // @synthesize doneLabel=_doneLabel;
@property(retain, nonatomic) WCCanvasRandomPickCardBottomIntroduceView *introduceView; // @synthesize introduceView=_introduceView;
@property(nonatomic) __weak id <WCCanvasRandomPickCardBottomViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCCanvasRandomLayoutEncorePickInfo *encoreInfo; // @synthesize encoreInfo=_encoreInfo;
- (void)onHideRandomPickCardBottomViewDone;
- (void)hideRandomPickCardBottomView;
- (void)updateRandomPickCardBottomViewVisibleWithRemainCount:(unsigned long long)arg1;
- (void)asyncUpdateRandomCardsWithRemainCount;
- (void)updateRandomPickCardBottomView;
- (void)resetRandomPickCardBottomView;
- (void)onPickCardViewClicked:(id)arg1;
- (void)layoutSubviews;
- (void)generateSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 encoreInfo:(id)arg2 delegate:(id)arg3;

@end

