//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class HostList, NSString, SKBuiltinBuffer_t;

@interface AxAuthSecResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int axAlgo; // @dynamic axAlgo;
@property(nonatomic) unsigned int axAuthCgiId; // @dynamic axAuthCgiId;
@property(retain, nonatomic) NSString *axAuthUri; // @dynamic axAuthUri;
@property(retain, nonatomic) HostList *axHostList; // @dynamic axHostList;
@property(retain, nonatomic) SKBuiltinBuffer_t *axTicket; // @dynamic axTicket;
@property(nonatomic) unsigned int businessType; // @dynamic businessType;
@property(retain, nonatomic) SKBuiltinBuffer_t *randomKey; // @dynamic randomKey;

@end

