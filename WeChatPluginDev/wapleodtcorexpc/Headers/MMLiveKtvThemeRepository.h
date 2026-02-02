//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveQueue, NSMutableDictionary;

@interface MMLiveKtvThemeRepository : NSObject
{
    NSMutableDictionary *_items;
    MMLiveQueue *_requests;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveQueue *requests; // @synthesize requests=_requests;
@property(retain, nonatomic) NSMutableDictionary *items; // @synthesize items=_items;
- (void)invokeFrontTask;
- (void)fetchAllThemesWithFetchingProvider:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)fetchThemeWithId:(id)arg1 fetchingProvider:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end

