//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, WCFinderFluencyReportCenter;

@interface WCFinderTimelineFluencyReportManager : NSObject
{
    WCFinderFluencyReportCenter *_reportCenter;
    CDUnknownBlockType _reportBlock;
    NSMutableArray *_infoBuffer;
}

+ (id)genSceneKeyWithCommentScene:(int)arg1 andPullType:(unsigned long long)arg2 timestamp:(unsigned long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *infoBuffer; // @synthesize infoBuffer=_infoBuffer;
@property(copy, nonatomic) CDUnknownBlockType reportBlock; // @synthesize reportBlock=_reportBlock;
@property(retain, nonatomic) WCFinderFluencyReportCenter *reportCenter; // @synthesize reportCenter=_reportCenter;
- (id)getStoredMediaIdWithSceneKey:(id)arg1;
- (void)setLoadingEndTime:(unsigned long long)arg1 sceneKey:(id)arg2;
- (void)setLoadingStartTime:(unsigned long long)arg1 sceneKey:(id)arg2;
- (void)setPullStatus:(unsigned long long)arg1 sceneKey:(id)arg2;
- (void)setFirstVideoWithMediaId:(id)arg1 startPlayTime:(unsigned long long)arg2 sceneKey:(id)arg3;
- (void)setFirstVideoWithMediaId:(id)arg1 preloadFinishTime:(unsigned long long)arg2 sceneKey:(id)arg3;
- (void)setFirstVideoWithMediaId:(id)arg1 preloadStartTime:(unsigned long long)arg2 sceneKey:(id)arg3;
- (void)setFirstVideoMediaId:(id)arg1 sceneKey:(id)arg2;
- (void)setFirstFeedId:(id)arg1 sceneKey:(id)arg2;
- (void)setShowUIFinishTime:(unsigned long long)arg1 sceneKey:(id)arg2;
- (void)setDebugMessage:(id)arg1 sceneKey:(id)arg2;
- (void)setIsFromPrefetch:(_Bool)arg1 sceneKey:(id)arg2;
- (void)setPullCGIFailWithSceneKey:(id)arg1;
- (void)setPullCGIProfile:(id)arg1 sceneKey:(id)arg2;
- (_Bool)isPullCGIFinished:(id)arg1;
- (void)setPullCGIFinishTime:(unsigned long long)arg1 sceneKey:(id)arg2;
- (void)setPullHistoryCGITime:(unsigned long long)arg1 sceneKey:(id)arg2;
- (void)setPullStreamCGITime:(unsigned long long)arg1 sceneKey:(id)arg2;
- (void)setGetCommentDetailCGIFinishTime:(unsigned long long)arg1 sceneKey:(id)arg2;
- (void)setGetCommentDetailCGITime:(unsigned long long)arg1 sceneKey:(id)arg2;
- (void)setLocalOperationFinishTime:(unsigned long long)arg1 sceneKey:(id)arg2;
- (_Bool)isStartSceneEnterWithSceneKey:(id)arg1;
- (void)setCommentScene:(int)arg1 sceneKey:(id)arg2;
- (void)setStartScene:(long long)arg1 sceneKey:(id)arg2;
- (void)setEnterTimestamp:(unsigned long long)arg1 sceneKey:(id)arg2;
- (id)initWithReportCenter:(id)arg1;

@end

