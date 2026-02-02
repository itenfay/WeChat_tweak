//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderPayReportObj : NSObject
{
    NSString *_contextid;
    id _reportData;
}

- (void).cxx_destruct;
@property(copy, nonatomic) id reportData; // @synthesize reportData=_reportData;
@property(copy, nonatomic) NSString *contextid; // @synthesize contextid=_contextid;
- (id)initWithReportData:(id)arg1 contextid:(id)arg2;

@end

