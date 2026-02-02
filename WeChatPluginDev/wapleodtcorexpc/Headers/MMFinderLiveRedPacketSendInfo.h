//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveAppMsgSendRedPacketInfo, FinderLiveContact, MMFinderLiveRedPacketItem, NSString;

@interface MMFinderLiveRedPacketSendInfo : NSObject
{
    FinderLiveAppMsgSendRedPacketInfo *_appMsgSendInfo;
    FinderLiveContact *_fromUserContact;
    unsigned long long _seq;
    NSString *_clientMsgId;
    MMFinderLiveRedPacketItem *_referredRedPacketInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveRedPacketItem *referredRedPacketInfo; // @synthesize referredRedPacketInfo=_referredRedPacketInfo;
@property(copy, nonatomic) NSString *clientMsgId; // @synthesize clientMsgId=_clientMsgId;
@property(nonatomic) unsigned long long seq; // @synthesize seq=_seq;
@property(retain, nonatomic) FinderLiveContact *fromUserContact; // @synthesize fromUserContact=_fromUserContact;
@property(retain, nonatomic) FinderLiveAppMsgSendRedPacketInfo *appMsgSendInfo; // @synthesize appMsgSendInfo=_appMsgSendInfo;

@end

