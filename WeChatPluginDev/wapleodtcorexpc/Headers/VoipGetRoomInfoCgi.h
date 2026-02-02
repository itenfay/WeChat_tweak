//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class VoipMonoMsg;
@protocol VoipGetRoomInfoCgiDelegate;

@interface VoipGetRoomInfoCgi : NSObject
{
    VoipMonoMsg *m_voipMonoMsg;
    id <VoipGetRoomInfoCgiDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <VoipGetRoomInfoCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) VoipMonoMsg *m_voipMonoMsg; // @synthesize m_voipMonoMsg;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)startRequest;
- (id)init;

@end

