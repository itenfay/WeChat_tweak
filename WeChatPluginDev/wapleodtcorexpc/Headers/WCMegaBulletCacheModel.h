//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, WCFinderBulletCache;

@interface WCMegaBulletCacheModel : NSObject
{
    _Bool _hadMore;
    _Bool _error;
    WCFinderBulletCache *_cache;
    double _nextTime;
    NSData *_lastBuffer;
    NSMutableDictionary *_tasks;
    NSMutableDictionary *_existedTag;
}

+ (double)preLoadDuration;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *existedTag; // @synthesize existedTag=_existedTag;
@property(retain, nonatomic) NSMutableDictionary *tasks; // @synthesize tasks=_tasks;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic, getter=isError) _Bool error; // @synthesize error=_error;
@property(readonly, nonatomic) _Bool hadMore; // @synthesize hadMore=_hadMore;
@property(readonly, nonatomic) double nextTime; // @synthesize nextTime=_nextTime;
@property(retain, nonatomic) WCFinderBulletCache *cache; // @synthesize cache=_cache;
- (void)clear;
- (_Bool)rangExistInTimeLine:(double)arg1;
- (void)tagExistFrom:(double)arg1 to:(double)arg2 videoLength:(double)arg3;
- (_Bool)shouldRequestInPosition:(double)arg1;
- (id)init;

@end

