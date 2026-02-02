//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TPReportKey : NSObject
{
    NSString *_flowid;
    NSString *_eventid;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *eventid; // @synthesize eventid=_eventid;
@property(copy, nonatomic) NSString *flowid; // @synthesize flowid=_flowid;

@end

