//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIImageView;

@interface WCFinderLiveIconImageView : UIView
{
    unsigned long long _style;
    UIImageView *_iconView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
- (void)_startLiveAnimation;
- (void)startLiveAnimation;
- (void)setHidden:(_Bool)arg1;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)setUpImageViewWithStyle:(unsigned long long)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1 style:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

