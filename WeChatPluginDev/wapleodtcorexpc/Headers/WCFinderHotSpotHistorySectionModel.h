//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WCFinderHotSpotHistorySectionModel : NSObject
{
    NSMutableArray *_historyRecords;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *historyRecords; // @synthesize historyRecords=_historyRecords;
- (void)loadData;
- (id)historyRecordAtIndex:(unsigned long long)arg1;
- (unsigned long long)dataCount;
- (_Bool)isDataEmpty;

@end

