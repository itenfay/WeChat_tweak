//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ClientContextInfo, FinderAdBaseRequest, FinderPageBaseInfo, NSData, NSMutableArray;

@interface FinderBaseRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderAdBaseRequest *adBasereq; // @dynamic adBasereq;
@property(nonatomic) unsigned int clientFlag; // @dynamic clientFlag;
@property(retain, nonatomic) ClientContextInfo *ctxInfo; // @dynamic ctxInfo;
@property(nonatomic) unsigned long long debugFlag; // @dynamic debugFlag;
@property(retain, nonatomic) NSData *exptBuffer; // @dynamic exptBuffer;
@property(nonatomic) unsigned int exptFlag; // @dynamic exptFlag;
@property(retain, nonatomic) NSData *extSpamInfo; // @dynamic extSpamInfo;
@property(retain, nonatomic) FinderPageBaseInfo *lastPageInfo; // @dynamic lastPageInfo;
@property(nonatomic) unsigned int liveIdentity; // @dynamic liveIdentity;
@property(retain, nonatomic) NSMutableArray *objectBaseInfos; // @dynamic objectBaseInfos;
@property(nonatomic) unsigned long long requestId; // @dynamic requestId;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSMutableArray *supportedCodingFormatList; // @dynamic supportedCodingFormatList;
@property(nonatomic) unsigned int userver; // @dynamic userver;

@end

