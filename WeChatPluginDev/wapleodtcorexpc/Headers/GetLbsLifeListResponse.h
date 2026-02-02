//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString, SKBuiltinBuffer_t;

@interface GetLbsLifeListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int autoQueryInterval; // @dynamic autoQueryInterval;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) SKBuiltinBuffer_t *buff; // @dynamic buff;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(nonatomic) unsigned int iconCount; // @dynamic iconCount;
@property(retain, nonatomic) NSMutableArray *iconList; // @dynamic iconList;
@property(nonatomic) unsigned int lifeCount; // @dynamic lifeCount;
@property(retain, nonatomic) NSMutableArray *lifeList; // @dynamic lifeList;
@property(retain, nonatomic) NSString *logoUrl; // @dynamic logoUrl;
@property(retain, nonatomic) NSString *searchId; // @dynamic searchId;

@end

