//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenSyncJumpInfo, NSMutableArray, NSString;

@interface MMListenSyncItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *coverInfos; // @dynamic coverInfos;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(retain, nonatomic) MMListenSyncJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(retain, nonatomic) NSString *reddotSessionBuffer; // @dynamic reddotSessionBuffer;
@property(retain, nonatomic) NSString *subTitle; // @dynamic subTitle;
@property(retain, nonatomic) NSString *syncId; // @dynamic syncId;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) int type; // @dynamic type;
@property(retain, nonatomic) NSMutableArray *userInfos; // @dynamic userInfos;

@end

