//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface VerifyPurchaseResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int bizType; // @dynamic bizType;
@property(nonatomic) int isDeleteReceipt; // @dynamic isDeleteReceipt;
@property(retain, nonatomic) NSString *seriesId; // @dynamic seriesId;

@end

