//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveWebPageSheetParams, MMPageSheetAdapter;

@interface MMFinderLiveWebPageSheetCacheInfo : NSObject
{
    unsigned int _cacheTsSec;
    MMPageSheetAdapter *_adpater;
    MMFinderLiveWebPageSheetParams *_params;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveWebPageSheetParams *params; // @synthesize params=_params;
@property(nonatomic) unsigned int cacheTsSec; // @synthesize cacheTsSec=_cacheTsSec;
@property(retain, nonatomic) MMPageSheetAdapter *adpater; // @synthesize adpater=_adpater;
- (id)initWithPageSheet:(id)arg1 cacheTsSec:(unsigned int)arg2 params:(id)arg3;

@end

