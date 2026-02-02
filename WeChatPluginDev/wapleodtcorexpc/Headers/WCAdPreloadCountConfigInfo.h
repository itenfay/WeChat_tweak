//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCAdPreloadCountConfigInfo : NSObject
{
    unsigned int _preloadPageCount;
    unsigned int _preloadResourceCount;
}

@property(readonly, nonatomic) unsigned int preloadResourceCount; // @synthesize preloadResourceCount=_preloadResourceCount;
@property(readonly, nonatomic) unsigned int preloadPageCount; // @synthesize preloadPageCount=_preloadPageCount;
- (void)parseConfig:(id)arg1;
- (id)initWithConfig:(id)arg1 shareFeed:(_Bool)arg2;

@end

