//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderAudioListenLaterConfig : NSObject
{
    NSString *_listen_id;
    NSString *_src_id;
    long long _type;
    NSString *_title;
    NSString *_cover;
    NSString *_author;
    long long _duration;
    NSString *_tid;
    NSString *_nonce_id;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *nonce_id; // @synthesize nonce_id=_nonce_id;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(copy, nonatomic) NSString *cover; // @synthesize cover=_cover;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *src_id; // @synthesize src_id=_src_id;
@property(copy, nonatomic) NSString *listen_id; // @synthesize listen_id=_listen_id;
- (id)initWithJSONString:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)toJsonStr;
- (id)description;

@end

