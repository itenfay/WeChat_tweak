//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterStandardTypedData, NSString;

@interface TingFinderActionAsyncResult : NSObject
{
    long long _ret;
    NSString *_errorMessage;
    FlutterStandardTypedData *_data;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithRet:(long long)arg1 errorMessage:(id)arg2 data:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) FlutterStandardTypedData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(nonatomic) long long ret; // @synthesize ret=_ret;
- (id)toList;

@end

