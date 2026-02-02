//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveAppMsgRecvRedPacketInfo, FinderLiveContact, NSString;

@interface MMFinderLiveRedPacketReceiveInfo : NSObject
{
    FinderLiveAppMsgRecvRedPacketInfo *_appMsgReceiveInfo;
    FinderLiveContact *_fromUserContact;
    FinderLiveContact *_toUserContact;
    unsigned long long _seq;
    NSString *_clientMsgId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *clientMsgId; // @synthesize clientMsgId=_clientMsgId;
@property(nonatomic) unsigned long long seq; // @synthesize seq=_seq;
@property(retain, nonatomic) FinderLiveContact *toUserContact; // @synthesize toUserContact=_toUserContact;
@property(retain, nonatomic) FinderLiveContact *fromUserContact; // @synthesize fromUserContact=_fromUserContact;
@property(retain, nonatomic) FinderLiveAppMsgRecvRedPacketInfo *appMsgReceiveInfo; // @synthesize appMsgReceiveInfo=_appMsgReceiveInfo;

@end

