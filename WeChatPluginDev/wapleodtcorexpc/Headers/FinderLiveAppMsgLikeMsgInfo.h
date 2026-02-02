//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveBoxId;

@interface FinderLiveAppMsgLikeMsgInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveBoxId *boxId; // @dynamic boxId;
@property(nonatomic) _Bool isSelfLike; // @dynamic isSelfLike;
@property(nonatomic) _Bool isShowLikeNum; // @dynamic isShowLikeNum;
@property(nonatomic) unsigned long long msgSeq; // @dynamic msgSeq;
@property(nonatomic) unsigned int opType; // @dynamic opType;
@property(nonatomic) unsigned int totalLikeNum; // @dynamic totalLikeNum;

@end

