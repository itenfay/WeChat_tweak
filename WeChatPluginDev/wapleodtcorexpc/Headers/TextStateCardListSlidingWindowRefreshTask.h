//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TextStateCardListSlidingWindowRefreshTask : NSObject
{
    _Bool _success;
    NSString *_taskId;
    NSArray *_textStateList;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _getCurrentTextStateId;
}

+ (id)textStateListFromJSONObject:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(copy, nonatomic) CDUnknownBlockType getCurrentTextStateId; // @synthesize getCurrentTextStateId=_getCurrentTextStateId;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSArray *textStateList; // @synthesize textStateList=_textStateList;
@property(retain, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
- (id)description;
- (id)initWithJSONObject:(id)arg1;

@end

