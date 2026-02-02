//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderContact;

@interface WCFinderLiveHomePageFeedEntertainmentAudioRoomTeamupInfo : NSObject
{
    WCFinderContact *_contact;
    NSString *_sdkUserId;
    unsigned long long _statusFlag;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long statusFlag; // @synthesize statusFlag=_statusFlag;
@property(retain, nonatomic) NSString *sdkUserId; // @synthesize sdkUserId=_sdkUserId;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
- (_Bool)isEqual:(id)arg1;

@end

