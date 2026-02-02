//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, SKBuiltinString_t, SnsActionGroup, SnsExtStatData;

@interface SnsCommentRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) SnsActionGroup *action; // @dynamic action;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *clientId; // @dynamic clientId;
@property(retain, nonatomic) SnsExtStatData *extStatData; // @dynamic extStatData;
@property(retain, nonatomic) NSString *reportData; // @dynamic reportData;
@property(retain, nonatomic) SKBuiltinString_t *snsStatExt; // @dynamic snsStatExt;

@end

