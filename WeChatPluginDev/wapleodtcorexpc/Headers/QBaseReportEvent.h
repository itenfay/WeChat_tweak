//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface QBaseReportEvent : NSObject
{
    NSString *_eventCode;
    NSDictionary *_params;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(copy, nonatomic) NSString *eventCode; // @synthesize eventCode=_eventCode;

@end

