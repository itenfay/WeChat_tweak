//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface VoIPBubbleMsg : NSObject
{
    _Bool _red_dot;
    unsigned int _room_type;
    unsigned int _inviteid;
    unsigned int _msg_type;
    unsigned int _duration;
    unsigned int _business;
    int _caller_memberid;
    int _callee_memberid;
    NSString *_msg;
    unsigned long long _roomid;
    unsigned long long _roomkey;
    unsigned long long _timestamp;
    NSString *_identity;
    unsigned long long _inviteid64;
}

- (void).cxx_destruct;
@property(nonatomic) int callee_memberid; // @synthesize callee_memberid=_callee_memberid;
@property(nonatomic) int caller_memberid; // @synthesize caller_memberid=_caller_memberid;
@property(nonatomic) unsigned int business; // @synthesize business=_business;
@property(nonatomic) unsigned long long inviteid64; // @synthesize inviteid64=_inviteid64;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *identity; // @synthesize identity=_identity;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned int msg_type; // @synthesize msg_type=_msg_type;
@property(nonatomic) unsigned int inviteid; // @synthesize inviteid=_inviteid;
@property(nonatomic) unsigned long long roomkey; // @synthesize roomkey=_roomkey;
@property(nonatomic) unsigned long long roomid; // @synthesize roomid=_roomid;
@property(nonatomic) _Bool red_dot; // @synthesize red_dot=_red_dot;
@property(nonatomic) unsigned int room_type; // @synthesize room_type=_room_type;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
- (id)description;
- (id)xmlByWrappingVoIPMsg;
- (id)xmlInRootNode:(id)arg1;
- (_Bool)isVideo;

@end

