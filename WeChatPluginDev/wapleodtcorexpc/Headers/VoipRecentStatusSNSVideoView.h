//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, VoipRecentStatusFadeView, WCSNSNodeVideoView;

@interface VoipRecentStatusSNSVideoView : UIView
{
    _Bool _shouldPlaySound;
    _Bool _isSoundBtnHidden;
    _Bool _isVisable;
    CDUnknownBlockType _didClickSoundButtonCallback;
    WCSNSNodeVideoView *_contentsView;
    UIView *_soundView;
    UIImageView *_soundIconImageView;
    VoipRecentStatusFadeView *_topFadeView;
    VoipRecentStatusFadeView *_bottomFadeView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VoipRecentStatusFadeView *bottomFadeView; // @synthesize bottomFadeView=_bottomFadeView;
@property(retain, nonatomic) VoipRecentStatusFadeView *topFadeView; // @synthesize topFadeView=_topFadeView;
@property(retain, nonatomic) UIImageView *soundIconImageView; // @synthesize soundIconImageView=_soundIconImageView;
@property(retain, nonatomic) UIView *soundView; // @synthesize soundView=_soundView;
@property(retain, nonatomic) WCSNSNodeVideoView *contentsView; // @synthesize contentsView=_contentsView;
@property(copy, nonatomic) CDUnknownBlockType didClickSoundButtonCallback; // @synthesize didClickSoundButtonCallback=_didClickSoundButtonCallback;
@property(nonatomic) _Bool isVisable; // @synthesize isVisable=_isVisable;
@property(nonatomic) _Bool isSoundBtnHidden; // @synthesize isSoundBtnHidden=_isSoundBtnHidden;
@property(nonatomic) _Bool shouldPlaySound; // @synthesize shouldPlaySound=_shouldPlaySound;
- (void)onSilenceViewClickWithSender:(id)arg1;
- (void)layoutSubviews;
- (id)initWithWCDataItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

