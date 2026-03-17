//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSMutableArray, NSString;

@class WXPBGeneratedMessage;

@interface FavorComposeInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (id)GenFromDictionary:(id)arg1;

// Remaining properties
@property(nonatomic) unsigned long long composeSortFlag; // @dynamic composeSortFlag;
@property(retain, nonatomic) NSString *extendStr; // @dynamic extendStr;
@property(retain, nonatomic) NSString *favorComposeId; // @dynamic favorComposeId;
@property(retain, nonatomic) NSString *favorDesc; // @dynamic favorDesc;
@property(retain, nonatomic) NSMutableArray *favorInfoList; // @dynamic favorInfoList;
@property(nonatomic) unsigned long long showFavorAmount; // @dynamic showFavorAmount;
@property(nonatomic) unsigned long long showPayAmount; // @dynamic showPayAmount;
@property(retain, nonatomic) NSString *totalFavorAmount; // @dynamic totalFavorAmount;

@end

