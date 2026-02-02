//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, PalmReportInfo;

@interface UploadOnlineOpenResourceReqBody : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *aesKey; // @dynamic aesKey;
@property(retain, nonatomic) NSString *encryptPalmFileKey; // @dynamic encryptPalmFileKey;
@property(retain, nonatomic) NSString *palmFileId; // @dynamic palmFileId;
@property(retain, nonatomic) PalmReportInfo *reportInfo; // @dynamic reportInfo;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;

@end

