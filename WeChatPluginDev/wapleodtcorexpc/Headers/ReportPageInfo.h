//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface ReportPageInfo : NSObject
{
    NSNumber *_pageId;
    NSString *_pageName;
    NSDictionary *_pageParams;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithPageId:(id)arg1 pageName:(id)arg2 pageParams:(id)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *pageParams; // @synthesize pageParams=_pageParams;
@property(copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain, nonatomic) NSNumber *pageId; // @synthesize pageId=_pageId;
- (id)toList;

@end

