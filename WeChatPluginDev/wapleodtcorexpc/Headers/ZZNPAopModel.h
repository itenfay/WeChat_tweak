//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface ZZNPAopModel : NSObject
{
    NSString *_name;
    NSMutableArray *_eventList;
    NSMutableDictionary *_eventMap;
}

+ (id)createWithName:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *eventMap; // @synthesize eventMap=_eventMap;
@property(retain, nonatomic) NSMutableArray *eventList; // @synthesize eventList=_eventList;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) unsigned long long eventCount;
- (void)executeWithInstance:(id)arg1;
- (void)removeEventByTag:(id)arg1;
- (void)addEventAction:(id)arg1 tag:(id)arg2;
- (id)init;

@end

