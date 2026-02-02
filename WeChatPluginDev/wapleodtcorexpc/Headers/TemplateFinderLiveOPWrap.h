//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TemplateFinderLiveOPWrap : NSObject
{
    NSString *_feedID;
    NSString *_nonceID;
    NSString *_liveID;
    NSString *_forcePushInfo;
    unsigned long long _uFeedID;
    unsigned long long _uliveID;
}

+ (id)finderLiveOPWrapWithJSON:(id)arg1;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long uliveID; // @synthesize uliveID=_uliveID;
@property(nonatomic) unsigned long long uFeedID; // @synthesize uFeedID=_uFeedID;
@property(copy, nonatomic) NSString *forcePushInfo; // @synthesize forcePushInfo=_forcePushInfo;
@property(copy, nonatomic) NSString *liveID; // @synthesize liveID=_liveID;
@property(copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(copy, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

