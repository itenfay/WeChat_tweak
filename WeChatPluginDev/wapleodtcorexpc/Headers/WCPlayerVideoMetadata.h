//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPlayerVideoMetadata : NSObject
{
    int _level;
    int _profile;
    int _colorSpace;
    int _codecId;
    double _duration;
    NSString *_profileName;
    NSString *_videoCodecID;
    NSString *_videoCodecTag;
    long long _videoBitRate;
    NSString *_audioCodecID;
    NSString *_audioCodecTag;
    long long _audioBitRate;
    struct CGSize _size;
}

- (void).cxx_destruct;
@property(nonatomic) long long audioBitRate; // @synthesize audioBitRate=_audioBitRate;
@property(retain, nonatomic) NSString *audioCodecTag; // @synthesize audioCodecTag=_audioCodecTag;
@property(retain, nonatomic) NSString *audioCodecID; // @synthesize audioCodecID=_audioCodecID;
@property(nonatomic) long long videoBitRate; // @synthesize videoBitRate=_videoBitRate;
@property(retain, nonatomic) NSString *videoCodecTag; // @synthesize videoCodecTag=_videoCodecTag;
@property(retain, nonatomic) NSString *videoCodecID; // @synthesize videoCodecID=_videoCodecID;
@property(nonatomic) int codecId; // @synthesize codecId=_codecId;
@property(nonatomic) int colorSpace; // @synthesize colorSpace=_colorSpace;
@property(retain, nonatomic) NSString *profileName; // @synthesize profileName=_profileName;
@property(nonatomic) int profile; // @synthesize profile=_profile;
@property(nonatomic) int level; // @synthesize level=_level;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
- (id)description;

@end

