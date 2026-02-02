//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCSVGCanvas;

@interface WCSVGImage : NSObject
{
    WCSVGCanvas *_mainCanvas;
    struct CGRect _viewBox;
}

+ (id)imageNamed:(id)arg1 fromConfig:(id)arg2;
+ (id)svgDataWithName:(id)arg1;
+ (id)imageData:(id)arg1 fromConfig:(id)arg2;
+ (id)adaptedWeSVGImageWithName:(id)arg1 data:(id)arg2 config:(id)arg3;
+ (id)imageWithContentsOfFile:(id)arg1 size:(struct CGSize)arg2 color:(id)arg3 alpha:(double)arg4 rotate:(double)arg5;
+ (id)imageNamed:(id)arg1 size:(struct CGSize)arg2 color:(id)arg3 alpha:(double)arg4 rotate:(double)arg5;
+ (id)imageNamed:(id)arg1 size:(struct CGSize)arg2 color:(id)arg3;
+ (id)imageNamed:(id)arg1 size:(struct CGSize)arg2;
+ (id)imageNamed:(id)arg1 color:(id)arg2 alpha:(double)arg3 rotate:(double)arg4;
+ (id)imageNamed:(id)arg1 color:(id)arg2 alpha:(double)arg3;
+ (id)imageNamed:(id)arg1 color:(id)arg2;
+ (id)imageNamed:(id)arg1;
+ (id)imageData:(id)arg1 resize:(struct CGSize)arg2 scale:(double)arg3;
- (void).cxx_destruct;
@property(nonatomic) struct CGRect viewBox; // @synthesize viewBox=_viewBox;
@property(retain, nonatomic) WCSVGCanvas *mainCanvas; // @synthesize mainCanvas=_mainCanvas;
@property(readonly, nonatomic) struct CGSize size;

@end

