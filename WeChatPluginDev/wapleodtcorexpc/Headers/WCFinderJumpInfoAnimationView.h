//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderJumpInfo_Style, NSString, UILabel, WCFinderJumpInfo, WCFinderNetPagView;
@protocol WCFinderJumpInfoAnimationViewDelegate;

@interface WCFinderJumpInfoAnimationView : UIView
{
    int _showPosition;
    id <WCFinderJumpInfoAnimationViewDelegate> _delegate;
    double _maxWidth;
    WCFinderJumpInfo *_jumpInfo;
    FinderJumpInfo_Style *_style;
    WCFinderNetPagView *_pagView;
    UILabel *_wordingLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *wordingLabel; // @synthesize wordingLabel=_wordingLabel;
@property(retain, nonatomic) WCFinderNetPagView *pagView; // @synthesize pagView=_pagView;
@property(nonatomic) int showPosition; // @synthesize showPosition=_showPosition;
@property(retain, nonatomic) FinderJumpInfo_Style *style; // @synthesize style=_style;
@property(retain, nonatomic) WCFinderJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) __weak id <WCFinderJumpInfoAnimationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFinderPagViewDidLoad:(_Bool)arg1 path:(id)arg2;
- (void)updatePagWithPath:(id)arg1;
- (void)layoutUI;
- (double)animationStartProgress:(double)arg1;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)changeToShow:(_Bool)arg1;
- (void)onVideoPlayStateChanged:(_Bool)arg1;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2 playPos:(double)arg3;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)setMaxWidth:(double)arg1 maxTextAreaWidth:(double)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

