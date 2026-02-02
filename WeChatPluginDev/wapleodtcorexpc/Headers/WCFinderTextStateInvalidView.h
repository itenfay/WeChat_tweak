//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, WCFinderFeedDetailStatusView;
@protocol TextStateBaseMediaViewDelegate;

@interface WCFinderTextStateInvalidView : UIView
{
    id <TextStateBaseMediaViewDelegate> textStateDelegate;
    UIImageView *_iconImageView;
    WCFinderFeedDetailStatusView *_statusView;
    double _transitionProgress;
}

- (void).cxx_destruct;
@property(nonatomic) double transitionProgress; // @synthesize transitionProgress=_transitionProgress;
@property(retain, nonatomic) WCFinderFeedDetailStatusView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak id <TextStateBaseMediaViewDelegate> textStateDelegate; // @synthesize textStateDelegate;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<TextStateBaseMediaViewDelegate>",?,W,N,VtextStateDelegate

- (void)pausePlayMedia;
- (void)startPlayMedia;
@property(readonly, nonatomic) double mediaAspectRatio;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setInvalidText:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isForceMuted) _Bool forceMuted;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,GisForceMuted

@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isMuted) _Bool muted;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,GisMuted

@property(readonly) Class superclass;

@end

