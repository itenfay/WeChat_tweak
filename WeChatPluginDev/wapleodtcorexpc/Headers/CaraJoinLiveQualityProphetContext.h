//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface CaraJoinLiveQualityProphetContext : NSObject
{
    int _videoQuality;
    int _networkQuality;
    int _scene;
    NSString *_liveID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int scene; // @synthesize scene=_scene;
@property(readonly, nonatomic) NSString *liveID; // @synthesize liveID=_liveID;
@property(readonly, nonatomic) int networkQuality; // @synthesize networkQuality=_networkQuality;
@property(readonly, nonatomic) int videoQuality; // @synthesize videoQuality=_videoQuality;
- (id)zidl;
- (id)initWithLiveID:(id)arg1 videoQuality:(int)arg2 networkQuality:(int)arg3 scene:(int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

