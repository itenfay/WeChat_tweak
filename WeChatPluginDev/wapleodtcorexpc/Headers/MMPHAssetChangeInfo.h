//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface MMPHAssetChangeInfo : NSObject
{
    NSArray *_additionAssetIds;
    NSArray *_deleteAssetIds;
    long long _latestNewAssetIndex;
    long long _changeCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long changeCount; // @synthesize changeCount=_changeCount;
@property(nonatomic) long long latestNewAssetIndex; // @synthesize latestNewAssetIndex=_latestNewAssetIndex;
@property(retain, nonatomic) NSArray *deleteAssetIds; // @synthesize deleteAssetIds=_deleteAssetIds;
@property(retain, nonatomic) NSArray *additionAssetIds; // @synthesize additionAssetIds=_additionAssetIds;

@end

