//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveApplySpamReviewCGIParam : NSObject
{
    unsigned int _scene;
    NSString *_anchorFinderUsername;
    unsigned long long _objectId;
    unsigned long long _liveId;
    NSString *_alertId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *alertId; // @synthesize alertId=_alertId;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
@property(nonatomic) unsigned long long objectId; // @synthesize objectId=_objectId;
@property(copy, nonatomic) NSString *anchorFinderUsername; // @synthesize anchorFinderUsername=_anchorFinderUsername;

@end

