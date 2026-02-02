//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, PHFetchResult;

@interface MMAlbumFetchResult : NSObject
{
    _Bool _onlyShowAssetWithLocation;
    PHFetchResult *_systemFetchResult;
    NSMutableArray *_prefetchAssets;
}

+ (id)fetchResult:(id)arg1 locationFilter:(_Bool)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *prefetchAssets; // @synthesize prefetchAssets=_prefetchAssets;
@property(nonatomic) _Bool onlyShowAssetWithLocation; // @synthesize onlyShowAssetWithLocation=_onlyShowAssetWithLocation;
@property(retain, nonatomic) PHFetchResult *systemFetchResult; // @synthesize systemFetchResult=_systemFetchResult;
- (id)lastObject;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)updateFetchResults;

@end

