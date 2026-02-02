//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, WCTimeline3rdShareBaseReporter;

@interface WCTimeline3rdShareReportModel : NSObject
{
    WCTimeline3rdShareBaseReporter *_reporter;
    NSMutableDictionary *_supportClass;
}

+ (void)updateOutcome:(unsigned int)arg1 serverItem:(id)arg2 localItem:(id)arg3;
+ (void)bindDataItemIfSupport:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *supportClass; // @synthesize supportClass=_supportClass;
@property(retain, nonatomic) WCTimeline3rdShareBaseReporter *reporter; // @synthesize reporter=_reporter;
- (Class)classForAppID:(id)arg1;
- (void)registerClasses;

@end

