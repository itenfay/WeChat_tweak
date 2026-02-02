//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString;

@interface GetMFriendRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(nonatomic) unsigned int opType; // @dynamic opType;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSMutableArray *updateEmailList; // @dynamic updateEmailList;
@property(nonatomic) int updateEmailListSize; // @dynamic updateEmailListSize;
@property(retain, nonatomic) NSMutableArray *updateMobileList; // @dynamic updateMobileList;
@property(nonatomic) int updateMobileListSize; // @dynamic updateMobileListSize;

@end

