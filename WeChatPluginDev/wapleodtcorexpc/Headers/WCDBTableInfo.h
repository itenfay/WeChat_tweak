//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSNumber;

@interface WCDBTableInfo : NSObject
{
    NSMutableArray *_schemas;
    NSMutableArray *_sequences;
    NSNumber *_count;
}

- (void).cxx_destruct;
- (id)description;
- (void)addSequence:(id)arg1;
- (void)addSchema:(id)arg1;
- (void)setCount:(id)arg1;

@end

