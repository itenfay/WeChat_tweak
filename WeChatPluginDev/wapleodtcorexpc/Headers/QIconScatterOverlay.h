//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;

@interface QIconScatterOverlay
{
    _Bool _enable3D;
    NSArray *_nodes;
    NSArray *_icons;
    struct CGSize _size;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enable3D; // @synthesize enable3D=_enable3D;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) NSArray *icons; // @synthesize icons=_icons;
@property(copy, nonatomic) NSArray *nodes; // @synthesize nodes=_nodes;
- (void)recordGLoverlayCount:(id)arg1;
- (void)destoryImpl;
- (id)init;
- (void)destoryInfoData:(void *)arg1;
- (struct ScatterPlotCell **)createScatterData;
- (void)createBitmaps:(void *)arg1 from:(void *)arg2;
- (void *)createInfoData;
- (void *)createImpl;
- (void)setNeedsDisplay;

@end

