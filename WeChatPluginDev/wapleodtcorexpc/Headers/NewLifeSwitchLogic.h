//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface NewLifeSwitchLogic : NSObject
{
    _Bool _mainSwitch;
    long long _contentReddotStrategy;
}

@property(nonatomic) long long contentReddotStrategy; // @synthesize contentReddotStrategy=_contentReddotStrategy;
@property(nonatomic) _Bool mainSwitch; // @synthesize mainSwitch=_mainSwitch;
- (void)onNewLifeSwitchChanged:(_Bool)arg1;
- (void)onExptItemListChange;
- (_Bool)enablePostAssist;
- (_Bool)enableFinderLike;
- (long long)imageDisplayType;
- (_Bool)enablePostGuideByTimelineActionSheet;
- (_Bool)enablePostGuideByTimelineDetail;
- (_Bool)enablePostGuideByTimelineStream;
- (_Bool)enablePostToNewLifeFromSns;
- (_Bool)enableTopRecommendContentReddotInFind;
- (_Bool)mainSwitchRealTimeResult;
- (_Bool)checkMainSwitchValueChanged;
- (void)initFlexibleXLabSwitch;
- (void)initFixedXLabSwitch;
- (void)unregisterExtensions;
- (void)registerExtensions;
- (void)dealloc;
- (id)init;

@end

