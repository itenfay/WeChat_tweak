//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderJumpInfo, NSString;

@interface Announcement : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int activeTime; // @dynamic activeTime;
@property(retain, nonatomic) NSString *backgroundColor; // @dynamic backgroundColor;
@property(nonatomic) _Bool canClick; // @dynamic canClick;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(retain, nonatomic) FinderJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

