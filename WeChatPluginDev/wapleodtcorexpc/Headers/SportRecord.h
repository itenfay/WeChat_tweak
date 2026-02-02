//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface SportRecord : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (id)displaySportNum;
- (id)description;
- (unsigned int)sportType;
- (id)olympic2024MinVersion;
- (id)olympic2024Query;
- (id)olympic2024Page;
- (id)olympic2024Appid;
- (id)olympic2024DetailIconUrl;
- (id)olympic2024DetailTitle;
- (id)olympic2024RankIconUrl;
- (id)olympic2024RankTitle;
- (id)olympic2024Info;

// Remaining properties
@property(retain, nonatomic) NSString *appIconUrl; // @dynamic appIconUrl;
@property(retain, nonatomic) NSString *appName; // @dynamic appName;
@property(retain, nonatomic) NSString *appShortName; // @dynamic appShortName;
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(nonatomic) unsigned int recordSoureType; // @dynamic recordSoureType;
@property(retain, nonatomic) NSString *sportName; // @dynamic sportName;
@property(nonatomic) unsigned int sportNum; // @dynamic sportNum;
@property(retain, nonatomic) NSString *sportUnit; // @dynamic sportUnit;
@property(retain, nonatomic) NSString *sportUrl; // @dynamic sportUrl;
@property(retain, nonatomic) NSString *stringSportNum; // @dynamic stringSportNum;

@end

