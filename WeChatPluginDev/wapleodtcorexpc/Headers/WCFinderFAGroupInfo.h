//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCFinderFAGroupInfo : NSObject
{
    NSString *_key;
    long long _firstIndex;
    NSMutableArray *_items;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) long long firstIndex; // @synthesize firstIndex=_firstIndex;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (id)init;

@end

