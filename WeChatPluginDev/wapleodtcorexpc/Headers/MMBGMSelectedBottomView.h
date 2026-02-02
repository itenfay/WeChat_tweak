//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMBGMPanelPublishContext, MMBGMSelectedBottomViewModel, MMBGMSelectedConfig, MMUIButton, UIView;
@protocol MMBGMSelectedBottomViewDelegate;

@interface MMBGMSelectedBottomView
{
    _Bool _notCallDelegateOnManualSetMusicButton;
    id <MMBGMSelectedBottomViewDelegate> _delegate;
    MMBGMPanelPublishContext *_publishContext;
    MMBGMSelectedConfig *_config;
    MMUIButton *_musicOnButton;
    MMUIButton *_ostOnButton;
    MMUIButton *_lyricOnButton;
    MMBGMSelectedBottomViewModel *_viewModel;
    UIView *_seperator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *seperator; // @synthesize seperator=_seperator;
@property(nonatomic) _Bool notCallDelegateOnManualSetMusicButton; // @synthesize notCallDelegateOnManualSetMusicButton=_notCallDelegateOnManualSetMusicButton;
@property(retain, nonatomic) MMBGMSelectedBottomViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) MMUIButton *lyricOnButton; // @synthesize lyricOnButton=_lyricOnButton;
@property(retain, nonatomic) MMUIButton *ostOnButton; // @synthesize ostOnButton=_ostOnButton;
@property(retain, nonatomic) MMUIButton *musicOnButton; // @synthesize musicOnButton=_musicOnButton;
@property(retain, nonatomic) MMBGMSelectedConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) MMBGMPanelPublishContext *publishContext; // @synthesize publishContext=_publishContext;
@property(nonatomic) __weak id <MMBGMSelectedBottomViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickLyricOnBtn:(id)arg1;
- (void)onClickOstOnBtn:(id)arg1;
- (void)onClickMusicOnBtn:(id)arg1;
- (id)genReportDict;
- (id)genReportDictWithBtn:(id)arg1;
- (id)genBtn;
- (void)layoutSubviews;
- (void)manualSetLyricOn:(_Bool)arg1;
- (void)manualSetOstOn:(_Bool)arg1;
- (void)manualSetMusicOn:(_Bool)arg1;
- (_Bool)isOriginSoundSelected;
- (_Bool)isLyricOn;
- (_Bool)isMusicOn;
- (void)setupWithConfig:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 config:(id)arg2;

@end

