//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVAudioPCMBuffer, NSDate, NSString;

@interface WAUniversalAudioPlayerCacheItem : NSObject
{
    AVAudioPCMBuffer *_cache;
    NSString *_identifier;
    unsigned long long _totalBytes;
    NSDate *_lastAccessDate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *lastAccessDate; // @synthesize lastAccessDate=_lastAccessDate;
@property(nonatomic) unsigned long long totalBytes; // @synthesize totalBytes=_totalBytes;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) AVAudioPCMBuffer *cache; // @synthesize cache=_cache;
- (id)accessCache;
- (id)initWithCache:(id)arg1 identifier:(id)arg2;

@end

