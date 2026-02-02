//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableSet;
@protocol IMBFileSystem;

@interface MagicBrushPublicServiceFileSystem
{
    id <IMBFileSystem> _mAssetsFS;
    id <IMBFileSystem> _mWxaPkgFS;
    NSMutableSet *_mBizNameList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *mBizNameList; // @synthesize mBizNameList=_mBizNameList;
@property(retain, nonatomic) id <IMBFileSystem> mWxaPkgFS; // @synthesize mWxaPkgFS=_mWxaPkgFS;
@property(retain, nonatomic) id <IMBFileSystem> mAssetsFS; // @synthesize mAssetsFS=_mAssetsFS;
- (void)addPkgFS:(id)arg1 pkgPath:(id)arg2 prefix:(id)arg3 assetsFS:(id)arg4 externalFS:(id)arg5;
- (id)getPkgFileSystem:(id)arg1 bizName:(id)arg2;
- (id)getFlattenFileSystem:(id)arg1 prefix:(id)arg2;
- (id)getNonFlattenFileSystem:(id)arg1 prefix:(id)arg2;
- (void)provideFileSystemList:(id)arg1;
- (id)findOtherBizName:(id)arg1;
- (id)findAppropriateFileSystem:(id)arg1;
- (id)precondition:(id)arg1;
- (void)dealloc;
- (id)initWithPara:(id)arg1 pkgPath:(id)arg2 prefix:(id)arg3 assetsFS:(id)arg4 bizNameList:(id)arg5;

@end

