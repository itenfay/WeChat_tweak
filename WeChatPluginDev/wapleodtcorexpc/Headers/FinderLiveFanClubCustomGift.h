//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface FinderLiveFanClubCustomGift : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (_Bool)textCustomizable;
- (_Bool)colorCustomizable;

// Remaining properties
@property(retain, nonatomic) NSString *customGiftId; // @dynamic customGiftId;
@property(nonatomic) unsigned int decalMaxLen; // @dynamic decalMaxLen;
@property(nonatomic) unsigned int flag; // @dynamic flag;
@property(retain, nonatomic) NSMutableArray *gifts; // @dynamic gifts;
@property(nonatomic) unsigned int modQuota; // @dynamic modQuota;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) unsigned int remainModTimes; // @dynamic remainModTimes;
@property(retain, nonatomic) NSString *thumbUrl; // @dynamic thumbUrl;

@end

