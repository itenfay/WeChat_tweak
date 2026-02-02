//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImageView, WCFinderJumpInfo;
@protocol WCFinderTLRedCoverBubbleViewDelegate;

@interface WCFinderTLRedCoverBubbleView : UIView
{
    int _showPosition;
    id <WCFinderTLRedCoverBubbleViewDelegate> _delegate;
    UIImageView *_redCoverBgImageView;
    UIButton *_tipsBtn;
    WCFinderJumpInfo *_jumpInfoSource;
}

- (void).cxx_destruct;
@property(nonatomic) int showPosition; // @synthesize showPosition=_showPosition;
@property(retain, nonatomic) WCFinderJumpInfo *jumpInfoSource; // @synthesize jumpInfoSource=_jumpInfoSource;
@property(retain, nonatomic) UIButton *tipsBtn; // @synthesize tipsBtn=_tipsBtn;
@property(retain, nonatomic) UIImageView *redCoverBgImageView; // @synthesize redCoverBgImageView=_redCoverBgImageView;
@property(nonatomic) __weak id <WCFinderTLRedCoverBubbleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)jumpInfo;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)onClickBubbleAction;
- (void)layoutViews;
- (void)setUpView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

