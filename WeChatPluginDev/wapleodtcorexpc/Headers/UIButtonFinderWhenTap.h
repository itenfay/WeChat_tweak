//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface UIButtonFinderWhenTap : NSObject
{
    unsigned long long _hashValue;
    CDUnknownBlockType _action;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(nonatomic) unsigned long long hashValue; // @synthesize hashValue=_hashValue;
- (void)replaceBlock:(CDUnknownBlockType)arg1;
- (void)onTap:(id)arg1;

@end

