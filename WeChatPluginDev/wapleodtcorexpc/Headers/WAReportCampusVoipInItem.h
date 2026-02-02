//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportCampusVoipInItem
{
    NSString *_roomId;
    unsigned long long _voipInScene;
    long long _msgId;
    long long _createTime;
    long long _receiveTime;
}

+ (void)reportWithRoomId:(id)arg1 voipInScene:(unsigned long long)arg2 appId:(id)arg3 msgId:(long long)arg4 createTime:(long long)arg5 receiveTime:(long long)arg6;
+ (void)reportWithRoomId:(id)arg1 voipInScene:(unsigned long long)arg2 appId:(id)arg3 msgId:(long long)arg4 createTime:(long long)arg5;
- (void).cxx_destruct;
@property(nonatomic) long long receiveTime; // @synthesize receiveTime=_receiveTime;
@property(nonatomic) long long createTime; // @synthesize createTime=_createTime;
@property(nonatomic) long long msgId; // @synthesize msgId=_msgId;
@property(nonatomic) unsigned long long voipInScene; // @synthesize voipInScene=_voipInScene;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
- (id)reportString;
- (int)reportID;

@end

