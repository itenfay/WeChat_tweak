//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderPersonalMsgContact;

@interface FinderEnterPersonalMsgResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) FinderPersonalMsgContact *personalMsgContact; // @dynamic personalMsgContact;
@property(nonatomic) unsigned int refreshInterval; // @dynamic refreshInterval;

@end

