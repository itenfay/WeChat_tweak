//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString;

@interface MJAIAssetGenerateRequest : NSObject
{
    NSArray *_originAssetURLs;
    NSString *_clientID;
    NSData *_aigcBuffer;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSData *aigcBuffer; // @synthesize aigcBuffer=_aigcBuffer;
@property(copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(readonly, nonatomic) NSArray *originAssetURLs; // @synthesize originAssetURLs=_originAssetURLs;
- (id)initWithOriginAssetURLs:(id)arg1;

@end

