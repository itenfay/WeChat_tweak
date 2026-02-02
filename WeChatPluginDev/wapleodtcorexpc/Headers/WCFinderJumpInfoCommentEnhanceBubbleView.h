//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UILabel, WCFinderJumpInfo, WCFinderJumpInfoCommentEnhanceBubbleViewModel;
@protocol WCFinderJumpInfoInteractDelegate;

@interface WCFinderJumpInfoCommentEnhanceBubbleView : UIView
{
    double _mediaWidth;
    id <WCFinderJumpInfoInteractDelegate> _interactDelegate;
    double _containerWidth;
    WCFinderJumpInfo *_jumpInfo;
    WCFinderJumpInfoCommentEnhanceBubbleViewModel *_model;
    UIView *_backgroundView;
    UILabel *_descriptionLabel;
    UILabel *_linkLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *linkLabel; // @synthesize linkLabel=_linkLabel;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) WCFinderJumpInfoCommentEnhanceBubbleViewModel *model; // @synthesize model=_model;
@property(retain, nonatomic) WCFinderJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(nonatomic) double containerWidth; // @synthesize containerWidth=_containerWidth;
@property(nonatomic) __weak id <WCFinderJumpInfoInteractDelegate> interactDelegate; // @synthesize interactDelegate=_interactDelegate;
@property(nonatomic) double mediaWidth; // @synthesize mediaWidth=_mediaWidth;
- (void)setMaxWidth:(double)arg1 maxTextAreaWidth:(double)arg2;
- (int)showPosition;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)didTapBackgroundView;
- (void)__updateLayout;
- (void)__updateView;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

