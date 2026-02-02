//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, EntranceRedDot, NSMutableArray, NSString;

@interface GetGameIndex4Request : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *country; // @dynamic country;
@property(retain, nonatomic) EntranceRedDot *entranceRedDot; // @dynamic entranceRedDot;
@property(nonatomic) _Bool fromEntrance; // @dynamic fromEntrance;
@property(retain, nonatomic) NSMutableArray *installedAppList; // @dynamic installedAppList;
@property(retain, nonatomic) NSString *lang; // @dynamic lang;
@property(nonatomic) unsigned int releaseChannel; // @dynamic releaseChannel;
@property(nonatomic) unsigned int unReadMsgCount; // @dynamic unReadMsgCount;

@end

