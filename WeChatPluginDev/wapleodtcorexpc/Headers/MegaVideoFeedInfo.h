//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterStandardTypedData, NSString;

@interface MegaVideoFeedInfo : NSObject
{
    NSString *_feedId;
    NSString *_nonceId;
    FlutterStandardTypedData *_finderObjectData;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithFeedId:(id)arg1 nonceId:(id)arg2 finderObjectData:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) FlutterStandardTypedData *finderObjectData; // @synthesize finderObjectData=_finderObjectData;
@property(copy, nonatomic) NSString *nonceId; // @synthesize nonceId=_nonceId;
@property(copy, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
- (id)toList;

@end

