//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJOCRProcessor, MJPlaybackViewModel, MMLRUCache, NSMutableDictionary, NSString;
@protocol MJMovieTextSuggestionSnapshotGeneratorDelegate;

@interface MJMovieTextSuggestionSnapshotGenerator : NSObject
{
    id <MJMovieTextSuggestionSnapshotGeneratorDelegate> _delegate;
    MJPlaybackViewModel *_playbackVM;
    NSString *_sessionID;
    MMLRUCache *_cache;
    NSMutableDictionary *_runningTasks;
    MJOCRProcessor *_ocrProcessor;
}

+ (id)genSessionID;
+ (id)cacheKeyForSnapshot:(id)arg1;
+ (id)cacheKeyFromTime:(CDStruct_1b6d18a9)arg1;
+ (void)uploadSnapshotToCDN:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MJOCRProcessor *ocrProcessor; // @synthesize ocrProcessor=_ocrProcessor;
@property(retain, nonatomic) NSMutableDictionary *runningTasks; // @synthesize runningTasks=_runningTasks;
@property(retain, nonatomic) MMLRUCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) __weak MJPlaybackViewModel *playbackVM; // @synthesize playbackVM=_playbackVM;
@property(nonatomic) __weak id <MJMovieTextSuggestionSnapshotGeneratorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)removeSnapshotFromRunningTasks:(id)arg1;
- (void)addSnapshotToRunningTasks:(id)arg1;
- (id)fetchSnapshotInRunningAtTime:(CDStruct_1b6d18a9)arg1;
- (void)addSnapshotToCache:(id)arg1;
- (id)fetchSnapshotAtTimeFromCache:(CDStruct_1b6d18a9)arg1;
- (void)markAllSnapshotsInRunningAsPrefetched;
- (void)processSnapshotImage:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)isValidSnapshot:(id)arg1;
- (void)asyncGenerateSnapshotAtTime:(CDStruct_1b6d18a9)arg1;
- (id)fetchSnapshotFromCacheAtTime:(CDStruct_1b6d18a9)arg1;
- (void)notifyUserInputSessionEnd;
- (void)notifyUserInputSessionBegin;
- (void)reset;
- (id)initWithPlaybackVM:(id)arg1;

@end

