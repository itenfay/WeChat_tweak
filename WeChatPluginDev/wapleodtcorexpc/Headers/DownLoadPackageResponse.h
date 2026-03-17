//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, SKBuiltinBuffer_t;

@class WXPBGeneratedMessage;

@interface DownLoadPackageResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) SKBuiltinBuffer_t *packageBuf; // @dynamic packageBuf;
@property(nonatomic) unsigned int totalSize; // @dynamic totalSize;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

