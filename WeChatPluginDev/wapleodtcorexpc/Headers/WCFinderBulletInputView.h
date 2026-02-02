//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class EmoticonBoardView, NSString, WCFinderBulletInputToolbarView;
@protocol WCFinderBulletInputViewDelegate;

@interface WCFinderBulletInputView : UIView
{
    WCFinderBulletInputToolbarView *_inputToolbarView;
    EmoticonBoardView *_emoticonBoardView;
    id <WCFinderBulletInputViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCFinderBulletInputViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) EmoticonBoardView *emoticonBoardView; // @synthesize emoticonBoardView=_emoticonBoardView;
@property(retain, nonatomic) WCFinderBulletInputToolbarView *inputToolbarView; // @synthesize inputToolbarView=_inputToolbarView;
- (_Bool)inputViewShouldDismisAfterCommit:(id)arg1;
- (void)onBulletSwitchChangeOpenState:(_Bool)arg1;
- (void)onInputViewShowChange:(_Bool)arg1;
- (void)didCommitText:(id)arg1;
- (double)getVisibleHeight;
- (void)showInteractionLimitView;
- (void)showInputViewAtScrollViewY:(_Bool)arg1;
- (void)showInputViewWithDisable;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutEmoticonBoardView;
- (void)layoutInputView;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

