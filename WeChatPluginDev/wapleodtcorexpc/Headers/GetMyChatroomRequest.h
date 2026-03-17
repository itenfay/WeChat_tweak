//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSMutableArray, NSString;

@class WXPBGeneratedMessage;

@interface GetMyChatroomRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSMutableArray *chatroomNameList; // @dynamic chatroomNameList;
@property(retain, nonatomic) NSString *firstChatroomName; // @dynamic firstChatroomName;
@property(nonatomic) unsigned int sceneType; // @dynamic sceneType;
@property(retain, nonatomic) NSString *version; // @dynamic version;

@end

