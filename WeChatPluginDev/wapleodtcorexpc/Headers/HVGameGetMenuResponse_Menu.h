//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface HVGameGetMenuResponse_Menu : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int actionType; // @dynamic actionType;
@property(nonatomic) unsigned int itemId; // @dynamic itemId;
@property(nonatomic) unsigned int placeId; // @dynamic placeId;
@property(retain, nonatomic) NSString *targetUrl; // @dynamic targetUrl;
@property(retain, nonatomic) NSString *thumbUrl; // @dynamic thumbUrl;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end

