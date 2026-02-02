//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSMutableArray, NSString;

@interface ColdStartFetchDataRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int fetchMode; // @dynamic fetchMode;
@property(nonatomic) unsigned int fetchType; // @dynamic fetchType;
@property(retain, nonatomic) NSData *reqData; // @dynamic reqData;
@property(retain, nonatomic) NSMutableArray *reqItemList; // @dynamic reqItemList;
@property(retain, nonatomic) NSString *username; // @dynamic username;
@property(nonatomic) unsigned int versionType; // @dynamic versionType;

@end

