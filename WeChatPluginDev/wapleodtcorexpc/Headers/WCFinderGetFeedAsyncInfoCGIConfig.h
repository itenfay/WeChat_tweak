//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CLLocation, NSMutableDictionary, NSString, WCFinderPushFeedViewProductParams;

@interface WCFinderGetFeedAsyncInfoCGIConfig : NSObject
{
    int _searchScene;
    int _triggerScene;
    NSString *_uxinfo;
    WCFinderPushFeedViewProductParams *_productInfo;
    long long _reportScene;
    CLLocation *_customLocation;
    NSMutableDictionary *_feedProductIdMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *feedProductIdMap; // @synthesize feedProductIdMap=_feedProductIdMap;
@property(retain, nonatomic) CLLocation *customLocation; // @synthesize customLocation=_customLocation;
@property(nonatomic) long long reportScene; // @synthesize reportScene=_reportScene;
@property(retain, nonatomic) WCFinderPushFeedViewProductParams *productInfo; // @synthesize productInfo=_productInfo;
@property(nonatomic) int triggerScene; // @synthesize triggerScene=_triggerScene;
@property(nonatomic) int searchScene; // @synthesize searchScene=_searchScene;
@property(copy, nonatomic) NSString *uxinfo; // @synthesize uxinfo=_uxinfo;
- (unsigned long long)getProductIdWithFeedId:(id)arg1;
- (void)saveProductId:(unsigned long long)arg1 withFeedId:(id)arg2;
- (_Bool)notDeleteJumpInfoContainer;
- (id)init;

@end

