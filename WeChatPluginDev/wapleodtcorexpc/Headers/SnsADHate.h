//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, SKBuiltinString_t;

@interface SnsADHate : WXPBGeneratedMessage
{
    int dislikeReasonIdListMemoizedSerializedSize;
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int dislikeReasonId; // @dynamic dislikeReasonId;
@property(nonatomic) unsigned int dislikeReasonIdCount; // @dynamic dislikeReasonIdCount;
@property(retain, nonatomic) NSMutableArray *dislikeReasonIdList; // @dynamic dislikeReasonIdList;
@property(retain, nonatomic) SKBuiltinString_t *snsAduxInfo; // @dynamic snsAduxInfo;
@property(retain, nonatomic) SKBuiltinString_t *snsStatExt; // @dynamic snsStatExt;
@property(nonatomic) unsigned int source; // @dynamic source;

@end

