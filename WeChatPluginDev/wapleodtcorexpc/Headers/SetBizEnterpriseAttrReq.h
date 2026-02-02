//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, BizEnterpriseAttr;

@interface SetBizEnterpriseAttrReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BizEnterpriseAttr *attr; // @dynamic attr;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int brandType; // @dynamic brandType;
@property(nonatomic) unsigned int mask; // @dynamic mask;

@end

