//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class PAGView, UILabel;

@interface MMFinderLiveGenericLongPressEducationView : UIView
{
    CDUnknownBlockType _actionBlock;
    unsigned long long _viewType;
    PAGView *_animationView;
    UILabel *_tipsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) PAGView *animationView; // @synthesize animationView=_animationView;
@property(nonatomic) unsigned long long viewType; // @synthesize viewType=_viewType;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (id)getTipsLabelText;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)hide;
- (void)show;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 viewType:(unsigned long long)arg2;

@end

