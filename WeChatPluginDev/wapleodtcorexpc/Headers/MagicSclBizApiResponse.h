//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterStandardTypedData, NSString;

@interface MagicSclBizApiResponse : NSObject
{
    long long _errCode;
    NSString *_errMsg;
    FlutterStandardTypedData *_data;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithErrCode:(long long)arg1 errMsg:(id)arg2 data:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) FlutterStandardTypedData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property(nonatomic) long long errCode; // @synthesize errCode=_errCode;
- (id)toList;

@end

