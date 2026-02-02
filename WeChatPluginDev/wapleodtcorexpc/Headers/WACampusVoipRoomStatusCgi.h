//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WACampusVoipRoomStatusCgi
{
    NSString *_groupId;
    long long _roomStatus;
}

+ (void)voipRoom:(id)arg1 syncStatus:(long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) long long roomStatus; // @synthesize roomStatus=_roomStatus;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)start;
- (id)init;

@end

