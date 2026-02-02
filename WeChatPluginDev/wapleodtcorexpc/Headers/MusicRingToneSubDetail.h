//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MusicRingToneSubDetail
{
    unsigned int _sid;
    NSString *_cover;
    NSString *_url;
    unsigned long long _duration;
    unsigned long long _sourceType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *cover; // @synthesize cover=_cover;
@property(nonatomic) unsigned int sid; // @synthesize sid=_sid;
- (id)initFromPb:(id)arg1;

@end

