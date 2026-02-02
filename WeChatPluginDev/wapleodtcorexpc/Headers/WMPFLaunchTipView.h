//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface WMPFLaunchTipView : UIView
{
    _Bool _hasBeginShow;
    _Bool _animateShowFinished;
    _Bool _isGame;
}

@property(nonatomic) _Bool isGame; // @synthesize isGame=_isGame;
@property(nonatomic) _Bool animateShowFinished; // @synthesize animateShowFinished=_animateShowFinished;
@property(nonatomic) _Bool hasBeginShow; // @synthesize hasBeginShow=_hasBeginShow;
- (void)dealloc;
- (void)layoutSubviews;
- (void)animateHideWithDelay:(double)arg1;
- (void)animateShowWithCompleteHandler:(CDUnknownBlockType)arg1;
- (void)buildView;
- (id)initWithFrame:(struct CGRect)arg1 isGame:(_Bool)arg2;

@end

