//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString;

@interface BakChatCreateQRCodeRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int addrCount; // @dynamic addrCount;
@property(retain, nonatomic) NSMutableArray *addrList; // @dynamic addrList;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned long long dataSize; // @dynamic dataSize;
@property(nonatomic) int op; // @dynamic op;
@property(retain, nonatomic) NSString *pcacctName; // @dynamic pcacctName;
@property(retain, nonatomic) NSString *pcname; // @dynamic pcname;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *wifiName; // @dynamic wifiName;

@end

