//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCStoryPageExposeReportObj : NSObject
{
    unsigned long long _pageType;
    NSString *_tid;
}

+ (void)ReportBubbleCommentListExposeWithTid:(id)arg1;
+ (void)ReportExposeWithPageType:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(nonatomic) unsigned long long pageType; // @synthesize pageType=_pageType;
- (void)reportExpose;

@end

