//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIActivityIndicatorView, MMUILabel, UIImageView, UILongPressGestureRecognizer;
@protocol VoicePrintRecordButtonDelegate;

@interface VoicePrintRecordButton : UIView
{
    _Bool _animating;
    unsigned int _state;
    id <VoicePrintRecordButtonDelegate> _delegate;
    double _volume;
    UIView *_backgroundView;
    UIView *_borderView;
    UIImageView *_iconImageView;
    MMUILabel *_tipsLabel;
    MMUIActivityIndicatorView *_loadingView;
    UILongPressGestureRecognizer *_longPressGesture;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
@property(retain, nonatomic) MMUIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) double volume; // @synthesize volume=_volume;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(nonatomic) __weak id <VoicePrintRecordButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleLongPressGesture:(id)arg1;
- (void)stopRecordAnimation;
- (void)startRecordAnimation;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (void)initGesture;
- (id)initWithFrame:(struct CGRect)arg1;

@end

