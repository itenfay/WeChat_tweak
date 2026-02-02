//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@class NSString, UIImageView, UIView;

@interface MainFrameActionFloatView : UIButton
{
    UIImageView *m_viewBg;
    UIView *m_viewContent;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)animateShowInView:(id)arg1;
- (id)init;
- (void)addDismissSel:(SEL)arg1 target:(id)arg2;
- (void)addItemWithBtnData:(id)arg1 showNew:(_Bool)arg2 sel:(SEL)arg3 target:(id)arg4;
- (void)addLineWithButton:(id)arg1;
- (void)updateSubviewWidth;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animateHideAction;
- (void)onHideAction;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

