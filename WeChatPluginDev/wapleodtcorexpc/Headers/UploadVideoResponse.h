//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface UploadVideoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int actionFlag; // @dynamic actionFlag;
@property(retain, nonatomic) NSString *aeskey; // @dynamic aeskey;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *clientMsgId; // @dynamic clientMsgId;
@property(nonatomic) unsigned int msgId; // @dynamic msgId;
@property(retain, nonatomic) NSString *msgSource; // @dynamic msgSource;
@property(nonatomic) unsigned long long newMsgId; // @dynamic newMsgId;
@property(retain, nonatomic) NSString *rawAeskey; // @dynamic rawAeskey;
@property(nonatomic) _Bool rawVideoNeedReupload; // @dynamic rawVideoNeedReupload;
@property(nonatomic) unsigned int thumbStartPos; // @dynamic thumbStartPos;
@property(nonatomic) _Bool videoNeedReupload; // @dynamic videoNeedReupload;
@property(nonatomic) unsigned int videoStartPos; // @dynamic videoStartPos;

@end

