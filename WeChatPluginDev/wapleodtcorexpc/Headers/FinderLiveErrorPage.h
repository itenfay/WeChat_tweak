//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderJumpInfo, NSString;

@interface FinderLiveErrorPage : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(retain, nonatomic) NSString *jumpUrl; // @dynamic jumpUrl;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(retain, nonatomic) NSString *urlWording; // @dynamic urlWording;
@property(retain, nonatomic) NSString *wording; // @dynamic wording;

@end

