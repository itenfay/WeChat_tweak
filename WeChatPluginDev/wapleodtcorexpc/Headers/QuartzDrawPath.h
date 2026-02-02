//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;

@interface QuartzDrawPath
{
    _Bool _fill;
    _Bool _clip;
    NSArray *_path;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *path; // @synthesize path=_path;
- (_Bool)getHasClip;
- (void)setHasClip:(_Bool)arg1;
- (void)arcTo:(struct CGPath *)arg1 data:(id)arg2;
- (void)arc:(struct CGPath *)arg1 data:(id)arg2;
- (void)bezierCurveTo:(struct CGPath *)arg1 data:(id)arg2;
- (void)quadraticCurveTo:(struct CGPath *)arg1 data:(id)arg2;
- (void)rect:(struct CGPath *)arg1 data:(id)arg2;
- (void)closePath:(struct CGPath *)arg1 data:(id)arg2;
- (void)lineTo:(struct CGPath *)arg1 data:(id)arg2;
- (void)moveTo:(struct CGPath *)arg1 data:(id)arg2;
- (void)setRadialGradient:(id)arg1 context:(struct CGContext *)arg2;
- (void)setLinearGradient:(id)arg1 context:(struct CGContext *)arg2;
- (struct CGPath *)newPath;
- (void)Execute:(struct CGContext *)arg1;
- (id)initWithPath:(id)arg1 clip:(_Bool)arg2;
- (id)initWithPath:(id)arg1 fill:(_Bool)arg2;

@end

