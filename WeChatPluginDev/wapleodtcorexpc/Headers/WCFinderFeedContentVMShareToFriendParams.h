//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact;
@protocol ForwardMessageLogicDelegate;

@interface WCFinderFeedContentVMShareToFriendParams : NSObject
{
    CContact *_fastForwardContact;
    id <ForwardMessageLogicDelegate> _delegate;
    long long _liveShareSceneIfLive;
}

- (void).cxx_destruct;
@property(nonatomic) long long liveShareSceneIfLive; // @synthesize liveShareSceneIfLive=_liveShareSceneIfLive;
@property(retain, nonatomic) id <ForwardMessageLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CContact *fastForwardContact; // @synthesize fastForwardContact=_fastForwardContact;

@end

