//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WebviewPageJumpReportInfo : NSObject
{
    NSString *_pageUrl;
    unsigned long long _enterTimestamp;
    unsigned long long _pageStayTime;
    NSString *_pageTitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *pageTitle; // @synthesize pageTitle=_pageTitle;
@property(nonatomic) unsigned long long pageStayTime; // @synthesize pageStayTime=_pageStayTime;
@property(nonatomic) unsigned long long enterTimestamp; // @synthesize enterTimestamp=_enterTimestamp;
@property(retain, nonatomic) NSString *pageUrl; // @synthesize pageUrl=_pageUrl;
- (id)description;

@end

