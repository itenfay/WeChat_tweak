//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface PoiReviewContent : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(nonatomic) int goodCount; // @dynamic goodCount;
@property(nonatomic) int isHighQuality; // @dynamic isHighQuality;
@property(retain, nonatomic) NSMutableArray *photos; // @dynamic photos;
@property(retain, nonatomic) NSString *text; // @dynamic text;
@property(retain, nonatomic) NSString *user; // @dynamic user;
@property(retain, nonatomic) NSString *userFace; // @dynamic userFace;

@end

