//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, WCFinderCommentECProductCardView, WCFinderJumpInfo;
@protocol WCFinderJumpInfoInteractDelegate;

@interface WCFinderCommentECProductCardJumpInfoWrapperView : UIView
{
    id <WCFinderJumpInfoInteractDelegate> _interactDelegate;
    double _containerWidth;
    WCFinderJumpInfo *_jumpInfo;
    WCFinderCommentECProductCardView *_productCard;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderCommentECProductCardView *productCard; // @synthesize productCard=_productCard;
@property(retain, nonatomic) WCFinderJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(nonatomic) double containerWidth; // @synthesize containerWidth=_containerWidth;
@property(nonatomic) __weak id <WCFinderJumpInfoInteractDelegate> interactDelegate; // @synthesize interactDelegate=_interactDelegate;
- (void)setMaxWidth:(double)arg1 maxTextAreaWidth:(double)arg2;
- (int)showPosition;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)didTapCard;
- (void)_updateLayout;
- (void)_setupView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

