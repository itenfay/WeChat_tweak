//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BizRecArticleCard, NSString;

@interface TLRecArticleWrapper : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *aggregationTitle; // @dynamic aggregationTitle;
@property(retain, nonatomic) NSString *aggregationUrl; // @dynamic aggregationUrl;
@property(retain, nonatomic) BizRecArticleCard *articleCard; // @dynamic articleCard;
@property(retain, nonatomic) NSString *cardId; // @dynamic cardId;
@property(retain, nonatomic) NSString *event; // @dynamic event;
@property(retain, nonatomic) NSString *exptType; // @dynamic exptType;
@property(retain, nonatomic) NSString *recSummary; // @dynamic recSummary;

@end

