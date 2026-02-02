//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMConfSDKMember;

@interface MMConfSDKTalkingInfo : NSObject
{
    int _voiceActivity;
    MMConfSDKMember *_member;
}

- (void).cxx_destruct;
@property(nonatomic) int voiceActivity; // @synthesize voiceActivity=_voiceActivity;
@property(retain, nonatomic) MMConfSDKMember *member; // @synthesize member=_member;
- (id)description;
- (id)contact;
- (id)initWithMember:(id)arg1 voiceActivity:(int)arg2;

@end

