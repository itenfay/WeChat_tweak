//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterStandardTypedData, NSArray, NSNumber;

@interface MegaMainFeedListContext : NSObject
{
    NSArray *_mainFeedList;
    NSNumber *_hasMore;
    FlutterStandardTypedData *_lastBuffer;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithMainFeedList:(id)arg1 hasMore:(id)arg2 lastBuffer:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) FlutterStandardTypedData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) NSNumber *hasMore; // @synthesize hasMore=_hasMore;
@property(copy, nonatomic) NSArray *mainFeedList; // @synthesize mainFeedList=_mainFeedList;
- (id)toList;

@end

