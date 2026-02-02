//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIImageView;

@interface MinimizeAnimateStateBaseView : UIView
{
    _Bool _isAnimating;
    NSString *_stateIconName;
    UIColor *_stateIconColor;
    UIImageView *_stateIcon;
}

+ (id)genAnimateStateView:(unsigned int)arg1 WithGrayBackground:(_Bool)arg2 isMiniVersion:(_Bool)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) UIImageView *stateIcon; // @synthesize stateIcon=_stateIcon;
@property(retain, nonatomic) UIColor *stateIconColor; // @synthesize stateIconColor=_stateIconColor;
@property(retain, nonatomic) NSString *stateIconName; // @synthesize stateIconName=_stateIconName;
- (void)stopStateAnimation;
- (void)tryStartStateAnimation;
- (void)setFrame:(struct CGRect)arg1;
- (void)setStateIconName:(id)arg1 color:(id)arg2;
- (id)initWithGrayBackground:(_Bool)arg1 isMiniVersion:(_Bool)arg2;

@end

