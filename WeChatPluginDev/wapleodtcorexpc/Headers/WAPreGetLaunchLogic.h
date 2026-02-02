//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WAPreGetLaunchLogic : NSObject
{
    NSMutableArray *_arrFetchingCmds;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrFetchingCmds; // @synthesize arrFetchingCmds=_arrFetchingCmds;
- (void)onGetLaunchPermissionInfo:(id)arg1 isSuccess:(_Bool)arg2 errorCode:(int)arg3;
- (id)getFetchingCmdForAppid:(id)arg1 username:(id)arg2;
- (void)unMarkFetchingAppid:(id)arg1 username:(id)arg2;
- (_Bool)isFetchingAppid:(id)arg1 username:(id)arg2;
- (void)unMarkFetchingCmd:(id)arg1;
- (void)markFetchingCmd:(id)arg1;
- (void)doPreGetLaunchCmd:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

