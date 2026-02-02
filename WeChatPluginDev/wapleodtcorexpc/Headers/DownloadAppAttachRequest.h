//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface DownloadAppAttachRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int cdntype; // @dynamic cdntype;
@property(nonatomic) unsigned int dataLen; // @dynamic dataLen;
@property(retain, nonatomic) NSString *mediaId; // @dynamic mediaId;
@property(nonatomic) unsigned long long newMsgId; // @dynamic newMsgId;
@property(retain, nonatomic) NSString *outFmt; // @dynamic outFmt;
@property(nonatomic) int rotation; // @dynamic rotation;
@property(nonatomic) unsigned int sdkVersion; // @dynamic sdkVersion;
@property(nonatomic) unsigned int startPos; // @dynamic startPos;
@property(nonatomic) unsigned int totalLen; // @dynamic totalLen;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;

@end

