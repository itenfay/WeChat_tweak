//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface VideoMediaInfo : NSObject
{
    unsigned int _duration;
    unsigned int _timescale;
    unsigned int _trakduration;
    unsigned int _traktimescale;
    unsigned int _rate;
    unsigned int _flages;
    unsigned int _version;
    unsigned int _createTime;
    unsigned int _modifiyTime;
    NSString *_vcodec;
    NSString *_acodec;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *acodec; // @synthesize acodec=_acodec;
@property(retain, nonatomic) NSString *vcodec; // @synthesize vcodec=_vcodec;
@property(nonatomic) unsigned int modifiyTime; // @synthesize modifiyTime=_modifiyTime;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(nonatomic) unsigned int flages; // @synthesize flages=_flages;
@property(nonatomic) unsigned int rate; // @synthesize rate=_rate;
@property(nonatomic) unsigned int traktimescale; // @synthesize traktimescale=_traktimescale;
@property(nonatomic) unsigned int trakduration; // @synthesize trakduration=_trakduration;
@property(nonatomic) unsigned int timescale; // @synthesize timescale=_timescale;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
- (id)description;

@end

