//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface NetSceneCheckMagicUpdate
{
    CDUnknownBlockType _completionHandler;
    NSString *_mPackageId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *mPackageId; // @synthesize mPackageId=_mPackageId;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (id)getDefaultConditions;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)checkMagicPkgUpdateWithCondition:(id)arg1 base:(id)arg2 patch:(id)arg3 check:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)dealloc;

@end

