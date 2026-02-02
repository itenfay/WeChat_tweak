//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString;

@interface GetCardListFromAppRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *bundleId; // @dynamic bundleId;
@property(retain, nonatomic) NSMutableArray *cardList; // @dynamic cardList;
@property(retain, nonatomic) NSString *consumedboxCardId; // @dynamic consumedboxCardId;
@property(nonatomic) unsigned int fromScene; // @dynamic fromScene;
@property(retain, nonatomic) NSString *jsCheckinfoSessionUsername; // @dynamic jsCheckinfoSessionUsername;
@property(retain, nonatomic) NSString *jsCheckinfoUrl; // @dynamic jsCheckinfoUrl;
@property(retain, nonatomic) NSString *packageName; // @dynamic packageName;
@property(retain, nonatomic) NSString *sign; // @dynamic sign;
@property(nonatomic) unsigned int statisticScene; // @dynamic statisticScene;

@end

