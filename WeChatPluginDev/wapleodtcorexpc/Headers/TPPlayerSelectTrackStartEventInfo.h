//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class TPTrackInfo;

@interface TPPlayerSelectTrackStartEventInfo
{
    long long _trackIndex;
    long long _opaque;
    TPTrackInfo *_trackInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TPTrackInfo *trackInfo; // @synthesize trackInfo=_trackInfo;
@property(nonatomic) long long opaque; // @synthesize opaque=_opaque;
@property(nonatomic) long long trackIndex; // @synthesize trackIndex=_trackIndex;
- (id)init;

@end

