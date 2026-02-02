//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFInderJSAPIFeedReadReporter, WCFinderJSAPIFeedListBehavior;

@interface WCFinderFullShareListTemplatePlugin : NSObject
{
    WCFInderJSAPIFeedReadReporter *_readReporter;
    WCFinderJSAPIFeedListBehavior *_behavior;
    NSString *_lastReportFocusTid;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *lastReportFocusTid; // @synthesize lastReportFocusTid=_lastReportFocusTid;
@property(retain, nonatomic) WCFinderJSAPIFeedListBehavior *behavior; // @synthesize behavior=_behavior;
@property(retain, nonatomic) WCFInderJSAPIFeedReadReporter *readReporter; // @synthesize readReporter=_readReporter;
- (void)onShareListViewClose;
- (id)readReporterWithoutCreate;
- (void)notifyFocusFeedChange:(id)arg1;
- (id)initWithBehavior:(id)arg1;

@end

