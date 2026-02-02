//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIColor, UIFont;

@interface ScrollNumber : UIView
{
    _Bool _isYogaRightAlignment;
    _Bool _bIsFontChange;
    unsigned int _dotPos;
    UIFont *_font;
    UIColor *_color;
    double _animationTime;
    NSMutableArray *_numberArray;
    unsigned long long _currentNumber;
    UIView *_container;
    UIView *_clipView;
}

- (void).cxx_destruct;
@property _Bool bIsFontChange; // @synthesize bIsFontChange=_bIsFontChange;
@property(retain) UIView *clipView; // @synthesize clipView=_clipView;
@property(retain) UIView *container; // @synthesize container=_container;
@property unsigned long long currentNumber; // @synthesize currentNumber=_currentNumber;
@property(retain) NSMutableArray *numberArray; // @synthesize numberArray=_numberArray;
@property(nonatomic) _Bool isYogaRightAlignment; // @synthesize isYogaRightAlignment=_isYogaRightAlignment;
@property double animationTime; // @synthesize animationTime=_animationTime;
@property unsigned int dotPos; // @synthesize dotPos=_dotPos;
@property(retain) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (unsigned long long)getNumber;
- (double)widthOfNumbers:(id)arg1;
- (struct CGSize)scrollNumberSize;
- (double)currentOffsetXOfDot:(id)arg1;
- (double)offsetXOfDot:(id)arg1;
- (id)reverseArray:(id)arg1;
- (double)widthOfNumber:(unsigned long long)arg1;
- (void)updateTarget:(id)arg1 numberCount:(unsigned long long)arg2;
- (void)updateLastNumberFrame:(id)arg1 numberCount:(unsigned long long)arg2 target:(id)arg3;
- (id)noChangeArray:(id)arg1;
- (id)mixMinCurrentArray:(id)arg1 diffArray:(id)arg2;
- (id)mixCurrentArray:(id)arg1 diffArray:(id)arg2;
- (id)arrayFromMin:(unsigned long long)arg1;
- (int)bitOfNumber:(unsigned long long)arg1;
- (id)viewFromRStart:(unsigned long long)arg1 end:(unsigned long long)arg2;
- (id)viewFromStart:(unsigned long long)arg1 end:(unsigned long long)arg2;
- (void)updateNumber:(unsigned long long)arg1;
- (void)defaultNumber:(unsigned long long)arg1;
- (void)updateClipView;
- (void)updateContainer;
- (struct CGSize)dotSize;
- (struct CGSize)unitSize;
- (struct CGSize)singleNumberSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)init;

@end

