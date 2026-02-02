//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WATaskBarFeedClickInfo : NSObject
{
    NSString *_sessionId;
    unsigned long long _pageType;
    unsigned long long _pageFeedIndex;
    NSString *_contentId;
    unsigned long long _page;
    NSString *_iconAppId;
    NSString *_extraData;
    unsigned long long _isRefresh;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long isRefresh; // @synthesize isRefresh=_isRefresh;
@property(retain, nonatomic) NSString *extraData; // @synthesize extraData=_extraData;
@property(retain, nonatomic) NSString *iconAppId; // @synthesize iconAppId=_iconAppId;
@property(nonatomic) unsigned long long page; // @synthesize page=_page;
@property(retain, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(nonatomic) unsigned long long pageFeedIndex; // @synthesize pageFeedIndex=_pageFeedIndex;
@property(nonatomic) unsigned long long pageType; // @synthesize pageType=_pageType;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;

@end

