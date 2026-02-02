//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;

@interface QDotScatterOverlay
{
    _Bool _enable3D;
    _Bool _animated;
    NSArray *_nodes;
    NSArray *_colors;
    double _radius;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(nonatomic) _Bool enable3D; // @synthesize enable3D=_enable3D;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(retain, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property(copy, nonatomic) NSArray *nodes; // @synthesize nodes=_nodes;
- (void)recordGLoverlayCount:(id)arg1;
- (id)init;
- (void)destoryInfoData:(void *)arg1;
- (void)destoryImpl;
- (struct ScatterPlotCell **)createScatterData;
- (vector_59af8ef9)processColorCopy;
- (void *)createInfoData;
- (void *)createImpl;
- (void)setNeedsDisplay;

@end

