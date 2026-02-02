//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray;

@interface WXGChatLogProtoHandler : NSObject
{
    NSData *m_cryptKey;
    _Bool m_useCRC;
    NSMutableArray *m_arrRecvSeq;
}

- (void).cxx_destruct;
- (id)getHeartBeatResPkgWithAck:(unsigned long long)arg1;
- (id)getHeartBeatRequestPkgWithAck:(unsigned long long)arg1;
- (id)getCancelRequestWithID:(id)arg1;
- (id)getFilterResponsePkg:(id)arg1;
- (id)getFilterRequestPkg:(id)arg1;
- (id)getPacketBackupDataTagResponsePkg:(id)arg1;
- (id)getPacketBackupDataTagPkg:(id)arg1;
- (id)getDataPushResponsePkg:(id)arg1;
- (id)getDataPushRequestPkg:(id)arg1;
- (id)getFinishRequestPkg:(id)arg1 analyseInfo:(id)arg2;
- (id)getRequestSessionResponsePkgWithSessionNameArray:(id)arg1 withTimeArray:(id)arg2;
- (id)getRequestSessionPkgWithSessionNameArray:(id)arg1 withTimeArray:(id)arg2;
- (id)getStartResponsePkgWithBakID:(id)arg1 withStatus:(int)arg2;
- (id)getStartResponsePkgWithBakID:(id)arg1 withTotalCount:(unsigned long long)arg2 withTotalSize:(unsigned long long)arg3 withStatus:(int)arg4 withNetworkState:(unsigned int)arg5 withTransferType:(int)arg6;
- (id)getStartRequestPkgWithBakID:(id)arg1 sessionCount:(unsigned long long)arg2 msgCount:(unsigned long long)arg3 dataSize:(unsigned long long)arg4 transferType:(int)arg5 sessionID:(id)arg6;
- (id)getAuthResponsePkgWithOk:(id)arg1 withbackupID:(id)arg2 withStatus:(int)arg3 withVersion:(long long)arg4 withType:(long long)arg5 withSupportKv:(long long)arg6;
- (id)getSecondAuthRequestPkg:(id)arg1 backupID:(id)arg2 version:(long long)arg3 type:(long long)arg4 supportExt:(long long)arg5 needToken:(long long)arg6;
- (id)getAuthRequestPkg:(id)arg1 backupID:(id)arg2 version:(long long)arg3 type:(long long)arg4 supportExt:(long long)arg5 needToken:(long long)arg6;
- (id)getCommandResponsePkgWithID:(int)arg1;
- (id)getCommandRequestPkgWithID:(int)arg1 withData:(id)arg2;
- (_Bool)verifyChecksum:(id)arg1 andChecksum:(int)arg2;
- (id)getDestBodyData:(id)arg1 dataType:(int)arg2 isPack:(_Bool)arg3;
- (unsigned int)generateReceviveSequence;
- (unsigned int)generateSendSequence;
- (id)encryptData:(id)arg1;
- (id)decryptData:(id)arg1;
- (id)unpack:(id)arg1 type:(int *)arg2;
- (id)pack:(id)arg1 type:(int)arg2;
- (id)p_getChatLogDeviceID;
- (id)initWithKey:(id)arg1 AndShouldCRC:(_Bool)arg2;
- (id)initWithKey:(id)arg1;

@end

