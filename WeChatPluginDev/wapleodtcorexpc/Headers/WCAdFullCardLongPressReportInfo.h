//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCAdFullCardLongPressReportInfo : NSObject
{
    unsigned long long _pressStartTime;
    unsigned long long _pressEndTime;
    unsigned long long _result;
}

@property(nonatomic) unsigned long long result; // @synthesize result=_result;
@property(nonatomic) unsigned long long pressEndTime; // @synthesize pressEndTime=_pressEndTime;
@property(nonatomic) unsigned long long pressStartTime; // @synthesize pressStartTime=_pressStartTime;
- (void)resetReportInfo;

@end

