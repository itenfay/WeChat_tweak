//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, MMUIButton, MMUILabel, MMUIView, NSMutableArray;
@protocol QRCodeInMultiDisplayViewDelegate;

@interface QRCodeInMultiDisplayView
{
    id <QRCodeInMultiDisplayViewDelegate> _delegate;
    NSMutableArray *_dotInfoList;
    MMUIView *_maskView;
    MMUIButton *_cancelButton;
    NSMutableArray *_markDotViewList;
    MMUILabel *_infoLabel;
    MMTimer *_timer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) MMUILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) NSMutableArray *markDotViewList; // @synthesize markDotViewList=_markDotViewList;
@property(retain, nonatomic) MMUIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) MMUIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) NSMutableArray *dotInfoList; // @synthesize dotInfoList=_dotInfoList;
@property(nonatomic) __weak id <QRCodeInMultiDisplayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)timerInvalidate;
- (id)getInfoLabelText;
- (_Bool)isSameCodeTypeName;
- (_Bool)isWordingCollisionWithAnyMarkDotView;
- (void)initInfoLabel;
- (void)layoutQRCodeDotViewInMulti:(id)arg1;
- (void)onCancelBtnClicked:(id)arg1;
- (void)initCancelBtn;
- (void)initMastView;
- (void)onDotViewClicked:(id)arg1;
- (void)startBreatheAnimation;
- (void)setUpBreathAnimationTimmer;
- (void)initDotViews;
- (void)layoutSubviews;
- (void)initSubView;
- (id)initWithDotInfoList:(id)arg1;

@end

