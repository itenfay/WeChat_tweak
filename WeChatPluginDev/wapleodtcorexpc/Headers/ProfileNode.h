//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CallFrame, NSMutableSet;

@interface ProfileNode : NSObject
{
    _Bool _hasParent;
    _Bool _visited;
    int _ID;
    int _hitCount;
    CallFrame *_callFrame;
    NSMutableSet *_children;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool visited; // @synthesize visited=_visited;
@property(nonatomic) _Bool hasParent; // @synthesize hasParent=_hasParent;
@property(retain, nonatomic) NSMutableSet *children; // @synthesize children=_children;
@property(nonatomic) int hitCount; // @synthesize hitCount=_hitCount;
@property(retain, nonatomic) CallFrame *callFrame; // @synthesize callFrame=_callFrame;
@property(nonatomic) int ID; // @synthesize ID=_ID;
- (id)init;

@end

