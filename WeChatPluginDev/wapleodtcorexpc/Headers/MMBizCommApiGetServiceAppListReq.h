//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface MMBizCommApiGetServiceAppListReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *lang; // @dynamic lang;
@property(nonatomic) unsigned int limit; // @dynamic limit;
@property(nonatomic) unsigned int offset; // @dynamic offset;
@property(retain, nonatomic) NSString *tpaCountry; // @dynamic tpaCountry;

@end

