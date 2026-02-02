//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdvertiseMonitorReportInfo : NSObject
{
    int _subType;
    int _subValue;
    int _source;
    NSString *_actionName;
    NSString *_actionValue;
    NSString *_extInfo;
}

+ (id)genMonitorReportInfo:(id)arg1 actionValue:(id)arg2 subType:(int)arg3 subValue:(int)arg4 extInfo:(id)arg5;
- (void).cxx_destruct;
@property(nonatomic) int source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) int subValue; // @synthesize subValue=_subValue;
@property(nonatomic) int subType; // @synthesize subType=_subType;
@property(retain, nonatomic) NSString *actionValue; // @synthesize actionValue=_actionValue;
@property(retain, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;
- (id)toReportString;

@end

