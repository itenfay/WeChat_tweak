//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CALayer, UIImageView, UILabel, WCLiveBlurButton;

@interface MMLiveConnectMicDescriptionButton : UIView
{
    _Bool _showRedDot;
    _Bool _isAnchor;
    unsigned long long _connectMicState;
    WCLiveBlurButton *_connectMicButton;
    UIImageView *_micIcon;
    UILabel *_textLabel;
    UIImageView *_closeIcon;
    CALayer *_redDotLayer;
    UILabel *_descriptionLabel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAnchor; // @synthesize isAnchor=_isAnchor;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) _Bool showRedDot; // @synthesize showRedDot=_showRedDot;
@property(retain, nonatomic) CALayer *redDotLayer; // @synthesize redDotLayer=_redDotLayer;
@property(retain, nonatomic) UIImageView *closeIcon; // @synthesize closeIcon=_closeIcon;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *micIcon; // @synthesize micIcon=_micIcon;
@property(retain, nonatomic) WCLiveBlurButton *connectMicButton; // @synthesize connectMicButton=_connectMicButton;
@property(nonatomic) unsigned long long connectMicState; // @synthesize connectMicState=_connectMicState;
- (void)updateViews;

@end

