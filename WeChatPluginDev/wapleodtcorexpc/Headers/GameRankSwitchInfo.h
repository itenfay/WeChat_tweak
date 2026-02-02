//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface GameRankSwitchInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bulletPicUrl; // @dynamic bulletPicUrl;
@property(retain, nonatomic) NSString *bulletWording; // @dynamic bulletWording;
@property(nonatomic) unsigned int canShowBullet; // @dynamic canShowBullet;
@property(retain, nonatomic) NSString *currentGameAppid; // @dynamic currentGameAppid;
@property(retain, nonatomic) NSMutableArray *switchList; // @dynamic switchList;

@end

