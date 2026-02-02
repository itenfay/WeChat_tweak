//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterStandardTypedData;

@interface FlutterCgiResponse : NSObject
{
    long long _errorType;
    long long _errorCode;
    FlutterStandardTypedData *_data;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithErrorType:(long long)arg1 errorCode:(long long)arg2 data:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) FlutterStandardTypedData *data; // @synthesize data=_data;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) long long errorType; // @synthesize errorType=_errorType;
- (id)toList;

@end

