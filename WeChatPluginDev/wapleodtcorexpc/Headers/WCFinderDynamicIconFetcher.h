//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary;

@interface WCFinderDynamicIconFetcher : NSObject
{
    NSMapTable *_imageCache;
    NSMutableDictionary *_imageProcessMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *imageProcessMap; // @synthesize imageProcessMap=_imageProcessMap;
@property(retain, nonatomic) NSMapTable *imageCache; // @synthesize imageCache=_imageCache;
- (id)covertDynamicColor:(id)arg1 dark:(_Bool)arg2;
- (id)createFetchTaskWithDark:(id)arg1 light:(id)arg2;
- (id)createTaskConfig:(id)arg1 size:(struct CGSize)arg2 color:(id)arg3 isDark:(_Bool)arg4;
- (id)fetchImageWithDarkUrl:(id)arg1 lightUrl:(id)arg2 size:(struct CGSize)arg3 color:(id)arg4;
- (id)init;

@end

