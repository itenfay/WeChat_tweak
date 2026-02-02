//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIButton, UIImageView, UILabel;

@interface WCFinderStartLiveHalfScreenViewController
{
    unsigned int _startLiveScene;
    CDUnknownBlockType _startLiveAction;
    UIImageView *_iconImageView;
    UILabel *_topTitleLabel;
    UIButton *_cancelButton;
    UIButton *_certainButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *certainButton; // @synthesize certainButton=_certainButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UILabel *topTitleLabel; // @synthesize topTitleLabel=_topTitleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) unsigned int startLiveScene; // @synthesize startLiveScene=_startLiveScene;
@property(copy, nonatomic) CDUnknownBlockType startLiveAction; // @synthesize startLiveAction=_startLiveAction;
- (void)cancel;
- (void)startLive;
- (void)updateUI;
- (_Bool)isHideCloseButton;
- (void)initButton;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

