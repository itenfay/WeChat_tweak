//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface CgiGetShortTermQrcodeResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(nonatomic) unsigned long long fixAmount; // @dynamic fixAmount;
@property(retain, nonatomic) NSString *payerDescPlaceholder; // @dynamic payerDescPlaceholder;
@property(nonatomic) _Bool payerDescRequired; // @dynamic payerDescRequired;
@property(nonatomic) unsigned int qrcodeLevel; // @dynamic qrcodeLevel;
@property(nonatomic) unsigned int qrcodeType; // @dynamic qrcodeType;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

