//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderExtendedReading, FinderJumpInfo, NSString;

@interface NewLifeSelectLinkReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderExtendedReading *extendedReading; // @dynamic extendedReading;
@property(nonatomic) _Bool hasRedPacket; // @dynamic hasRedPacket;
@property(nonatomic) _Bool hasStickerList; // @dynamic hasStickerList;
@property(retain, nonatomic) FinderJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(nonatomic) unsigned int jumpInfoBusinessType; // @dynamic jumpInfoBusinessType;
@property(retain, nonatomic) NSString *postSessionId; // @dynamic postSessionId;

@end

