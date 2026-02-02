//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIButton, WCFinderFeedbackReasonView, WCFinderSimpleFeedbackView;
@protocol WCFinderFeedbackViewDelegate;

@interface WCFinderFeedbackView : UIView
{
    id <WCFinderFeedbackViewDelegate> _delegate;
    unsigned long long _section;
    NSArray *_optionList;
    UIButton *_backgroundMaskView;
    UIView *_triangleView;
    WCFinderSimpleFeedbackView *_simpleFeedbackView;
    WCFinderFeedbackReasonView *_reasonView;
    struct CGRect _anchorRect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedbackReasonView *reasonView; // @synthesize reasonView=_reasonView;
@property(retain, nonatomic) WCFinderSimpleFeedbackView *simpleFeedbackView; // @synthesize simpleFeedbackView=_simpleFeedbackView;
@property(retain, nonatomic) UIView *triangleView; // @synthesize triangleView=_triangleView;
@property(retain, nonatomic) UIButton *backgroundMaskView; // @synthesize backgroundMaskView=_backgroundMaskView;
@property(nonatomic) struct CGRect anchorRect; // @synthesize anchorRect=_anchorRect;
@property(retain, nonatomic) NSArray *optionList; // @synthesize optionList=_optionList;
@property(nonatomic) unsigned long long section; // @synthesize section=_section;
@property(nonatomic) __weak id <WCFinderFeedbackViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFinderFeedbackReasonViewShouldCloseWithSelectedReason:(id)arg1;
- (void)onFinderSimpleFeedbackViewDescriptionJumpInfoDidClick:(id)arg1;
- (void)onFinderSimpleFeedbackViewComplainButtonDidClick;
- (void)onFinderSimpleFeedbackViewDislikeButtonDidClick;
- (void)onFinderSimpleFeedbackViewLikeButtonDidClick;
- (void)onClickBackgroundMaskView:(id)arg1;
- (void)layoutSubview:(id)arg1 anchorRect:(struct CGRect)arg2;
- (void)changeToFeedbackReasonView:(id)arg1;
- (void)changeAnchorRect:(struct CGRect)arg1;
- (void)setDescriptionJumpInfo:(id)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1 anchorRect:(struct CGRect)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

