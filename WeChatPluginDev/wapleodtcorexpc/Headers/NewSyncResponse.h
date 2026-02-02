//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class CmdList, SKBuiltinBuffer_t;

@interface NewSyncResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) CmdList *cmdList; // @dynamic cmdList;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(retain, nonatomic) SKBuiltinBuffer_t *keyBuf; // @dynamic keyBuf;
@property(nonatomic) unsigned int onlineVersion; // @dynamic onlineVersion;
@property(nonatomic) int ret; // @dynamic ret;
@property(nonatomic) unsigned int status; // @dynamic status;
@property(nonatomic) unsigned int svrTime; // @dynamic svrTime;
@property(retain, nonatomic) SKBuiltinBuffer_t *syncUniqKeyBuf; // @dynamic syncUniqKeyBuf;

@end

