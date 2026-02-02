//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray;

@interface VoipRedirectReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) int currentDuration; // @dynamic currentDuration;
@property(nonatomic) unsigned int currentNetType; // @dynamic currentNetType;
@property(nonatomic) unsigned int nicCnt; // @dynamic nicCnt;
@property(retain, nonatomic) NSMutableArray *nicSet; // @dynamic nicSet;
@property(nonatomic) unsigned int previousNetType; // @dynamic previousNetType;
@property(nonatomic) int redirectOrientedFlg; // @dynamic redirectOrientedFlg;
@property(nonatomic) int roomId; // @dynamic roomId;
@property(nonatomic) long long roomKey; // @dynamic roomKey;
@property(nonatomic) int roomMemberId; // @dynamic roomMemberId;
@property(nonatomic) unsigned long long timestamp64; // @dynamic timestamp64;

@end

