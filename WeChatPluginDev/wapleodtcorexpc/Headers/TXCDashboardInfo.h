//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TXCDashboardInfo : NSObject
{
    NSString *_status;
    NSString *_log;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *log; // @synthesize log=_log;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

