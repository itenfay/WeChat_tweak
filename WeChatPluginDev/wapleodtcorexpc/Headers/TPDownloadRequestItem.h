//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TPDownloadRequestItem : NSObject
{
    int _retryTimes;
    int _type;
    NSString *_urlStr;
    double _failedTimeStamp;
}

- (void).cxx_destruct;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) double failedTimeStamp; // @synthesize failedTimeStamp=_failedTimeStamp;
@property(nonatomic) int retryTimes; // @synthesize retryTimes=_retryTimes;
@property(copy, nonatomic) NSString *urlStr; // @synthesize urlStr=_urlStr;
- (id)init;

@end

