//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString;

@interface ListMFriendResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int emailCount; // @dynamic emailCount;
@property(retain, nonatomic) NSMutableArray *emailInfo; // @dynamic emailInfo;
@property(nonatomic) unsigned int mobileCount; // @dynamic mobileCount;
@property(retain, nonatomic) NSMutableArray *mobileInfo; // @dynamic mobileInfo;
@property(retain, nonatomic) NSString *ticket; // @dynamic ticket;

@end

