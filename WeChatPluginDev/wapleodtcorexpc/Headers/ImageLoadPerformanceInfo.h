//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface ImageLoadPerformanceInfo : NSObject
{
    NSNumber *_isNetwork;
    NSNumber *_startTimeStamp;
    NSNumber *_endTimeStamp;
    NSNumber *_downloadFail;
    NSNumber *_downloadErrorCode;
    NSNumber *_decodeFail;
    NSString *_url;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithIsNetwork:(id)arg1 startTimeStamp:(id)arg2 endTimeStamp:(id)arg3 downloadFail:(id)arg4 downloadErrorCode:(id)arg5 decodeFail:(id)arg6 url:(id)arg7;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSNumber *decodeFail; // @synthesize decodeFail=_decodeFail;
@property(retain, nonatomic) NSNumber *downloadErrorCode; // @synthesize downloadErrorCode=_downloadErrorCode;
@property(retain, nonatomic) NSNumber *downloadFail; // @synthesize downloadFail=_downloadFail;
@property(retain, nonatomic) NSNumber *endTimeStamp; // @synthesize endTimeStamp=_endTimeStamp;
@property(retain, nonatomic) NSNumber *startTimeStamp; // @synthesize startTimeStamp=_startTimeStamp;
@property(retain, nonatomic) NSNumber *isNetwork; // @synthesize isNetwork=_isNetwork;
- (id)toList;

@end

