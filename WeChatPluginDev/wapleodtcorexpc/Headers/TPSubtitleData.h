//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TPSubtitleData : NSObject
{
    NSString *_subtitleData;
    long long _durationMs;
    long long _startPositionMs;
    long long _trackIndex;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long trackIndex; // @synthesize trackIndex=_trackIndex;
@property(readonly, nonatomic) long long startPositionMs; // @synthesize startPositionMs=_startPositionMs;
@property(readonly, nonatomic) long long durationMs; // @synthesize durationMs=_durationMs;
@property(readonly, copy, nonatomic) NSString *subtitleData; // @synthesize subtitleData=_subtitleData;
- (id)initWithData:(id)arg1 durationMs:(long long)arg2 startPositionMs:(long long)arg3 trackIndex:(long long)arg4;

@end

