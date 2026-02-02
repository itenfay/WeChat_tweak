//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, TBCalloutBackgroundView, UIButton, UILabel;
@protocol QAnnotationViewCollisionDelegate, TBCalloutViewDelegate;

@interface TBCalloutView : UIView
{
    _Bool _popupCancelled;
    unsigned long long _collisionType;
    UIView<QAnnotationViewCollisionDelegate> *_parent;
    id <TBCalloutViewDelegate> _delegate;
    NSString *_title;
    NSString *_subtitle;
    UIView *_leftAccessoryView;
    UIView *_rightAccessoryView;
    unsigned long long _permittedArrowDirection;
    unsigned long long _currentArrowDirection;
    TBCalloutBackgroundView *_backgroundView;
    UIView *_titleView;
    UIView *_subtitleView;
    UIView *_contentView;
    long long _presentAnimation;
    long long _dismissAnimation;
    UIButton *_containerView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    struct CGPoint _calloutOffset;
    struct UIEdgeInsets _constrainedInsets;
    struct UIEdgeInsets _contentViewInset;
}

+ (id)platformCalloutView;
- (void).cxx_destruct;
@property(nonatomic) _Bool popupCancelled; // @synthesize popupCancelled=_popupCancelled;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) long long dismissAnimation; // @synthesize dismissAnimation=_dismissAnimation;
@property(nonatomic) long long presentAnimation; // @synthesize presentAnimation=_presentAnimation;
@property(nonatomic) struct CGPoint calloutOffset; // @synthesize calloutOffset=_calloutOffset;
@property(nonatomic) struct UIEdgeInsets contentViewInset; // @synthesize contentViewInset=_contentViewInset;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *subtitleView; // @synthesize subtitleView=_subtitleView;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) TBCalloutBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) struct UIEdgeInsets constrainedInsets; // @synthesize constrainedInsets=_constrainedInsets;
@property(nonatomic) unsigned long long currentArrowDirection; // @synthesize currentArrowDirection=_currentArrowDirection;
@property(nonatomic) unsigned long long permittedArrowDirection; // @synthesize permittedArrowDirection=_permittedArrowDirection;
@property(retain, nonatomic) UIView *rightAccessoryView; // @synthesize rightAccessoryView=_rightAccessoryView;
@property(retain, nonatomic) UIView *leftAccessoryView; // @synthesize leftAccessoryView=_leftAccessoryView;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <TBCalloutViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIView<QAnnotationViewCollisionDelegate> *parent; // @synthesize parent=_parent;
@property(nonatomic) unsigned long long collisionType; // @synthesize collisionType=_collisionType;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)layoutSubviews;
- (id)animationWithType:(long long)arg1 presenting:(_Bool)arg2;
- (void)removeFromParent;
- (void)dismissCalloutAnimated:(_Bool)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)presentCalloutFromRect:(struct CGRect)arg1 inLayer:(id)arg2 ofView:(id)arg3 constrainedToLayer:(id)arg4 animated:(_Bool)arg5;
- (void)presentCalloutFromRect:(struct CGRect)arg1 inLayer:(id)arg2 constrainedToLayer:(id)arg3 animated:(_Bool)arg4;
- (void)presentCalloutFromRect:(struct CGRect)arg1 inView:(id)arg2 constrainedToView:(id)arg3 animated:(_Bool)arg4;
- (struct CGSize)offsetToContainRect:(struct CGRect)arg1 inRect:(struct CGRect)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)calloutContainerHeight;
- (double)calloutHeight;
- (double)innerContentMarginRight;
- (double)innerContentMarginLeft;
- (double)rightAccessoryHorizontalMargin;
- (double)rightAccessoryVerticalMargin;
- (double)leftAccessoryHorizontalMargin;
- (double)leftAccessoryVerticalMargin;
- (void)rebuildSubviews;
- (id)defaultBackgroundView;
- (id)subtitleViewOrDefault;
- (id)titleViewOrDefault;
- (void)calloutClicked;
- (void)unhighlightIfNecessary;
- (void)highlightIfNecessary;
- (_Bool)supportsHighlighting;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

