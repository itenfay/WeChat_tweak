//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel, VoIPPIPRenderView;

@interface VoIPPIPView : UIView
{
    _Bool _isWaitForConnectingLabelHidden;
    VoIPPIPRenderView *_renderView;
    UIImageView *_localAvatarView;
    UIImageView *_remoteAvatarView;
    UIView *_blurView;
    UILabel *_waitForConnectingLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *waitForConnectingLabel; // @synthesize waitForConnectingLabel=_waitForConnectingLabel;
@property(retain, nonatomic) UIView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIImageView *remoteAvatarView; // @synthesize remoteAvatarView=_remoteAvatarView;
@property(retain, nonatomic) UIImageView *localAvatarView; // @synthesize localAvatarView=_localAvatarView;
@property(retain, nonatomic) VoIPPIPRenderView *renderView; // @synthesize renderView=_renderView;
@property(nonatomic) _Bool isWaitForConnectingLabelHidden; // @synthesize isWaitForConnectingLabelHidden=_isWaitForConnectingLabelHidden;
- (void)clear;
- (void)layoutSubviews;
- (void)setRemoteAvatarHidden:(_Bool)arg1;
- (void)setLocalAvatarHidden:(_Bool)arg1;
- (void)setRemoteAvatarImage:(id)arg1;
- (void)setLocalAvatarImage:(id)arg1;
- (void)drawPixelBufferRef:(struct __CVBuffer *)arg1;
- (void)dealloc;
- (_Bool)isNormal;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)canvas:(id)arg1 customizeRenderCommandEncoder:(id)arg2 withIndex:(unsigned long long)arg3;
- (unsigned long long)timesForCustomizingRenderCommandEncoderForCanvas:(id)arg1;
- (void)canvas:(id)arg1 didRenderWithIsSucceed:(_Bool)arg2;
- (void)canvasWillRender:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

