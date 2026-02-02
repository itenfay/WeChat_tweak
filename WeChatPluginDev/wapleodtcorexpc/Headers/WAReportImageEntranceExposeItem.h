//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportImageEntranceExposeItem
{
    unsigned int _exposeUserUin;
    int _chatType;
    int _chatRoomUserCount;
    unsigned int _exposeTimeStamp;
    int _exposeScene;
    NSString *_userName;
    NSString *_chatName;
    NSString *_chatSessionId;
    NSString *_imageSrc;
    NSString *_exposeAppId;
    NSString *_exposePath;
    NSString *_imageKey;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *imageKey; // @synthesize imageKey=_imageKey;
@property(copy, nonatomic) NSString *exposePath; // @synthesize exposePath=_exposePath;
@property(copy, nonatomic) NSString *exposeAppId; // @synthesize exposeAppId=_exposeAppId;
@property(copy, nonatomic) NSString *imageSrc; // @synthesize imageSrc=_imageSrc;
@property(nonatomic) int exposeScene; // @synthesize exposeScene=_exposeScene;
@property(nonatomic) unsigned int exposeTimeStamp; // @synthesize exposeTimeStamp=_exposeTimeStamp;
@property(copy, nonatomic) NSString *chatSessionId; // @synthesize chatSessionId=_chatSessionId;
@property(nonatomic) int chatRoomUserCount; // @synthesize chatRoomUserCount=_chatRoomUserCount;
@property(copy, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(nonatomic) int chatType; // @synthesize chatType=_chatType;
@property(nonatomic) unsigned int exposeUserUin; // @synthesize exposeUserUin=_exposeUserUin;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (id)reportString;
- (int)reportID;

@end

