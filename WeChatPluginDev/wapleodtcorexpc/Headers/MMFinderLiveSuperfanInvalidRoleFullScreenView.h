//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, UIImageView, WCFinderHeadImageView;

@interface MMFinderLiveSuperfanInvalidRoleFullScreenView
{
    CDUnknownBlockType _switchRoleCallback;
    UIImageView *_infoImageView;
    MMUILabel *_nickLabel;
    WCFinderHeadImageView *_headImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) MMUILabel *nickLabel; // @synthesize nickLabel=_nickLabel;
@property(retain, nonatomic) UIImageView *infoImageView; // @synthesize infoImageView=_infoImageView;
@property(copy, nonatomic) CDUnknownBlockType switchRoleCallback; // @synthesize switchRoleCallback=_switchRoleCallback;
- (void)refreshUIWithCurrentRole;
- (void)layoutUI;
- (void)onConfirmButtonClicked;
- (_Bool)needAnchorInfo;
- (id)tipsLabelFont;
- (id)tipsLabelText;
- (void)updateConfirmButtonTitleAndImage;
- (void)notifyDisappear;
- (void)notifyAppear;
- (id)initWithFrame:(struct CGRect)arg1 liveTask:(id)arg2;

@end

