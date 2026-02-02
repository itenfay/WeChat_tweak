//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSString, PalmReportInfo;

@class WXPBGeneratedMessage;

@interface CheckOnlineOpenPalmServiceReqBody : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *aesKey; // @dynamic aesKey;
@property(retain, nonatomic) NSString *encryptPalmFileKey; // @dynamic encryptPalmFileKey;
@property(retain, nonatomic) NSString *palmFileId; // @dynamic palmFileId;
@property(retain, nonatomic) PalmReportInfo *reportInfo; // @dynamic reportInfo;
@property(retain, nonatomic) NSString *sid; // @dynamic sid;

@end

