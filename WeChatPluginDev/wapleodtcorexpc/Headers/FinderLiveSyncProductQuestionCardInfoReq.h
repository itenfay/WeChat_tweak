//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FinderLiveSyncProductQuestionCardInfoReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool ignoreStatus; // @dynamic ignoreStatus;
@property(nonatomic) unsigned long long isFirstReq; // @dynamic isFirstReq;
@property(retain, nonatomic) NSString *lastBuf; // @dynamic lastBuf;
@property(nonatomic) unsigned long long lastMinSeq; // @dynamic lastMinSeq;
@property(nonatomic) unsigned long long limitNum; // @dynamic limitNum;
@property(nonatomic) unsigned long long status; // @dynamic status;

@end

