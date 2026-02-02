//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ColorGradientView, MMUILabel, NSString, WCAdClickBarView, WCAdIconView;

@interface WCAdFullCardContentContainerView
{
    _Bool _hasClickBar;
    _Bool _doOnce;
    _Bool _canShowClickBar;
    _Bool _canShowBackgroundColorView;
    WCAdIconView *_iconView;
    MMUILabel *_titleView;
    MMUILabel *_descView;
    double _iconViewOriginX;
    double _titleViewOriginX;
    double _descViewOriginX;
    ColorGradientView *_bottomColorGradientView;
    ColorGradientView *_topColorGradientView;
    WCAdClickBarView *_clickBarView;
    NSString *_clickBarTitle;
    long long _logoIconType;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool canShowBackgroundColorView; // @synthesize canShowBackgroundColorView=_canShowBackgroundColorView;
@property(nonatomic) _Bool canShowClickBar; // @synthesize canShowClickBar=_canShowClickBar;
@property(nonatomic) _Bool doOnce; // @synthesize doOnce=_doOnce;
@property(nonatomic) _Bool hasClickBar; // @synthesize hasClickBar=_hasClickBar;
@property(nonatomic) long long logoIconType; // @synthesize logoIconType=_logoIconType;
@property(retain, nonatomic) NSString *clickBarTitle; // @synthesize clickBarTitle=_clickBarTitle;
@property(retain, nonatomic) WCAdClickBarView *clickBarView; // @synthesize clickBarView=_clickBarView;
@property(retain, nonatomic) ColorGradientView *topColorGradientView; // @synthesize topColorGradientView=_topColorGradientView;
@property(retain, nonatomic) ColorGradientView *bottomColorGradientView; // @synthesize bottomColorGradientView=_bottomColorGradientView;
@property(nonatomic) double descViewOriginX; // @synthesize descViewOriginX=_descViewOriginX;
@property(nonatomic) double titleViewOriginX; // @synthesize titleViewOriginX=_titleViewOriginX;
@property(nonatomic) double iconViewOriginX; // @synthesize iconViewOriginX=_iconViewOriginX;
@property(retain, nonatomic) MMUILabel *descView; // @synthesize descView=_descView;
@property(retain, nonatomic) MMUILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) WCAdIconView *iconView; // @synthesize iconView=_iconView;
- (void)setViewProperty:(id)arg1 alpha:(double)arg2 left:(double)arg3 hidden:(_Bool)arg4;
- (void)showAdClickBar;
- (void)resetClickBar;
- (void)showTextContentAnimation;
- (id)createColorGradientViewWithPosition:(int)arg1 onlyForLogo:(_Bool)arg2 maxAlpha:(double)arg3;
- (_Bool)initViewsWithDataItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andDataItem:(id)arg2;

@end

