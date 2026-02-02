//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TXCHardwareVideoFrameSorter : NSObject
{
    unsigned long long _maxNumRefFrames;
    NSMutableArray *_waitingArray;
    NSMutableArray *_sortedArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *sortedArray; // @synthesize sortedArray=_sortedArray;
@property(retain, nonatomic) NSMutableArray *waitingArray; // @synthesize waitingArray=_waitingArray;
@property(nonatomic) unsigned long long maxNumRefFrames; // @synthesize maxNumRefFrames=_maxNumRefFrames;
- (void)dealloc;
- (id)popSortedFrameInfo;
- (void)pushFrameInfo:(id)arg1;
- (id)init;

@end

