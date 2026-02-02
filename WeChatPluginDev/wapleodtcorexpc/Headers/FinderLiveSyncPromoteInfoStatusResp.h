//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData;

@interface FinderLiveSyncPromoteInfoStatusResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long id; // @dynamic id;
@property(nonatomic) unsigned int needReplaceBuffer; // @dynamic needReplaceBuffer;
@property(nonatomic) unsigned int noOp; // @dynamic noOp;
@property(retain, nonatomic) NSData *promoteInfoBuffer; // @dynamic promoteInfoBuffer;
@property(nonatomic) unsigned int promoteInfoType; // @dynamic promoteInfoType;
@property(nonatomic) unsigned int promotingFlag; // @dynamic promotingFlag;

@end

