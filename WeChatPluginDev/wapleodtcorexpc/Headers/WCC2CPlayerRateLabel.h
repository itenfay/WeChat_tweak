//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, UILabel, UIViewPropertyAnimator;

@interface WCC2CPlayerRateLabel : UIView
{
    int _playRateIndex;
    CDUnknownBlockType _onPlayRateChange;
    UILabel *_textLabel;
    UIView *_bgView;
    NSArray *_supportedPlayRate;
    UIViewPropertyAnimator *_animator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIViewPropertyAnimator *animator; // @synthesize animator=_animator;
@property(retain, nonatomic) NSArray *supportedPlayRate; // @synthesize supportedPlayRate=_supportedPlayRate;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(copy, nonatomic) CDUnknownBlockType onPlayRateChange; // @synthesize onPlayRateChange=_onPlayRateChange;
@property(nonatomic) int playRateIndex; // @synthesize playRateIndex=_playRateIndex;
- (void)setText:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (void)layoutSubviews;
- (id)init;

@end

