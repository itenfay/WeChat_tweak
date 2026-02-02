//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MJAssetDraftModel : NSObject
{
    _Bool _isNeedOrigin;
    unsigned long long _type;
    NSString *_localIdentifier;
    NSString *_relativeFilePath;
    long long _mediaType;
}

+ (id)modelWithMMPHAsset:(id)arg1;
+ (id)modelWithAssetInfo:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_isNeedOrigin;
+ (void)PBArrayAdd_mediaType;
+ (void)PBArrayAdd_relativeFilePath;
+ (void)PBArrayAdd_localIdentifier;
+ (void)PBArrayAdd_type;
- (void).cxx_destruct;
@property(nonatomic) _Bool isNeedOrigin; // @synthesize isNeedOrigin=_isNeedOrigin;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(copy, nonatomic) NSString *relativeFilePath; // @synthesize relativeFilePath=_relativeFilePath;
@property(copy, nonatomic) NSString *localIdentifier; // @synthesize localIdentifier=_localIdentifier;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)toMJAssetInfo;
- (id)absoluteFilePath;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

