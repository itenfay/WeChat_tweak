//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIVisualEffectView;

@interface PlatformViewFilter : NSObject
{
    _Bool _backdropFilterViewConfigured;
    double _blurRadius;
    UIVisualEffectView *_backdropFilterView;
    struct CGRect _frame;
}

+ (_Bool)isUIVisualEffectViewImplementationValid;
+ (void)prepareOnce:(id)arg1;
+ (void)resetPreparation;
@property(nonatomic) _Bool backdropFilterViewConfigured; // @synthesize backdropFilterViewConfigured=_backdropFilterViewConfigured;
@property(retain, nonatomic) UIVisualEffectView *backdropFilterView; // @synthesize backdropFilterView=_backdropFilterView;
@property(readonly, nonatomic) double blurRadius; // @synthesize blurRadius=_blurRadius;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (void)updateVisualEffectView:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 blurRadius:(double)arg2 visualEffectView:(id)arg3;

@end

