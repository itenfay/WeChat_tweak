//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderJumpInfo_Style, MMTimer, NSString, RichTextView, UIImageView, WCFinderJumpInfo;
@protocol WCFinderJumpInfoLabelDelegate;

@interface WCFinderJumpInfoLabel : UIView
{
    int _showPosition;
    id <WCFinderJumpInfoLabelDelegate> _delegate;
    WCFinderJumpInfo *_jumpInfo;
    FinderJumpInfo_Style *_style;
    double _maxTextAreaWidth;
    double _maxWidth;
    MMTimer *_timer;
    RichTextView *_textView;
    UIImageView *_arrowImageView;
    struct CGRect _targetFrame;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect targetFrame; // @synthesize targetFrame=_targetFrame;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) RichTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) double maxTextAreaWidth; // @synthesize maxTextAreaWidth=_maxTextAreaWidth;
@property(retain, nonatomic) FinderJumpInfo_Style *style; // @synthesize style=_style;
@property(nonatomic) int showPosition; // @synthesize showPosition=_showPosition;
@property(retain, nonatomic) WCFinderJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(nonatomic) __weak id <WCFinderJumpInfoLabelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onActionButtonDidClick;
- (void)notifyToShow;
- (void)layoutUI;
- (void)addCornerRadiusIfNeeded;
- (_Bool)isRightStyle;
- (void)updateUIInfo;
- (void)completionForAppearAnimation;
- (void)changeToAppear:(_Bool)arg1 duration:(double)arg2;
- (void)prepareForAppearAnimationFromView:(id)arg1;
- (void)setMaxWidth:(double)arg1 maxTextAreaWidth:(double)arg2;
- (void)endExposeAction;
- (void)startExposeAction;
- (void)showJumpInfoViewForCompletePlayIfNeeded;
- (void)changeToShow:(_Bool)arg1;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

