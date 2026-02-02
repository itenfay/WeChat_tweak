//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface RoundRingView : UIView
{
    long long _annotationState;
    UIImageView *_outerRoundView;
    UIView *_innerRoundView;
    UIView *_dotRoundView;
    double _lastWidth;
    double _lastHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double lastHeight; // @synthesize lastHeight=_lastHeight;
@property(nonatomic) double lastWidth; // @synthesize lastWidth=_lastWidth;
@property(retain, nonatomic) UIView *dotRoundView; // @synthesize dotRoundView=_dotRoundView;
@property(retain, nonatomic) UIView *innerRoundView; // @synthesize innerRoundView=_innerRoundView;
@property(retain, nonatomic) UIImageView *outerRoundView; // @synthesize outerRoundView=_outerRoundView;
@property(nonatomic) long long annotationState; // @synthesize annotationState=_annotationState;
- (void)startAnimateFromSelectToUnSelect:(CDUnknownBlockType)arg1;
- (void)startAnimateFromUnSelectToSelect:(CDUnknownBlockType)arg1;
- (void)removeAllAnimations;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

