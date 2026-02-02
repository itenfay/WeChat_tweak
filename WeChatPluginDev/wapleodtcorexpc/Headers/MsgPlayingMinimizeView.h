//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMHeadImageView, MiniAudioTaskContentView, NSString, UIImageView;

@interface MsgPlayingMinimizeView : UIView
{
    MiniAudioTaskContentView *_contentView;
    CDUnknownBlockType _ClickCloseButtonAction;
    CDUnknownBlockType _ClickContentAction;
    MMHeadImageView *_headImageView;
    UIImageView *_animateView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *animateView; // @synthesize animateView=_animateView;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(copy, nonatomic) CDUnknownBlockType ClickContentAction; // @synthesize ClickContentAction=_ClickContentAction;
@property(copy, nonatomic) CDUnknownBlockType ClickCloseButtonAction; // @synthesize ClickCloseButtonAction=_ClickCloseButtonAction;
@property(readonly, nonatomic) MiniAudioTaskContentView *contentView; // @synthesize contentView=_contentView;
- (void)onMiniAudioContentViewPlayPauseButtonClicked:(_Bool)arg1;
- (void)onMiniAudioContentViewOuterContentClicked;
- (void)onMiniAudioContentViewCloseButtonClicked;
- (void)layoutUI;
- (void)initSubviewWithUsrName:(id)arg1;
- (void)setAnimating:(_Bool)arg1;
- (void)updateUsrName:(id)arg1;
- (id)initWithUsrName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

