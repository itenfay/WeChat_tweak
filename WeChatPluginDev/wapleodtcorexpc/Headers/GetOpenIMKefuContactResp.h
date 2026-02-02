//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString, OpenIMKefuContact, OpenIMKefuContext;

@interface GetOpenIMKefuContactResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *antispamTips; // @dynamic antispamTips;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int confirmType; // @dynamic confirmType;
@property(retain, nonatomic) OpenIMKefuContact *contact; // @dynamic contact;
@property(retain, nonatomic) OpenIMKefuContext *context; // @dynamic context;

@end

