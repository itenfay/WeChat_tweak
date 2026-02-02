//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WCFinderIntentItem : NSObject
{
    NSMutableDictionary *_map;
    NSString *_currIntentHash;
    NSString *_prevIntentHash;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *prevIntentHash; // @synthesize prevIntentHash=_prevIntentHash;
@property(retain, nonatomic) NSString *currIntentHash; // @synthesize currIntentHash=_currIntentHash;
@property(retain, nonatomic) NSMutableDictionary *map; // @synthesize map=_map;
- (id)info;
- (id)init;

@end

