//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface VoIPIlinkWordingInfo : NSObject
{
    unsigned int _roomType;
    unsigned int _selfRole;
    unsigned int _wordingId;
    unsigned int _talkTime;
    int _callerMemberID;
    int _calleeMemberID;
    unsigned long long _roomid;
    unsigned long long _inviteId;
    NSString *_remoteUsername;
}

- (void).cxx_destruct;
@property(nonatomic) int calleeMemberID; // @synthesize calleeMemberID=_calleeMemberID;
@property(nonatomic) int callerMemberID; // @synthesize callerMemberID=_callerMemberID;
@property(retain, nonatomic) NSString *remoteUsername; // @synthesize remoteUsername=_remoteUsername;
@property(nonatomic) unsigned int talkTime; // @synthesize talkTime=_talkTime;
@property(nonatomic) unsigned int wordingId; // @synthesize wordingId=_wordingId;
@property(nonatomic) unsigned int selfRole; // @synthesize selfRole=_selfRole;
@property(nonatomic) unsigned int roomType; // @synthesize roomType=_roomType;
@property(nonatomic) unsigned long long inviteId; // @synthesize inviteId=_inviteId;
@property(nonatomic) unsigned long long roomid; // @synthesize roomid=_roomid;
- (id)description;

@end

