//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WCSearchGroupScoreCache : NSObject
{
    NSMutableDictionary *_dicScore;
    NSMutableDictionary *_dicFeatures;
    NSMutableDictionary *_dicLeaf;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicLeaf; // @synthesize dicLeaf=_dicLeaf;
@property(retain, nonatomic) NSMutableDictionary *dicFeatures; // @synthesize dicFeatures=_dicFeatures;
@property(retain, nonatomic) NSMutableDictionary *dicScore; // @synthesize dicScore=_dicScore;
- (id)init;

@end

