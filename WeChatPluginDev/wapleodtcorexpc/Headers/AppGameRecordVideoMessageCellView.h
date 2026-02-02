//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AppGameRecordVideoMessageViewModel, MMUILabel, MMUIWindow, MMWebImageView, NSString, UIImageView;

@interface AppGameRecordVideoMessageCellView
{
    MMWebImageView *_imageView;
    MMWebImageView *_maskView;
    UIImageView *_playIconImgView;
    MMUILabel *_titleLabel;
    MMUILabel *_descLabel;
    double _descHeight;
    double _currentY;
    MMUIWindow *_fullScreenWindow;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIWindow *fullScreenWindow; // @synthesize fullScreenWindow=_fullScreenWindow;
@property(nonatomic) double currentY; // @synthesize currentY=_currentY;
@property(nonatomic) double descHeight; // @synthesize descHeight=_descHeight;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *playIconImgView; // @synthesize playIconImgView=_playIconImgView;
@property(retain, nonatomic) MMWebImageView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) MMWebImageView *imageView; // @synthesize imageView=_imageView;
- (void)openAppBrand:(id)arg1 oMessageWrap:(id)arg2;
- (id)getMessageWrap;
- (void)onDirect:(id)arg1;
- (void)onForward;
- (void)onEndPlayer;
- (void)onClosePlayer;
- (void)onPausePlayer;
- (void)onStartPlayer;
- (void)onCreate;
- (_Bool)onClickAction:(id)arg1;
- (void)checkReady;
- (_Bool)isReady;
- (void)initMaskImageView;
- (void)initPlayImageView;
- (void)initPageImageView;
- (void)initDescView;
- (void)initTitleView;
- (void)initBgImageView;
- (id)displayViewForImageBrowser;
- (void)layoutContentView;
- (void)onTouchUpInside;
- (_Bool)canBeReused;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) AppGameRecordVideoMessageViewModel *viewModel; // @dynamic viewModel;

@end

