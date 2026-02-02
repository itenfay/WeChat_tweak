//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface WCFinderCellIdentifierBuidler : NSObject
{
    unsigned long long _index;
    NSMutableSet *_existsIdents;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *existsIdents; // @synthesize existsIdents=_existsIdents;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (void)processIdentifier:(id)arg1;
- (id)createForObject:(id)arg1 setter:(CDUnknownBlockType)arg2;
- (id)init;

@end

