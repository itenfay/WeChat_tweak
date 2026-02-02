//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class PAGView;

@interface MMFinderLiveGenericFullTapEducationView : UIView
{
    CDUnknownBlockType _actionBlock;
    PAGView *_animationView;
    struct CGPoint _anchorPoint;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint anchorPoint; // @synthesize anchorPoint=_anchorPoint;
@property(retain, nonatomic) PAGView *animationView; // @synthesize animationView=_animationView;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)hide;
- (void)show;
- (void)updateAnchorPoint:(struct CGPoint)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

