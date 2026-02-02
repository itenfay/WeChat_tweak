//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface FinderLiveSyncPromoteInfoStatusWithSeqReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long currentPromotingId; // @dynamic currentPromotingId;
@property(retain, nonatomic) NSString *currentPromotingSubId; // @dynamic currentPromotingSubId;
@property(retain, nonatomic) NSData *extBuffer; // @dynamic extBuffer;
@property(nonatomic) _Bool hiddenState; // @dynamic hiddenState;
@property(retain, nonatomic) NSData *promoteInfoBuffer; // @dynamic promoteInfoBuffer;
@property(retain, nonatomic) NSData *syncContext; // @dynamic syncContext;

@end

