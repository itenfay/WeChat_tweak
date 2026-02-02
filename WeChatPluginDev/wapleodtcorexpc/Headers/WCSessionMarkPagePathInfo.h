//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface WCSessionMarkPagePathInfo
{
    unsigned int _index;
    NSString *_pagePathId;
    NSString *_sessionPageId;
    unsigned long long _type;
    NSMutableArray *_pagePaths;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *pagePaths; // @synthesize pagePaths=_pagePaths;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned int index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *sessionPageId; // @synthesize sessionPageId=_sessionPageId;
@property(retain, nonatomic) NSString *pagePathId; // @synthesize pagePathId=_pagePathId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)toString;
- (id)init;

@end

