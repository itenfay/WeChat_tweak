//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WCFinderJumpNativeOlympicsParams : NSObject
{
    NSString *_liveNickname;
    NSString *_liveUsername;
    NSString *_byPassInfoString;
    NSData *_byPassInfo;
    long long _relayIndex;
    NSString *_liveHeadUrl;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *liveHeadUrl; // @synthesize liveHeadUrl=_liveHeadUrl;
@property(nonatomic) long long relayIndex; // @synthesize relayIndex=_relayIndex;
@property(retain, nonatomic) NSData *byPassInfo; // @synthesize byPassInfo=_byPassInfo;
@property(copy, nonatomic) NSString *byPassInfoString; // @synthesize byPassInfoString=_byPassInfoString;
@property(copy, nonatomic) NSString *liveUsername; // @synthesize liveUsername=_liveUsername;
@property(copy, nonatomic) NSString *liveNickname; // @synthesize liveNickname=_liveNickname;

@end

