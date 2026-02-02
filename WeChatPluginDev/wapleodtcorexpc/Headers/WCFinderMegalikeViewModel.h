//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray;

@interface WCFinderMegalikeViewModel : NSObject
{
    _Bool _isLoading;
    _Bool _hadMore;
    NSMutableArray *_datas;
    unsigned long long _megavideoTotalCount;
    NSData *_lastBuffer;
    unsigned long long _totalCount;
    unsigned long long _finderTotalCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long finderTotalCount; // @synthesize finderTotalCount=_finderTotalCount;
@property(nonatomic) unsigned long long totalCount; // @synthesize totalCount=_totalCount;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) unsigned long long megavideoTotalCount; // @synthesize megavideoTotalCount=_megavideoTotalCount;
@property(nonatomic) _Bool hadMore; // @synthesize hadMore=_hadMore;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSMutableArray *datas; // @synthesize datas=_datas;
- (id)historyVideos;
- (id)fetchNextMegaVideos;
- (void)clearAllData;
- (id)init;

@end

