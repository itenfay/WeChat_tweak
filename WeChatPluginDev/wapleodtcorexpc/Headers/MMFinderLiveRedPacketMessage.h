//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveRedPacketMessage : NSObject
{
    NSString *_liveId;
    NSString *_finderObjectId;
    NSString *_finderNonceId;
    NSString *_redPacketId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *redPacketId; // @synthesize redPacketId=_redPacketId;
@property(copy, nonatomic) NSString *finderNonceId; // @synthesize finderNonceId=_finderNonceId;
@property(copy, nonatomic) NSString *finderObjectId; // @synthesize finderObjectId=_finderObjectId;
@property(copy, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;

@end

