//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderJumpInfo_Style, MMTimer, MMWebImageView, NSString, RichTextView, UIImageView, UILabel, WCFinderJumpInfo;
@protocol WCFinderJumpInfoBubbleViewDelegate;

@interface WCFinderJumpInfoBubbleView : UIView
{
    int _showPosition;
    id <WCFinderJumpInfoBubbleViewDelegate> _delegate;
    MMWebImageView *_iconImageView;
    RichTextView *_textView;
    WCFinderJumpInfo *_jumpInfo;
    FinderJumpInfo_Style *_style;
    unsigned long long _currentUIStyle;
    double _maxTextAreaWidth;
    double _maxWidth;
    MMTimer *_timer;
    UIImageView *_arrowImageView;
    UILabel *_adLabel;
    UILabel *_subtitleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *adLabel; // @synthesize adLabel=_adLabel;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) double maxTextAreaWidth; // @synthesize maxTextAreaWidth=_maxTextAreaWidth;
@property(nonatomic) unsigned long long currentUIStyle; // @synthesize currentUIStyle=_currentUIStyle;
@property(retain, nonatomic) FinderJumpInfo_Style *style; // @synthesize style=_style;
@property(nonatomic) int showPosition; // @synthesize showPosition=_showPosition;
@property(retain, nonatomic) WCFinderJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(retain, nonatomic) RichTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak id <WCFinderJumpInfoBubbleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onActionButtonDidClick;
- (void)notifyToShow;
- (void)layoutUI;
- (void)addShape:(id)arg1;
- (id)getIconUrl;
- (void)addCornerRadiusIfNeeded;
- (_Bool)isRightStyle;
- (void)updateUIInfo;
- (void)setUIStyle:(unsigned long long)arg1;
- (void)setMaxWidth:(double)arg1 maxTextAreaWidth:(double)arg2;
- (void)endExposeAction;
- (void)startExposeAction;
- (void)showJumpInfoViewForCompletePlayIfNeeded;
- (void)changeToShow:(_Bool)arg1;
- (void)_setupSubtitleLabel:(id)arg1;
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

