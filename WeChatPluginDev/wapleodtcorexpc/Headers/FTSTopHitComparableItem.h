//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FTSTopHitComparableItem : NSObject
{
    unsigned int _clickScore;
    id _topHitItem;
    NSString *_typeKey;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int clickScore; // @synthesize clickScore=_clickScore;
@property(retain, nonatomic) NSString *typeKey; // @synthesize typeKey=_typeKey;
@property(retain, nonatomic) id topHitItem; // @synthesize topHitItem=_topHitItem;
- (long long)compareUsingClickScore:(id)arg1;

@end

