//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, MMUILabel, SightIconView;

@interface NewLifeCardPostStateView : UIView
{
    long long _state;
    double _progress;
    SightIconView *_loadingView;
    MMUILabel *_loadingLabel;
    MMUIButton *_repostButton;
    CDUnknownBlockType _repostAction;
}

+ (double)fixedHeight;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType repostAction; // @synthesize repostAction=_repostAction;
@property(retain, nonatomic) MMUIButton *repostButton; // @synthesize repostButton=_repostButton;
@property(retain, nonatomic) MMUILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(retain, nonatomic) SightIconView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void)onTapRepostButton;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

