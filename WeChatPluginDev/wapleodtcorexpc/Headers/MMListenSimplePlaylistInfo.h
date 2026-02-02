//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface MMListenSimplePlaylistInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *categoryId; // @dynamic categoryId;
@property(retain, nonatomic) NSString *cover; // @dynamic cover;
@property(retain, nonatomic) NSData *ctxBuf; // @dynamic ctxBuf;
@property(nonatomic) unsigned int itemNum; // @dynamic itemNum;
@property(nonatomic) int listType; // @dynamic listType;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) int playType; // @dynamic playType;
@property(retain, nonatomic) NSString *subTitle; // @dynamic subTitle;
@property(nonatomic) int type; // @dynamic type;

@end

