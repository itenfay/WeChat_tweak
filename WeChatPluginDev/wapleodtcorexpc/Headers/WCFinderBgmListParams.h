//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString, WCFinderBgmListOptionalParams;

@interface WCFinderBgmListParams : NSObject
{
    unsigned long long _type;
    unsigned long long _requireMusicCount;
    NSData *_sessionBuffer;
    unsigned long long _videoDuration;
    WCFinderBgmListOptionalParams *_optionalParams;
    NSString *_query;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) WCFinderBgmListOptionalParams *optionalParams; // @synthesize optionalParams=_optionalParams;
@property(nonatomic) unsigned long long videoDuration; // @synthesize videoDuration=_videoDuration;
@property(copy, nonatomic) NSData *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(nonatomic) unsigned long long requireMusicCount; // @synthesize requireMusicCount=_requireMusicCount;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)init;

@end

