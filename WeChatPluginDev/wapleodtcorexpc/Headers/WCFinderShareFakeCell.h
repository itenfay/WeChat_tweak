//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIImage;

@interface WCFinderShareFakeCell : UIView
{
    UIImage *_image;
    struct CGRect _mainViewRect;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect mainViewRect; // @synthesize mainViewRect=_mainViewRect;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (_Bool)zoomAnimatorUseTranSnapViewWithSnapAgain;
- (id)zoomAnimatorTransitionSnapView:(id)arg1 cornerRaidus:(double *)arg2;
- (struct CGRect)transitionStartImageRectInView:(id)arg1 willPresent:(_Bool)arg2;
- (id)transitionEndImage;
- (id)transitionStartImage;
- (void)doShareAnimation;
- (id)initWithImage:(id)arg1 mainViewRect:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

