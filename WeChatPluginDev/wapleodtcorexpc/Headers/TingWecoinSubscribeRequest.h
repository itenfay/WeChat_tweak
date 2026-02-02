//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterStandardTypedData, NSNumber, NSString;

@interface TingWecoinSubscribeRequest : NSObject
{
    FlutterStandardTypedData *_joinInfo;
    NSString *_sessionId;
    NSNumber *_tingScene;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithJoinInfo:(id)arg1 sessionId:(id)arg2 tingScene:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *tingScene; // @synthesize tingScene=_tingScene;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) FlutterStandardTypedData *joinInfo; // @synthesize joinInfo=_joinInfo;
- (id)toList;

@end

