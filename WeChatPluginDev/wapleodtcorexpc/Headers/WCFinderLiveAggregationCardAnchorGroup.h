//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray;

@interface WCFinderLiveAggregationCardAnchorGroup : NSObject
{
    NSMutableArray *_anchor;
    NSData *_entryBuffer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *entryBuffer; // @synthesize entryBuffer=_entryBuffer;
@property(retain, nonatomic) NSMutableArray *anchor; // @synthesize anchor=_anchor;

@end

