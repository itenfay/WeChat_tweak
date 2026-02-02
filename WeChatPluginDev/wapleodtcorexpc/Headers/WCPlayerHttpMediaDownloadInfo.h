//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCPlayerHttpMediaWrap;

@interface WCPlayerHttpMediaDownloadInfo : NSObject
{
    _Bool _bTaskStart;
    unsigned int _count;
    float _duration;
    long long _createTime;
    unsigned long long _moovoffset;
    unsigned long long _moovlength;
    NSString *_nsIdentifier;
    WCPlayerHttpMediaWrap *_mediaWrap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPlayerHttpMediaWrap *mediaWrap; // @synthesize mediaWrap=_mediaWrap;
@property(retain, nonatomic) NSString *nsIdentifier; // @synthesize nsIdentifier=_nsIdentifier;
@property(nonatomic) float duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long moovlength; // @synthesize moovlength=_moovlength;
@property(nonatomic) unsigned long long moovoffset; // @synthesize moovoffset=_moovoffset;
@property(nonatomic) long long createTime; // @synthesize createTime=_createTime;
@property(nonatomic) _Bool bTaskStart; // @synthesize bTaskStart=_bTaskStart;
@property(nonatomic) unsigned int count; // @synthesize count=_count;
- (id)description;
- (_Bool)isSameMediaWrap:(id)arg1;
- (id)initWithMediaWrap:(id)arg1;

@end

