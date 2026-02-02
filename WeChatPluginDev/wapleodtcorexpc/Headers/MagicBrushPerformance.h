//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MagicBrushPerformance : NSObject
{
    _Bool _enableReportVarianceFps;
    _Bool _paused;
    int _fps;
    int _drawcall;
    int _vertex;
    int _triangle;
    int _jankCount;
    int _bigJankCount;
    int _jankFrameTime;
    int _totalFrameTime;
    int _jankPerSecond;
    int _bigJankPerSecond;
    int _stutterPerSecond;
    void *_runtime;
}

@property(nonatomic) int stutterPerSecond; // @synthesize stutterPerSecond=_stutterPerSecond;
@property(nonatomic) int bigJankPerSecond; // @synthesize bigJankPerSecond=_bigJankPerSecond;
@property(nonatomic) int jankPerSecond; // @synthesize jankPerSecond=_jankPerSecond;
@property(nonatomic) int totalFrameTime; // @synthesize totalFrameTime=_totalFrameTime;
@property(nonatomic) int jankFrameTime; // @synthesize jankFrameTime=_jankFrameTime;
@property(nonatomic) int bigJankCount; // @synthesize bigJankCount=_bigJankCount;
@property(nonatomic) int jankCount; // @synthesize jankCount=_jankCount;
@property(nonatomic) int triangle; // @synthesize triangle=_triangle;
@property(nonatomic) int vertex; // @synthesize vertex=_vertex;
@property(nonatomic) int drawcall; // @synthesize drawcall=_drawcall;
@property(nonatomic) int fps; // @synthesize fps=_fps;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) void *runtime; // @synthesize runtime=_runtime;
@property(nonatomic) _Bool enableReportVarianceFps; // @synthesize enableReportVarianceFps=_enableReportVarianceFps;
- (void)destroy;
- (void)resume;
- (void)pause;
- (void)start;
- (void)triggerUpdatePerformance;
- (long long)getVarianceFps;
- (CDStruct_66ad1804)getPerformance;
- (void)resetJankInfo;
- (id)initWithRuntime:(void *)arg1;

@end

