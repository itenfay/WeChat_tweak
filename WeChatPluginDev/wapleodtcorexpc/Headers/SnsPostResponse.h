//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString, SnsObject, SnsTips;

@interface SnsPostResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) SnsObject *snsObject; // @dynamic snsObject;
@property(retain, nonatomic) SnsTips *snsTips; // @dynamic snsTips;
@property(retain, nonatomic) NSString *spamTips; // @dynamic spamTips;
@property(retain, nonatomic) NSMutableArray *withTaFailList; // @dynamic withTaFailList;
@property(nonatomic) unsigned int withTaFailListCount; // @dynamic withTaFailListCount;

@end

