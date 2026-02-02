//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface DataReportPageConfigModel : NSObject
{
    unsigned long long _pageId;
    unsigned long long _bizGroupId;
    NSString *_pageName;
    unsigned long long _reportPolicy;
    unsigned long long _routeRule;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long routeRule; // @synthesize routeRule=_routeRule;
@property(nonatomic) unsigned long long reportPolicy; // @synthesize reportPolicy=_reportPolicy;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(nonatomic) unsigned long long bizGroupId; // @synthesize bizGroupId=_bizGroupId;
@property(nonatomic) unsigned long long pageId; // @synthesize pageId=_pageId;
- (id)toString;

@end

