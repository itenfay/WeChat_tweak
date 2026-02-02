//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIButton, UIImageView, UILabel, UIScrollView;
@protocol MMFinderLiveSwitchStreamGuidePanelDelegate;

@interface MMFinderLiveSwitchStreamGuidePanel
{
    id <MMFinderLiveSwitchStreamGuidePanelDelegate> _actionDelegate;
    UIScrollView *_scrollContainerView;
    UIImageView *_iconView;
    UILabel *_tipLabel;
    UIButton *_localAudioModeButton;
    UIButton *_switchVideoStreamButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *switchVideoStreamButton; // @synthesize switchVideoStreamButton=_switchVideoStreamButton;
@property(retain, nonatomic) UIButton *localAudioModeButton; // @synthesize localAudioModeButton=_localAudioModeButton;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIScrollView *scrollContainerView; // @synthesize scrollContainerView=_scrollContainerView;
@property(nonatomic) __weak id <MMFinderLiveSwitchStreamGuidePanelDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)onSwitchVideoStreamButtonClicked;
- (void)onLocalAudioModeButtonClicked;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)configAllSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

