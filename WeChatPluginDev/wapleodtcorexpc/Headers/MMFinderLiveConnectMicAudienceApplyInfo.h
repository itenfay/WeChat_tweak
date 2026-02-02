//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData;

@interface MMFinderLiveConnectMicAudienceApplyInfo : NSObject
{
    _Bool _isInvitedByAnchor;
    unsigned long long _micIndex;
    NSData *_inviteMicBuffer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *inviteMicBuffer; // @synthesize inviteMicBuffer=_inviteMicBuffer;
@property(nonatomic) _Bool isInvitedByAnchor; // @synthesize isInvitedByAnchor=_isInvitedByAnchor;
@property(nonatomic) unsigned long long micIndex; // @synthesize micIndex=_micIndex;

@end

