//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, RichTextView, UIGestureRecognizer, UIImageView;
@protocol WCFinderEmptyTipsViewDelegate;

@interface WCFinderEmptyTipsView : UIView
{
    id <WCFinderEmptyTipsViewDelegate> _delegate;
    unsigned long long _state;
    UIImageView *_stateImageView;
    RichTextView *_stateTipsTextView;
    double _loadingSize;
    UIGestureRecognizer *_tapRecognizer;
}

+ (id)defaultTipsWordingOfState:(unsigned long long)arg1;
+ (id)defaultIconImageOfState:(unsigned long long)arg1;
+ (unsigned long long)defaultStyleFlagOfState:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(nonatomic) double loadingSize; // @synthesize loadingSize=_loadingSize;
@property(retain, nonatomic) RichTextView *stateTipsTextView; // @synthesize stateTipsTextView=_stateTipsTextView;
@property(retain, nonatomic) UIImageView *stateImageView; // @synthesize stateImageView=_stateImageView;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <WCFinderEmptyTipsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)setEmptyTipsViewColor:(id)arg1;
- (void)onEmptyTipsViewDidClick;
- (void)stopLoadingAnimation;
- (void)startLoadingAnimation;
- (void)updateLayout;
- (void)resumeLoadingAnimationIfNeed;
- (unsigned long long)getState;
- (void)setState:(unsigned long long)arg1 withConfig:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

