//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface MMListenUserPageSection : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *categories; // @dynamic categories;
@property(retain, nonatomic) NSString *categoryId; // @dynamic categoryId;
@property(nonatomic) _Bool hasMore; // @dynamic hasMore;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) int type; // @dynamic type;

@end

