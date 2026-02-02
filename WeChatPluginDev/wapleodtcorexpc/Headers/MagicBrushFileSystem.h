//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;
@protocol IMBFileSystem;

@interface MagicBrushFileSystem
{
    id <IMBFileSystem> _mAssetsFS;
    id <IMBFileSystem> _mWxaPkgFS;
    id <IMBFileSystem> _mFlattenFS;
    NSArray *_mExternalList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *mExternalList; // @synthesize mExternalList=_mExternalList;
@property(retain, nonatomic) id <IMBFileSystem> mFlattenFS; // @synthesize mFlattenFS=_mFlattenFS;
@property(retain, nonatomic) id <IMBFileSystem> mWxaPkgFS; // @synthesize mWxaPkgFS=_mWxaPkgFS;
@property(retain, nonatomic) id <IMBFileSystem> mAssetsFS; // @synthesize mAssetsFS=_mAssetsFS;
- (void)addCustomPkgFS:(id)arg1 customName:(id)arg2 prefix:(id)arg3;
- (void)addPkgFS:(id)arg1 pkgPath:(id)arg2 prefix:(id)arg3 assetsFS:(id)arg4 externalFS:(id)arg5;
- (id)getPkgFileSystem:(id)arg1 bizName:(id)arg2 prefix:(id)arg3;
- (id)getFlattenFileSystem;
- (void)addExternalFileSystem:(id)arg1;
- (id)addNonFlattenFileSystem;
- (void)dealloc;
- (id)initWithPara:(id)arg1 pkgPath:(id)arg2 prefix:(id)arg3 assetsFS:(id)arg4 externalFS:(id)arg5;

@end

