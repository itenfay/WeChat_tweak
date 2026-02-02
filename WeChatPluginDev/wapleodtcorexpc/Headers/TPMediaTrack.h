//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSString, TPMediaAssetExtraParam;

@interface TPMediaTrack : NSObject
{
    int _trackId;
    long long _mediaType;
    TPMediaAssetExtraParam *extraParams;
    NSDictionary *httpHeader;
    NSMutableArray *_clipArray;
}

+ (id)mediaTrackWithTrackMediaType:(long long)arg1;
+ (id)mediaTrackWithTrackId:(int)arg1 mediaType:(long long)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *clipArray; // @synthesize clipArray=_clipArray;
@property(copy, nonatomic) NSDictionary *httpHeader; // @synthesize httpHeader;
@property(retain, nonatomic) TPMediaAssetExtraParam *extraParams; // @synthesize extraParams;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) int trackId; // @synthesize trackId=_trackId;
@property(readonly, copy, nonatomic) NSString *url;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) CDStruct_1b6d18a9 totalDurationMs;
@property(readonly, nonatomic) NSArray *allTrakClips;
- (id)trackClipWithId:(int)arg1;
- (void)removeAllTrackClips;
- (_Bool)removeTrackClip:(id)arg1;
- (_Bool)insertTrackClip:(id)arg1 afterClipId:(int)arg2;
- (_Bool)addTrackClip:(id)arg1;
- (id)initWithTrackId:(int)arg1 mediaType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

