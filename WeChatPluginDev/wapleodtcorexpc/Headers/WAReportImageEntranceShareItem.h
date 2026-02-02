//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportImageEntranceShareItem
{
    int _isSuccess;
    int _chatType;
    int _chatRoomUserCount;
    unsigned int _shareTimeStamp;
    NSString *_userName;
    NSString *_chatName;
    NSString *_chatSessionId;
    NSString *_currentAppId;
    NSString *_currentPath;
    NSString *_imageSrc;
    NSString *_shareAppId;
    NSString *_sharePath;
    NSString *_imageKey;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *imageKey; // @synthesize imageKey=_imageKey;
@property(copy, nonatomic) NSString *sharePath; // @synthesize sharePath=_sharePath;
@property(copy, nonatomic) NSString *shareAppId; // @synthesize shareAppId=_shareAppId;
@property(copy, nonatomic) NSString *imageSrc; // @synthesize imageSrc=_imageSrc;
@property(copy, nonatomic) NSString *currentPath; // @synthesize currentPath=_currentPath;
@property(copy, nonatomic) NSString *currentAppId; // @synthesize currentAppId=_currentAppId;
@property(nonatomic) unsigned int shareTimeStamp; // @synthesize shareTimeStamp=_shareTimeStamp;
@property(copy, nonatomic) NSString *chatSessionId; // @synthesize chatSessionId=_chatSessionId;
@property(nonatomic) int chatRoomUserCount; // @synthesize chatRoomUserCount=_chatRoomUserCount;
@property(copy, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(nonatomic) int chatType; // @synthesize chatType=_chatType;
@property(nonatomic) int isSuccess; // @synthesize isSuccess=_isSuccess;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (id)reportString;
- (int)reportID;

@end

