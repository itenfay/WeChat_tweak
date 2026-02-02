//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface BrandMsgResortContext : NSObject
{
    unsigned int _maxGroupId;
    unsigned int _limitMaxWeight;
    unsigned long long _limitMaxSequenceId;
    NSMutableArray *_arrContextItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrContextItem; // @synthesize arrContextItem=_arrContextItem;
@property(nonatomic) unsigned long long limitMaxSequenceId; // @synthesize limitMaxSequenceId=_limitMaxSequenceId;
@property(nonatomic) unsigned int limitMaxWeight; // @synthesize limitMaxWeight=_limitMaxWeight;
@property(nonatomic) unsigned int maxGroupId; // @synthesize maxGroupId=_maxGroupId;
- (id)description;
- (id)init;

@end

