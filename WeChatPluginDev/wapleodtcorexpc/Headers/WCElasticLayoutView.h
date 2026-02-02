//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@protocol WCElasticLayoutViewDelegate;

@interface WCElasticLayoutView : UIView
{
    _Bool _isExpanded;
    _Bool _shrinkable;
    _Bool _expandable;
    UIView *_anchorView;
    UIView *_followView;
    id <WCElasticLayoutViewDelegate> _delegate;
    struct CGRect _shrinkBounds;
    struct CGRect _expandBounds;
}

+ (struct CGRect)_getContainerFrameForAnchorView:(id)arg1 andFollowView:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) struct CGRect expandBounds; // @synthesize expandBounds=_expandBounds;
@property(nonatomic) struct CGRect shrinkBounds; // @synthesize shrinkBounds=_shrinkBounds;
@property(nonatomic) _Bool expandable; // @synthesize expandable=_expandable;
@property(nonatomic) _Bool shrinkable; // @synthesize shrinkable=_shrinkable;
@property(nonatomic) __weak id <WCElasticLayoutViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isExpanded; // @synthesize isExpanded=_isExpanded;
@property(retain, nonatomic) UIView *followView; // @synthesize followView=_followView;
@property(retain, nonatomic) UIView *anchorView; // @synthesize anchorView=_anchorView;
- (void)_expandAndShowFollowView;
- (void)_shrinkAndHideFollowView;
- (void)expandAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)shrinkAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)updateExpandBoundsByCenter:(struct CGPoint)arg1;
- (void)updateShrinkBoundsByCenter:(struct CGPoint)arg1;
- (id)initWithAnchorView:(id)arg1 followView:(id)arg2;

@end

