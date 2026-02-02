//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterStandardTypedData, NSString;

@interface FlutterCgiRequest : NSObject
{
    _Bool _longPolling;
    long long _funcId;
    NSString *_uri;
    FlutterStandardTypedData *_data;
    long long _longPollingTimeout;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithFuncId:(long long)arg1 uri:(id)arg2 data:(id)arg3 longPolling:(_Bool)arg4 longPollingTimeout:(long long)arg5;
- (void).cxx_destruct;
@property(nonatomic) long long longPollingTimeout; // @synthesize longPollingTimeout=_longPollingTimeout;
@property(nonatomic) _Bool longPolling; // @synthesize longPolling=_longPolling;
@property(retain, nonatomic) FlutterStandardTypedData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *uri; // @synthesize uri=_uri;
@property(nonatomic) long long funcId; // @synthesize funcId=_funcId;
- (id)toList;

@end

