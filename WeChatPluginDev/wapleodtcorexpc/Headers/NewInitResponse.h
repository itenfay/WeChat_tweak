//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, SKBuiltinBuffer_t;

@interface NewInitResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int cmdCount; // @dynamic cmdCount;
@property(retain, nonatomic) NSMutableArray *cmdList; // @dynamic cmdList;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(retain, nonatomic) SKBuiltinBuffer_t *currentSynckey; // @dynamic currentSynckey;
@property(retain, nonatomic) SKBuiltinBuffer_t *maxSynckey; // @dynamic maxSynckey;
@property(nonatomic) unsigned int ratio; // @dynamic ratio;
@property(nonatomic) unsigned int selectBitmap; // @dynamic selectBitmap;
@property(retain, nonatomic) SKBuiltinBuffer_t *syncUniqKeyBuf; // @dynamic syncUniqKeyBuf;

@end

