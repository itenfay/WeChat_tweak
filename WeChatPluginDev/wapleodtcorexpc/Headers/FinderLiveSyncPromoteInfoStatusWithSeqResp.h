//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLivePromoteMsgInfo, NSData, NSString;

@interface FinderLiveSyncPromoteInfoStatusWithSeqResp : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (id)promoteID;

// Remaining properties
@property(nonatomic) unsigned int needReplaceBuffer; // @dynamic needReplaceBuffer;
@property(retain, nonatomic) FinderLivePromoteMsgInfo *newPromoteInfo; // @dynamic newPromoteInfo;
@property(nonatomic) unsigned int noOp; // @dynamic noOp;
@property(nonatomic) unsigned int promotingFlag; // @dynamic promotingFlag;
@property(nonatomic) unsigned long long reqCurrentPromotingId; // @dynamic reqCurrentPromotingId;
@property(retain, nonatomic) NSString *reqCurrentPromotingSubId; // @dynamic reqCurrentPromotingSubId;
@property(retain, nonatomic) NSData *syncContext; // @dynamic syncContext;

@end

