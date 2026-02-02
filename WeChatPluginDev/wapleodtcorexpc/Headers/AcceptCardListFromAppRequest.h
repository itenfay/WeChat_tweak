//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString;

@interface AcceptCardListFromAppRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSMutableArray *cardList; // @dynamic cardList;
@property(nonatomic) unsigned int fromScene; // @dynamic fromScene;
@property(retain, nonatomic) NSString *jsCheckinfoSessionUsername; // @dynamic jsCheckinfoSessionUsername;
@property(retain, nonatomic) NSString *jsCheckinfoUrl; // @dynamic jsCheckinfoUrl;
@property(nonatomic) unsigned int statisticScene; // @dynamic statisticScene;

@end

