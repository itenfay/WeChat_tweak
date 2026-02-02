//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveKTVSEIRecvSession : NSObject
{
    NSString *_actorUserId;
    NSString *_songUniqueId;
    NSString *_actorSongUniqueId;
    NSString *_actUniqueId;
}

+ (id)createSessionWithActor:(id)arg1 song:(id)arg2 singByActor:(_Bool)arg3 actUId:(id)arg4;
- (void).cxx_destruct;
@property(retain) NSString *actUniqueId; // @synthesize actUniqueId=_actUniqueId;
@property(retain) NSString *actorSongUniqueId; // @synthesize actorSongUniqueId=_actorSongUniqueId;
@property(retain) NSString *songUniqueId; // @synthesize songUniqueId=_songUniqueId;
@property(retain) NSString *actorUserId; // @synthesize actorUserId=_actorUserId;
- (id)description;
- (_Bool)isEqual:(id)arg1;

@end

