//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderFeedMembershipInfo : NSObject
{
    _Bool _isMemberShipFeed;
    _Bool _canPreview;
    _Bool _canPlay;
    int _scene;
    unsigned long long _visitorStatus;
}

@property(nonatomic) unsigned long long visitorStatus; // @synthesize visitorStatus=_visitorStatus;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool canPlay; // @synthesize canPlay=_canPlay;
@property(nonatomic) _Bool canPreview; // @synthesize canPreview=_canPreview;
@property(nonatomic) _Bool isMemberShipFeed; // @synthesize isMemberShipFeed=_isMemberShipFeed;
- (_Bool)_isInFinderTimeline:(int)arg1;
- (_Bool)inMemberGuildMode;

@end

