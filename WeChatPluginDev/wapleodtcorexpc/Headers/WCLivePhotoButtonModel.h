//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIFont;

@interface WCLivePhotoButtonModel : NSObject
{
    _Bool _enableLiveBtn;
    _Bool _isShowBtn;
    _Bool _addBlurEffect;
    unsigned int _blurEffectStyle;
    double _paddingX;
    double _paddingY;
    NSString *_liveIconName;
    UIColor *_liveIconColor;
    UIFont *_liveLabelFont;
    UIColor *_liveLabelTextColor;
    NSString *_liveLabelText;
    UIColor *_liveBtnBgColor;
    struct CGSize _liveIconSize;
    struct CGSize _liveIconPos;
    struct CGSize _liveLabelPos;
    struct CGSize _liveLabelSize;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int blurEffectStyle; // @synthesize blurEffectStyle=_blurEffectStyle;
@property(nonatomic) _Bool addBlurEffect; // @synthesize addBlurEffect=_addBlurEffect;
@property(nonatomic) _Bool isShowBtn; // @synthesize isShowBtn=_isShowBtn;
@property(nonatomic) _Bool enableLiveBtn; // @synthesize enableLiveBtn=_enableLiveBtn;
@property(retain, nonatomic) UIColor *liveBtnBgColor; // @synthesize liveBtnBgColor=_liveBtnBgColor;
@property(nonatomic) struct CGSize liveLabelSize; // @synthesize liveLabelSize=_liveLabelSize;
@property(nonatomic) struct CGSize liveLabelPos; // @synthesize liveLabelPos=_liveLabelPos;
@property(retain, nonatomic) NSString *liveLabelText; // @synthesize liveLabelText=_liveLabelText;
@property(retain, nonatomic) UIColor *liveLabelTextColor; // @synthesize liveLabelTextColor=_liveLabelTextColor;
@property(retain, nonatomic) UIFont *liveLabelFont; // @synthesize liveLabelFont=_liveLabelFont;
@property(nonatomic) struct CGSize liveIconPos; // @synthesize liveIconPos=_liveIconPos;
@property(nonatomic) struct CGSize liveIconSize; // @synthesize liveIconSize=_liveIconSize;
@property(retain, nonatomic) UIColor *liveIconColor; // @synthesize liveIconColor=_liveIconColor;
@property(retain, nonatomic) NSString *liveIconName; // @synthesize liveIconName=_liveIconName;
@property(nonatomic) double paddingY; // @synthesize paddingY=_paddingY;
@property(nonatomic) double paddingX; // @synthesize paddingX=_paddingX;
- (void)_setupLiveViewShow;
- (void)_setupLivePhotoViewDisabled;
- (void)_setupLivePhotoViewOff;
- (void)_setupLivePhotoViewOn;
- (_Bool)setupLivePhotoButtonStyle:(unsigned long long)arg1;
- (id)initWithStyle:(unsigned long long)arg1;

@end

