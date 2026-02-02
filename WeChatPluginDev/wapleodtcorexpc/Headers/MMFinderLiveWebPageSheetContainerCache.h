//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MMFinderLiveWebPageSheetContainerCache : NSObject
{
    NSMutableDictionary *_items;
}

+ (id)itemKeyWithPageSheetParams:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *items; // @synthesize items=_items;
- (id)containerWithPageSheetParams:(id)arg1;
- (void)removeContainerWithPageSheetParams:(id)arg1;
- (void)addContainer:(id)arg1 withPageSheetParams:(id)arg2;
- (id)init;

@end

