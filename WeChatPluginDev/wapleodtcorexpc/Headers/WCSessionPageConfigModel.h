//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WCSessionPageConfigModel
{
    NSMutableArray *_pagePaths;
    NSMutableDictionary *_pagePathsDicForKey;
    NSMutableDictionary *_pagePathsDicForSid;
}

+ (void)initialize;
+ (void)PBArrayAdd_pagePaths;
- (void).cxx_destruct;
@property(retain) NSMutableDictionary *pagePathsDicForSid; // @synthesize pagePathsDicForSid=_pagePathsDicForSid;
@property(retain) NSMutableDictionary *pagePathsDicForKey; // @synthesize pagePathsDicForKey=_pagePathsDicForKey;
@property(retain, nonatomic) NSMutableArray *pagePaths; // @synthesize pagePaths=_pagePaths;
- (id)toString;
- (void)initCacheDictionary;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

