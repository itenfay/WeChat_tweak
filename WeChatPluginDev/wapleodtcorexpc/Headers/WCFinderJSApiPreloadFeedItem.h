//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderJSApiPreloadFeedItem : NSObject
{
    _Bool _needPreloadFirstFrame;
    NSString *_encryptId;
    NSString *_nonceId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needPreloadFirstFrame; // @synthesize needPreloadFirstFrame=_needPreloadFirstFrame;
@property(retain, nonatomic) NSString *nonceId; // @synthesize nonceId=_nonceId;
@property(retain, nonatomic) NSString *encryptId; // @synthesize encryptId=_encryptId;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

