//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WSRecommendColikeStorage : NSObject
{
    _Bool _hasRequestColikeHideData;
    _Bool _hasRequestColikeBlockData;
    NSMutableArray *_colikeHideList;
    NSMutableArray *_colikeBlockList;
    unsigned long long _hideVersion;
    unsigned long long _blockVersion;
}

+ (id)loadRecommendColikeStorage;
+ (_Bool)saveRecommendColikeStorage:(id)arg1;
+ (id)getRecommendColikeStoragePath;
+ (void)initialize;
+ (void)PBArrayAdd_hasRequestColikeBlockData;
+ (void)PBArrayAdd_hasRequestColikeHideData;
+ (void)PBArrayAdd_blockVersion;
+ (void)PBArrayAdd_hideVersion;
+ (void)PBArrayAdd_colikeBlockList;
+ (void)PBArrayAdd_colikeHideList;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasRequestColikeBlockData; // @synthesize hasRequestColikeBlockData=_hasRequestColikeBlockData;
@property(nonatomic) _Bool hasRequestColikeHideData; // @synthesize hasRequestColikeHideData=_hasRequestColikeHideData;
@property(nonatomic) unsigned long long blockVersion; // @synthesize blockVersion=_blockVersion;
@property(nonatomic) unsigned long long hideVersion; // @synthesize hideVersion=_hideVersion;
@property(retain, nonatomic) NSMutableArray *colikeBlockList; // @synthesize colikeBlockList=_colikeBlockList;
@property(retain, nonatomic) NSMutableArray *colikeHideList; // @synthesize colikeHideList=_colikeHideList;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

