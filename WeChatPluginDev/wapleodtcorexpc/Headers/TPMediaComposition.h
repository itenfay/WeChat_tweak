//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSString, TPMediaAssetExtraParam;

@interface TPMediaComposition : NSObject
{
    int _videoSequence;
    int _audioSequence;
    int _avSequence;
    TPMediaAssetExtraParam *extraParams;
    NSDictionary *httpHeader;
    NSMutableArray *_innerTracks;
}

- (void).cxx_destruct;
@property(nonatomic) int avSequence; // @synthesize avSequence=_avSequence;
@property(nonatomic) int audioSequence; // @synthesize audioSequence=_audioSequence;
@property(nonatomic) int videoSequence; // @synthesize videoSequence=_videoSequence;
@property(retain, nonatomic) NSMutableArray *innerTracks; // @synthesize innerTracks=_innerTracks;
@property(copy, nonatomic) NSDictionary *httpHeader; // @synthesize httpHeader;
@property(retain, nonatomic) TPMediaAssetExtraParam *extraParams; // @synthesize extraParams;
@property(readonly, copy, nonatomic) NSString *url;
@property(readonly, nonatomic) long long mediaType;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) CDStruct_1b6d18a9 audioDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 videoDuration;
- (int)genAVTracksequence;
- (int)genAudioTracksequence;
- (int)genVideoTrackSequence;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
- (id)tracksWithMediaType:(long long)arg1;
- (id)trackWithTrackID:(int)arg1;
- (void)removeTrack:(id)arg1;
- (id)addMediaTrackWithMediaType:(long long)arg1;
@property(readonly, copy, nonatomic) NSArray *tracks;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

