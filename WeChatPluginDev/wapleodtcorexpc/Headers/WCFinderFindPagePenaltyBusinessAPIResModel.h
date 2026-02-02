//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WCFinderFindPagePenaltyBusinessAPIResModel : NSObject
{
    long long _penaltyCount;
    NSMutableArray *_willFreeDetailsArray;
    NSMutableArray *_exposeNDetailsArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *exposeNDetailsArray; // @synthesize exposeNDetailsArray=_exposeNDetailsArray;
@property(retain, nonatomic) NSMutableArray *willFreeDetailsArray; // @synthesize willFreeDetailsArray=_willFreeDetailsArray;
@property(nonatomic) long long penaltyCount; // @synthesize penaltyCount=_penaltyCount;

@end

