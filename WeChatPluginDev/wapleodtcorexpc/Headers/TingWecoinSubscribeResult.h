//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterStandardTypedData;

@interface TingWecoinSubscribeResult : NSObject
{
    long long _status;
    FlutterStandardTypedData *_scheme;
    FlutterStandardTypedData *_succHalfPanel;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithStatus:(long long)arg1 scheme:(id)arg2 succHalfPanel:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) FlutterStandardTypedData *succHalfPanel; // @synthesize succHalfPanel=_succHalfPanel;
@property(retain, nonatomic) FlutterStandardTypedData *scheme; // @synthesize scheme=_scheme;
@property(nonatomic) long long status; // @synthesize status=_status;
- (id)toList;

@end

