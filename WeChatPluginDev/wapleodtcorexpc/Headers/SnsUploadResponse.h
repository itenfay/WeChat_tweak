//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString, SnsBufferUrl;

@interface SnsUploadResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) SnsBufferUrl *bufferUrl; // @dynamic bufferUrl;
@property(retain, nonatomic) NSString *clientId; // @dynamic clientId;
@property(nonatomic) unsigned long long id; // @dynamic id;
@property(nonatomic) unsigned int startPos; // @dynamic startPos;
@property(nonatomic) unsigned int thumbUrlCount; // @dynamic thumbUrlCount;
@property(retain, nonatomic) NSMutableArray *thumbUrls; // @dynamic thumbUrls;
@property(nonatomic) unsigned int totalLen; // @dynamic totalLen;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

