//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiteAppViewController, NSMutableDictionary, NSString;

@interface StoreEmoticonLiteAppDownloadMgr : NSObject
{
    MMLiteAppViewController *_currentVC;
    NSMutableDictionary *_donwloadLogicDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *donwloadLogicDic; // @synthesize donwloadLogicDic=_donwloadLogicDic;
@property(nonatomic) __weak MMLiteAppViewController *currentVC; // @synthesize currentVC=_currentVC;
- (void)onDownloadStatusChangeTo:(long long)arg1 pid:(id)arg2;
- (void)onDownloadProgress:(float)arg1 pid:(id)arg2;
- (void)doOperation:(long long)arg1 forPid:(id)arg2 downloadType:(long long)arg3 reportInfo:(id)arg4;
- (void)registerStoreItem:(id)arg1 scene:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

