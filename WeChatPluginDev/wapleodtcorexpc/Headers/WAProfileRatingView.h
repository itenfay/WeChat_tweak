//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIControl.h>

@class UIImage, UIView;

@interface WAProfileRatingView : UIControl
{
    UIView *_starBackgroundView;
    UIView *_starForegroundView;
    _Bool _isHandleTouch;
    _Bool _isUpdateProcess;
    unsigned int _numberOfStar;
    float _score;
    unsigned long long _displayType;
    double _elementHeight;
    double _elementWidth;
    double _elementMargin;
    UIImage *_forgroundImage;
    UIImage *_backgroundImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) UIImage *forgroundImage; // @synthesize forgroundImage=_forgroundImage;
@property(nonatomic) _Bool isUpdateProcess; // @synthesize isUpdateProcess=_isUpdateProcess;
@property(nonatomic) _Bool isHandleTouch; // @synthesize isHandleTouch=_isHandleTouch;
@property(nonatomic) double elementMargin; // @synthesize elementMargin=_elementMargin;
@property(nonatomic) double elementWidth; // @synthesize elementWidth=_elementWidth;
@property(nonatomic) double elementHeight; // @synthesize elementHeight=_elementHeight;
@property(nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;
@property(nonatomic) float score; // @synthesize score=_score;
@property(nonatomic) unsigned int numberOfStar; // @synthesize numberOfStar=_numberOfStar;
- (void)updateForegroundView;
- (void)setScore:(float)arg1 withAnimation:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setScore:(float)arg1 withAnimation:(_Bool)arg2;
- (void)updateScoreWithTouch:(id)arg1 hasNotify:(_Bool)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (double)widthForCompleteNum:(float)arg1 randomNum:(float)arg2;
- (void)sizeToFit;
- (id)initWithNumberOfStar:(unsigned int)arg1;
- (id)init;

@end

