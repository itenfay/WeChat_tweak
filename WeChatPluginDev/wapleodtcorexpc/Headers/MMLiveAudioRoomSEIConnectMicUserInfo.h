//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLiveAudioRoomSEIConnectMicUserInfo : NSObject
{
    unsigned int _us;
    NSString *_uId;
    unsigned long long _i;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long i; // @synthesize i=_i;
@property(nonatomic) unsigned int us; // @synthesize us=_us;
@property(retain, nonatomic) NSString *uId; // @synthesize uId=_uId;
- (_Bool)isMicMutedByAnchor;
- (_Bool)isInOtherRoom;
- (_Bool)isOtherAnchor;
- (_Bool)isTalking;
- (void)updateWithMicUserInfo:(id)arg1;

@end

