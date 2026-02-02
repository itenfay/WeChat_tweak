//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMPRConfigCGI
{
    CDUnknownBlockType _completion;
    CDUnknownBlockType _failed;
    NSString *_appId;
    NSString *_baseId;
    NSString *_pid;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSString *baseId; // @synthesize baseId=_baseId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) CDUnknownBlockType failed; // @synthesize failed=_failed;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (id)getLiteAppConditions;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest:(_Bool)arg1;
- (id)initWithPkgList:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (id)initWithAppId:(id)arg1 baseId:(id)arg2 pid:(id)arg3 isAutoCheck:(_Bool)arg4 completionBlock:(CDUnknownBlockType)arg5 failed:(CDUnknownBlockType)arg6;

@end

