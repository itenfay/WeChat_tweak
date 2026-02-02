//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData;

@interface FinderLiveSyncPromoteInfoStatusReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long currentPromotingId; // @dynamic currentPromotingId;
@property(retain, nonatomic) NSData *extBuffer; // @dynamic extBuffer;
@property(retain, nonatomic) NSData *promoteInfoBuffer; // @dynamic promoteInfoBuffer;

@end

