//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderJSAPIPostParams : NSObject
{
    unsigned int _fileSize;
    unsigned int _bitrate;
    unsigned int _waitType;
    NSString *_clientId;
    NSString *_mediaUrl;
    NSString *_thumbUrl;
    double _mediaWidth;
    double _mediaHeight;
    double _duration;
    NSString *_fromAppId;
    unsigned long long _fromAppSource;
    NSString *_fromAppExtInfo;
    NSString *_coverUrl;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int waitType; // @synthesize waitType=_waitType;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(copy, nonatomic) NSString *fromAppExtInfo; // @synthesize fromAppExtInfo=_fromAppExtInfo;
@property(nonatomic) unsigned long long fromAppSource; // @synthesize fromAppSource=_fromAppSource;
@property(copy, nonatomic) NSString *fromAppId; // @synthesize fromAppId=_fromAppId;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double mediaHeight; // @synthesize mediaHeight=_mediaHeight;
@property(nonatomic) double mediaWidth; // @synthesize mediaWidth=_mediaWidth;
@property(nonatomic) unsigned int bitrate; // @synthesize bitrate=_bitrate;
@property(nonatomic) unsigned int fileSize; // @synthesize fileSize=_fileSize;
@property(copy, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(copy, nonatomic) NSString *mediaUrl; // @synthesize mediaUrl=_mediaUrl;
@property(copy, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
- (id)initWithJSONString:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)toJsonStr;
- (id)description;
- (_Bool)isValid;

@end

