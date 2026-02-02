//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString, SKBuiltinBuffer_t;

@interface GetConnectInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int addrCount; // @dynamic addrCount;
@property(retain, nonatomic) NSMutableArray *addrList; // @dynamic addrList;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned long long dataSize; // @dynamic dataSize;
@property(nonatomic) unsigned int encryFlag; // @dynamic encryFlag;
@property(retain, nonatomic) NSString *hello; // @dynamic hello;
@property(retain, nonatomic) NSString *id; // @dynamic id;
@property(retain, nonatomic) SKBuiltinBuffer_t *key; // @dynamic key;
@property(retain, nonatomic) NSString *ok; // @dynamic ok;
@property(retain, nonatomic) NSString *pcacctName; // @dynamic pcacctName;
@property(retain, nonatomic) NSString *pcname; // @dynamic pcname;
@property(retain, nonatomic) NSString *resource; // @dynamic resource;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(retain, nonatomic) NSString *wifiName; // @dynamic wifiName;

@end

