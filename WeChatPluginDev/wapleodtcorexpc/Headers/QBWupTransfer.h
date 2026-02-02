//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface QBWupTransfer : NSObject
{
    NSObject *_requestLock;
    _Bool _haveRetryRequest;
    _Bool _needEncrpyt;
    NSMutableArray *_requests;
}

- (void).cxx_destruct;
- (id)uniPacketFromHttpResponseData:(id)arg1 withRequestHeaders:(id)arg2 withAESKey:(id)arg3;
- (void)addPostDataWithZipAndEncryption:(id)arg1 withData:(id)arg2 forServant:(id)arg3 withAESKey:(id)arg4;
- (id)decodeResponseData:(id)arg1;
- (id)encodeRequestData:(id)arg1 encryptKey:(id)arg2;
- (id)sendUniPacket:(id)arg1 completeHandle:(CDUnknownBlockType)arg2;
- (id)sendUniPackets:(id)arg1 completeHandle:(CDUnknownBlockType)arg2;
- (id)init;

@end

