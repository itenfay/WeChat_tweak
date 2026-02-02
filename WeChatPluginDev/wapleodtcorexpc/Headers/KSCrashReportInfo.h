//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface KSCrashReportInfo : NSObject
{
    NSString *_reportID;
    NSDate *_creationDate;
}

+ (id)reportInfoWithID:(id)arg1 creationDate:(id)arg2;
- (void).cxx_destruct;
@property(readonly, retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, retain, nonatomic) NSString *reportID; // @synthesize reportID=_reportID;
- (long long)compare:(id)arg1;
- (id)initWithID:(id)arg1 creationDate:(id)arg2;

@end

