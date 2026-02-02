//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WATaskBarFeedAppearInfo : NSObject
{
    NSString *_sessionId;
    unsigned long long _appearType;
    unsigned long long _pageType;
    NSString *_contentId;
    unsigned long long _contentStatus;
    unsigned long long _page;
    NSString *_iconAppId;
    NSString *_extraData;
    unsigned long long _pageFeedIndex;
    unsigned long long _isRefresh;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long isRefresh; // @synthesize isRefresh=_isRefresh;
@property(nonatomic) unsigned long long pageFeedIndex; // @synthesize pageFeedIndex=_pageFeedIndex;
@property(retain, nonatomic) NSString *extraData; // @synthesize extraData=_extraData;
@property(retain, nonatomic) NSString *iconAppId; // @synthesize iconAppId=_iconAppId;
@property(nonatomic) unsigned long long page; // @synthesize page=_page;
@property(nonatomic) unsigned long long contentStatus; // @synthesize contentStatus=_contentStatus;
@property(retain, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(nonatomic) unsigned long long pageType; // @synthesize pageType=_pageType;
@property(nonatomic) unsigned long long appearType; // @synthesize appearType=_appearType;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;

@end

