//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface GetLatestPayProductInfoRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *payAppId; // @dynamic payAppId;
@property(retain, nonatomic) NSString *payFuncId; // @dynamic payFuncId;
@property(retain, nonatomic) NSString *payProductId; // @dynamic payProductId;
@property(retain, nonatomic) NSString *remarks; // @dynamic remarks;
@property(retain, nonatomic) NSString *ticket; // @dynamic ticket;

@end

