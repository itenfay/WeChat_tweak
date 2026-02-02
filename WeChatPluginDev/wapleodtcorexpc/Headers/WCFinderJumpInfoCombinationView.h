//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderJumpInfo_Style, MMTimer, NSString, WCFinderJumpInfo;
@protocol WCFinderJumpInfoCombinationViewDelegate;

@interface WCFinderJumpInfoCombinationView : UIView
{
    int _showPosition;
    id <WCFinderJumpInfoCombinationViewDelegate> _delegate;
    WCFinderJumpInfo *_jumpInfo;
    FinderJumpInfo_Style *_style;
    unsigned long long _displayStyleIndex;
    UIView *_lastStyleView;
    double _maxTextAreaWidth;
    double _maxWidth;
    MMTimer *_timer;
    struct CGRect _targetRect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) double maxTextAreaWidth; // @synthesize maxTextAreaWidth=_maxTextAreaWidth;
@property(retain, nonatomic) UIView *lastStyleView; // @synthesize lastStyleView=_lastStyleView;
@property(nonatomic) struct CGRect targetRect; // @synthesize targetRect=_targetRect;
@property(nonatomic) unsigned long long displayStyleIndex; // @synthesize displayStyleIndex=_displayStyleIndex;
@property(nonatomic) int showPosition; // @synthesize showPosition=_showPosition;
@property(retain, nonatomic) FinderJumpInfo_Style *style; // @synthesize style=_style;
@property(retain, nonatomic) WCFinderJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(nonatomic) __weak id <WCFinderJumpInfoCombinationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onActionButtonDidClick;
- (void)notifyToNextStyle;
- (void)startNextStyleTimer;
- (void)notifyToShow;
- (void)layoutUI;
- (void)updateUIInfoWithStyle:(id)arg1 animated:(_Bool)arg2;
- (id)displayJumpInfoStyleWithIndex:(unsigned long long)arg1;
- (void)setMaxWidth:(double)arg1 maxTextAreaWidth:(double)arg2;
- (void)endExposeAction;
- (void)startExposeAction;
- (void)showJumpInfoViewForCompletePlayIfNeeded;
- (void)changeToShow:(_Bool)arg1;
- (void)changeToJumpInfoWithIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)prepareForAnimationToStyleWithIndex:(unsigned long long)arg1;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (id)currentDisplayStyle;
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

