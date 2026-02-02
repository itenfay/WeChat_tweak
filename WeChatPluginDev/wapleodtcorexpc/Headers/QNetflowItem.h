//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QNetflowItem : NSObject
{
    int _err;
    NSString *_biz_type;
    NSString *_url;
    long long _rt;
    double _up;
    double _dw;
    long long _up_time;
    long long _dw_time;
}

- (void).cxx_destruct;
@property(nonatomic) int err; // @synthesize err=_err;
@property(nonatomic) long long dw_time; // @synthesize dw_time=_dw_time;
@property(nonatomic) long long up_time; // @synthesize up_time=_up_time;
@property(nonatomic) double dw; // @synthesize dw=_dw;
@property(nonatomic) double up; // @synthesize up=_up;
@property(nonatomic) long long rt; // @synthesize rt=_rt;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *biz_type; // @synthesize biz_type=_biz_type;

@end

