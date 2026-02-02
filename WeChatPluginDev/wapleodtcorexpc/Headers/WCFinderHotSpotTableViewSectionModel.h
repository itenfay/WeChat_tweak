//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray;

@interface WCFinderHotSpotTableViewSectionModel : NSObject
{
    NSData *_lastBuffer;
    NSMutableArray *_hotWords;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *hotWords; // @synthesize hotWords=_hotWords;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
- (void)fetchServerDataCompletion:(CDUnknownBlockType)arg1 failed:(CDUnknownBlockType)arg2;
- (_Bool)isDataEmpty;
- (void)loadLocalData;
- (id)hotWordAtIndex:(unsigned long long)arg1;
- (unsigned long long)dataCount;

@end

