//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAJSEventHandler_join1v1VoIPChat
{
    NSString *busiAppId;
    int lastJoinSuccTicks;
    int maxMember;
    int currentPeakRoomMemberCount;
    long long startTicks;
}

- (void).cxx_destruct;
- (void)handleJSEvent:(id)arg1;
- (void)reset;
- (id)init;

@end

