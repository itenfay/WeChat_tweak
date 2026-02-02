//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface FakeScreenOffWindow
{
    double _originBrightness;
}

+ (void)hide:(_Bool)arg1;
+ (void)show:(_Bool)arg1;
+ (id)window;
@property(nonatomic) double originBrightness; // @synthesize originBrightness=_originBrightness;
- (void)onWindowSceneSizeChanged;
- (id)initWithFrame:(struct CGRect)arg1;

@end

