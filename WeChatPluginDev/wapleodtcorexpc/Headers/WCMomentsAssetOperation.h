//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMAssetInfo;

@interface WCMomentsAssetOperation : NSObject
{
    MMAssetInfo *_assetInfo;
    long long _assetSource;
    long long _operationType;
}

- (void).cxx_destruct;
@property(nonatomic) long long operationType; // @synthesize operationType=_operationType;
@property(nonatomic) long long assetSource; // @synthesize assetSource=_assetSource;
@property(retain, nonatomic) MMAssetInfo *assetInfo; // @synthesize assetInfo=_assetInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAssetInfo:(id)arg1 byType:(long long)arg2;

@end

