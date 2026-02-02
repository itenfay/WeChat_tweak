//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIImageView;

@interface WCFinderSteramProfileBarView : UIView
{
    UIImageView *_closeIcon;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *closeIcon; // @synthesize closeIcon=_closeIcon;
- (void)updateBarBGColor:(id)arg1 arrowColor:(id)arg2;
- (void)layoutSubviews;
- (void)doLayout;
- (void)updateDisplayDragCloseProgress:(double)arg1;
- (void)initCloseIcon;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

