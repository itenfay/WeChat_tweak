//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMTimer, NSMutableArray;

@interface MMOpenVoiceMemberMgr : NSObject
{
    NSMutableArray *_lastSpeakers;
    NSMutableArray *_currentInRoomMembers;
    NSMutableArray *_currVideoMembers;
    NSMutableArray *_memberChangeListeners;
    MMTimer *_timer;
}

- (void).cxx_destruct;
- (_Bool)isSpeakersEqual:(id)arg1;
- (void)onTimerExpired;
- (void)updateAvMembers:(id)arg1;
- (void)updateMembers:(id)arg1;
- (void)stopListenToSpeakerChange;
- (void)startListenToSpeakerChange;
- (id)getOpenIdByMemberId:(unsigned int)arg1;
- (id)getMemberByOpenId:(id)arg1;
- (id)getCurrentVideoMembers;
- (id)getCurrentRoomMembers;
- (void)addSpeakerChangeCallback:(CDUnknownBlockType)arg1;
- (void)resetMembers;
- (id)init;

@end

