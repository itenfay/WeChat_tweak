//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSMutableArray;

@interface FinderLiveSyncPromoteInfoListResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int needReplace; // @dynamic needReplace;
@property(retain, nonatomic) NSMutableArray *promoteInfoList; // @dynamic promoteInfoList;
@property(retain, nonatomic) NSData *syncContext; // @dynamic syncContext;

@end

