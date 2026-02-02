//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCFinderLiveProductShareItem, WCFinderProductShareViewBuildConfig;

@interface WCFinderProductShareViewBuilder : NSObject
{
    WCFinderProductShareViewBuildConfig *_config;
    WCFinderLiveProductShareItem *_item;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveProductShareItem *item; // @synthesize item=_item;
@property(retain, nonatomic) WCFinderProductShareViewBuildConfig *config; // @synthesize config=_config;
- (double)estimateHeightForWidth:(double)arg1;
- (double)buildInCanvas:(id)arg1;
- (double)titleHightForText:(id)arg1 firstLineWidth:(double)arg2 singleLine:(_Bool)arg3;

@end

