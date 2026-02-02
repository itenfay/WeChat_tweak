//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSNumber;

@interface OpenFlowListParams : NSObject
{
    NSNumber *_clickIndex;
    NSNumber *_hasNewMsgWhenClick;
    NSNumber *_unreadMsgContactCount;
    NSArray *_data;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithClickIndex:(id)arg1 hasNewMsgWhenClick:(id)arg2 unreadMsgContactCount:(id)arg3 data:(id)arg4;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *data; // @synthesize data=_data;
@property(retain, nonatomic) NSNumber *unreadMsgContactCount; // @synthesize unreadMsgContactCount=_unreadMsgContactCount;
@property(retain, nonatomic) NSNumber *hasNewMsgWhenClick; // @synthesize hasNewMsgWhenClick=_hasNewMsgWhenClick;
@property(retain, nonatomic) NSNumber *clickIndex; // @synthesize clickIndex=_clickIndex;
- (id)toList;

@end

