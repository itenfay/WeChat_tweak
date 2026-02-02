//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@protocol FlutterViewEngineDelegate;

@interface FlutterView : UIView
{
    id <FlutterViewEngineDelegate> _delegate;
    _Bool _isWideGamutEnabled;
    _Bool _presentsWithTransaction;
}

+ (Class)layerClass;
+ (void)setForceSoftwareRendering:(_Bool)arg1;
+ (_Bool)forceSoftwareRendering;
@property(nonatomic) _Bool presentsWithTransaction; // @synthesize presentsWithTransaction=_presentsWithTransaction;
- (_Bool)isAccessibilityElement;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (id)snapshotFlutter;
- (void)layoutSubviews;
- (id)initWithDelegate:(id)arg1 opaque:(_Bool)arg2 enableWideGamut:(_Bool)arg3;
- (_Bool)isWideGamutSupported;
- (unsigned long long)pixelFormat;
- (id)screen;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

