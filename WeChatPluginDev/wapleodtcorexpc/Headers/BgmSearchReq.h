//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface BgmSearchReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned long long bussId; // @dynamic bussId;
@property(nonatomic) unsigned int offset; // @dynamic offset;
@property(retain, nonatomic) NSString *query; // @dynamic query;
@property(nonatomic) unsigned long long relatedRecId; // @dynamic relatedRecId;
@property(nonatomic) unsigned int reqNum; // @dynamic reqNum;
@property(nonatomic) unsigned long long reqUin; // @dynamic reqUin;
@property(nonatomic) unsigned long long searchReqId; // @dynamic searchReqId;

@end

