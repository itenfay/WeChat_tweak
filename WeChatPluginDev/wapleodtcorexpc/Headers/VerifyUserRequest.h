//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString, SKBuiltinBuffer_t;

@interface VerifyUserRequest : WXPBGeneratedMessage
{
    int sceneListMemoizedSerializedSize;
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) SKBuiltinBuffer_t *clientCheckData; // @dynamic clientCheckData;
@property(retain, nonatomic) NSString *ctx; // @dynamic ctx;
@property(retain, nonatomic) SKBuiltinBuffer_t *extSpamInfo; // @dynamic extSpamInfo;
@property(nonatomic) unsigned int needConfirm; // @dynamic needConfirm;
@property(nonatomic) unsigned int opcode; // @dynamic opcode;
@property(retain, nonatomic) NSMutableArray *sceneList; // @dynamic sceneList;
@property(nonatomic) unsigned int sceneListCount; // @dynamic sceneListCount;
@property(retain, nonatomic) NSString *verifyContent; // @dynamic verifyContent;
@property(retain, nonatomic) NSMutableArray *verifyInfoList; // @dynamic verifyInfoList;
@property(nonatomic) unsigned int verifyInfoListCount; // @dynamic verifyInfoListCount;
@property(retain, nonatomic) NSMutableArray *verifyUserList; // @dynamic verifyUserList;
@property(nonatomic) unsigned int verifyUserListSize; // @dynamic verifyUserListSize;

@end

