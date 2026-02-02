//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class CmdList, NSString, SKBuiltinBuffer_t;

@interface NewSyncRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *deviceType; // @dynamic deviceType;
@property(retain, nonatomic) SKBuiltinBuffer_t *keyBuf; // @dynamic keyBuf;
@property(retain, nonatomic) CmdList *oplog; // @dynamic oplog;
@property(nonatomic) unsigned long long prevDownloadFlag; // @dynamic prevDownloadFlag;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned int selector; // @dynamic selector;
@property(nonatomic) unsigned int syncMsgDigest; // @dynamic syncMsgDigest;
@property(retain, nonatomic) SKBuiltinBuffer_t *syncUniqKeyBuf; // @dynamic syncUniqKeyBuf;

@end

