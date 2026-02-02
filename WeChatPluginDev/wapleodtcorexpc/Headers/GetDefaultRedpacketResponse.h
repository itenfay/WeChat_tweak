//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, HbEnvelopSourceNew, JumpAction, NSData, RedEnvelopesLiteappJumpInfo;

@interface GetDefaultRedpacketResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSData *coverExtBuff; // @dynamic coverExtBuff;
@property(retain, nonatomic) NSData *coverInfoBufferForPlaceOrder; // @dynamic coverInfoBufferForPlaceOrder;
@property(retain, nonatomic) NSData *coverinfo; // @dynamic coverinfo;
@property(nonatomic) _Bool forceUseLocalCache; // @dynamic forceUseLocalCache;
@property(retain, nonatomic) JumpAction *jumpAction; // @dynamic jumpAction;
@property(retain, nonatomic) RedEnvelopesLiteappJumpInfo *packetListLiteappInfo; // @dynamic packetListLiteappInfo;
@property(retain, nonatomic) HbEnvelopSourceNew *showSource; // @dynamic showSource;
@property(retain, nonatomic) NSData *showSourceMac; // @dynamic showSourceMac;
@property(nonatomic) _Bool useNewLogic; // @dynamic useNewLogic;

@end

