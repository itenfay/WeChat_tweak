//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton;
@protocol WCFinderProgressBarDelegate, WCFinderProgressBarExtendDelegate;

@interface WCFinderProgressBar : UIView
{
    _Bool _showLargeBar;
    _Bool _showAnchorPoint;
    id <WCFinderProgressBarDelegate> _delegate;
    id <WCFinderProgressBarExtendDelegate> _extendDelegate;
    MMUIButton *_dotBtn;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MMUIButton *dotBtn; // @synthesize dotBtn=_dotBtn;
@property(nonatomic, getter=isShowAnchorPoint) _Bool showAnchorPoint; // @synthesize showAnchorPoint=_showAnchorPoint;
@property(nonatomic, getter=isShowLargeBar) _Bool showLargeBar; // @synthesize showLargeBar=_showLargeBar;
@property(nonatomic) __weak id <WCFinderProgressBarExtendDelegate> extendDelegate; // @synthesize extendDelegate=_extendDelegate;
@property(nonatomic) __weak id <WCFinderProgressBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void)removeProgressAnimation;
- (void)resumeAnimation;
- (void)stopAnimation;
- (void)reset;
- (void)setValue:(double)arg1 animateWithDuration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setValue:(double)arg1 animateWithDuration:(double)arg2 time:(double)arg3;
- (void)setValue:(double)arg1;
- (double)value;

@end

