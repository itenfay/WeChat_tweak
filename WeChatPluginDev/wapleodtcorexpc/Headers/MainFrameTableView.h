//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CADisplayLink, NSIndexPath;

@interface MainFrameTableView
{
    CADisplayLink *_displayLink;
    double _animationPointsPerSecond;
    double _finalContentOffset;
    CDUnknownBlockType _completeBlock;
    NSIndexPath *_selectedIndexPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(nonatomic) double finalContentOffset; // @synthesize finalContentOffset=_finalContentOffset;
@property(nonatomic) double animationPointsPerSecond; // @synthesize animationPointsPerSecond=_animationPointsPerSecond;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
- (void)deselectRowAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)selectRowAtIndexPath:(id)arg1 animated:(_Bool)arg2 scrollPosition:(long long)arg3;
- (void)selectRowAtIndexPath:(id)arg1 cell:(id)arg2 animated:(_Bool)arg3 scrollPosition:(long long)arg4;
- (id)indexPathForSelectedRow;
- (void)handleSelectAtIndexPath:(id)arg1;
- (void)displayLinkTick;
- (void)endAnimation;
- (void)forceScrollToOffset:(double)arg1 duration:(double)arg2 complete:(CDUnknownBlockType)arg3;
- (_Bool)tryInsertRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (_Bool)tryDeleteRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;

@end

