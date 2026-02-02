//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol WCFinderBatchModContactTypeTaskDelegate;

@interface WCFinderBatchModContactTypeTask : NSObject
{
    _Bool _stopWhenFailed;
    _Bool _allSuccess;
    int _type;
    long long _concurrentCount;
    id <WCFinderBatchModContactTypeTaskDelegate> _delegate;
    id _context;
    NSMutableDictionary *_penddings;
    NSMutableDictionary *_settings;
    NSMutableArray *_success;
    NSMutableArray *_faileds;
}

+ (void)appendTaskItem:(id)arg1 type:(int)arg2 toDictionary:(id)arg3;
+ (id)taskWithAddContactNames:(id)arg1 deleteContactNames:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool allSuccess; // @synthesize allSuccess=_allSuccess;
@property(retain, nonatomic) NSMutableArray *faileds; // @synthesize faileds=_faileds;
@property(retain, nonatomic) NSMutableArray *success; // @synthesize success=_success;
@property(retain, nonatomic) NSMutableDictionary *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) NSMutableDictionary *penddings; // @synthesize penddings=_penddings;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(nonatomic) _Bool stopWhenFailed; // @synthesize stopWhenFailed=_stopWhenFailed;
@property(nonatomic) __weak id <WCFinderBatchModContactTypeTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) long long concurrentCount; // @synthesize concurrentCount=_concurrentCount;
- (void)onTaskFinish;
- (void)handleModContactFailed:(id)arg1;
- (void)handleModContactSuccess:(id)arg1;
- (void)tryNextBatch;
- (void)start;
- (id)init;

@end

