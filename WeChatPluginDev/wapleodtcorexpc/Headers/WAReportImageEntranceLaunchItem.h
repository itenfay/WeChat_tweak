//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportImageEntranceLaunchItem
{
    unsigned int _exposeUserUin;
    int _chatType;
    int _chatRoomUserCount;
    unsigned int _launchTimeStamp;
    int _launchScene;
    NSString *_userName;
    NSString *_chatName;
    NSString *_chatSessionId;
    NSString *_imageSrc;
    NSString *_launchAppId;
    NSString *_launchPath;
    NSString *_imageKey;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *imageKey; // @synthesize imageKey=_imageKey;
@property(copy, nonatomic) NSString *launchPath; // @synthesize launchPath=_launchPath;
@property(copy, nonatomic) NSString *launchAppId; // @synthesize launchAppId=_launchAppId;
@property(copy, nonatomic) NSString *imageSrc; // @synthesize imageSrc=_imageSrc;
@property(nonatomic) int launchScene; // @synthesize launchScene=_launchScene;
@property(nonatomic) unsigned int launchTimeStamp; // @synthesize launchTimeStamp=_launchTimeStamp;
@property(copy, nonatomic) NSString *chatSessionId; // @synthesize chatSessionId=_chatSessionId;
@property(nonatomic) int chatRoomUserCount; // @synthesize chatRoomUserCount=_chatRoomUserCount;
@property(copy, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(nonatomic) int chatType; // @synthesize chatType=_chatType;
@property(nonatomic) unsigned int exposeUserUin; // @synthesize exposeUserUin=_exposeUserUin;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (id)reportString;
- (int)reportID;

@end

