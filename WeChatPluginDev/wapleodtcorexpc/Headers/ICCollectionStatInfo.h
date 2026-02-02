//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate;

@interface ICCollectionStatInfo : NSObject
{
    NSDate *_firstScreenStartTime;
    NSDate *_firstScreenEndTime;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *firstScreenEndTime; // @synthesize firstScreenEndTime=_firstScreenEndTime;
@property(retain, nonatomic) NSDate *firstScreenStartTime; // @synthesize firstScreenStartTime=_firstScreenStartTime;
- (void)clear;
- (double)firstScreenCost;
- (void)markFirstScreenEnd;
- (void)markFirstScreenStart;

@end

