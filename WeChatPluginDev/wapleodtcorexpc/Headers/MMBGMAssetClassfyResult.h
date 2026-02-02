//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData;

@interface MMBGMAssetClassfyResult : NSObject
{
    NSData *_assetClassfyResult;
    CDUnknownBlockType _getClassfyBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType getClassfyBlock; // @synthesize getClassfyBlock=_getClassfyBlock;
@property(retain, nonatomic) NSData *assetClassfyResult; // @synthesize assetClassfyResult=_assetClassfyResult;
- (void)asyncCheckClassfyResult:(CDUnknownBlockType)arg1;
- (void)setCheckClassfyResultBlock:(CDUnknownBlockType)arg1;
- (_Bool)needCheckClassfyResult;
- (_Bool)hasGetClassfyResult;

@end

