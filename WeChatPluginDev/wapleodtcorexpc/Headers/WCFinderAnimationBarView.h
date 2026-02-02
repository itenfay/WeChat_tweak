//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class LOTAnimationView, NSString;

@interface WCFinderAnimationBarView : UIView
{
    LOTAnimationView *_closeIcon;
}

- (void).cxx_destruct;
@property(retain, nonatomic) LOTAnimationView *closeIcon; // @synthesize closeIcon=_closeIcon;
- (void)updateDisplayDragCloseProgress:(double)arg1;
- (void)doLayout;
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

