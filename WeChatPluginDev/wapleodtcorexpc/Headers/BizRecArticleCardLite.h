//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface BizRecArticleCardLite : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *cardInfo; // @dynamic cardInfo;
@property(nonatomic) unsigned long long clientId; // @dynamic clientId;
@property(retain, nonatomic) NSString *event; // @dynamic event;
@property(retain, nonatomic) NSString *extraData; // @dynamic extraData;
@property(nonatomic) unsigned int style; // @dynamic style;

@end

