//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface MJAIAssetGenerateResult : NSObject
{
    NSArray *_aiAssetURLs;
}

@property(readonly, nonatomic) NSArray *aiAssetURLs; // @synthesize aiAssetURLs=_aiAssetURLs;
- (id)initWithAIAssetURLs:(id)arg1;

@end

