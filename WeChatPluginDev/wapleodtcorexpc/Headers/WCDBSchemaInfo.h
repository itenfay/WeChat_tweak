//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WCDBSchemaInfo : NSObject
{
    NSMutableDictionary *_infos;
}

- (void).cxx_destruct;
- (id)description;
- (void)setCount:(id)arg1 forTable:(id)arg2;
- (void)addSequence:(id)arg1;
- (void)addSchema:(id)arg1;
- (id)getOrCreateInfo:(id)arg1;

@end

