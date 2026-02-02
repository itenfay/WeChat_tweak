//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveCdnStreamInfo, NSString;

@interface MMLiveCDNPlayerStreamWrap : NSObject
{
    _Bool _switchByUser;
    NSString *_url;
    NSString *_streamId;
    NSString *_originalUrl;
    MMLiveCdnStreamInfo *_cdnStreamInfo;
    unsigned long long _switchTimestamp;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool switchByUser; // @synthesize switchByUser=_switchByUser;
@property(nonatomic) unsigned long long switchTimestamp; // @synthesize switchTimestamp=_switchTimestamp;
@property(retain, nonatomic) MMLiveCdnStreamInfo *cdnStreamInfo; // @synthesize cdnStreamInfo=_cdnStreamInfo;
@property(copy, nonatomic) NSString *originalUrl; // @synthesize originalUrl=_originalUrl;
@property(copy, nonatomic) NSString *streamId; // @synthesize streamId=_streamId;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (_Bool)isSameStreamWithOriginalUrl:(id)arg1;
- (_Bool)isSameStreamWithPlayingUrl:(id)arg1;

@end

