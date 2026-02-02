//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, BuiltinIPList, HostList, NSString, NetworkControl;

@interface GetVoiceprintTicketRsaResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) BuiltinIPList *builtinIplist; // @dynamic builtinIplist;
@property(nonatomic) unsigned int certRegion; // @dynamic certRegion;
@property(nonatomic) unsigned int mmtlsControlBitFlag; // @dynamic mmtlsControlBitFlag;
@property(retain, nonatomic) NetworkControl *networkControl; // @dynamic networkControl;
@property(retain, nonatomic) HostList *newHostList; // @dynamic newHostList;
@property(retain, nonatomic) NSString *voiceprintTicket; // @dynamic voiceprintTicket;

@end

