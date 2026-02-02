//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface WCInputTextCacheMgr : NSObject
{
    NSMutableArray *_arrCacheText;
    NSMutableDictionary *_dicRedEnvelopesReceiveInfo;
    _Bool m_bNeedCacheRecieveInfo;
    NSMutableDictionary *pasteLengthDic;
    NSMutableDictionary *extBeanDic;
}

- (void).cxx_destruct;
- (void)onServiceMemoryWarning;
- (void)onServiceTerminate;
- (void)onServiceEnterBackground;
- (void)saveAllCache;
- (id)getRedEnvelopesInfoByDataItem:(id)arg1;
- (void)cacheFreeStatus:(id)arg1;
- (void)cacheRewardStatus:(id)arg1;
- (void)saveRedEnvelopesReceiveInfo;
- (id)getCacheText:(id)arg1 refCommentItem:(id)arg2 PasteLogic:(id)arg3 withExtBean:(id)arg4;
- (void)cacheText:(id)arg1 refDataItem:(id)arg2 refCommentItem:(id)arg3 PasteLogic:(id)arg4 withExtBean:(id)arg5;
- (void)uncacheText:(id)arg1 refCommentItem:(id)arg2;
- (id)cacheTextKey:(id)arg1 refCommentItem:(id)arg2;
- (void)dealloc;
- (void)saveCacheText;
- (id)init;

@end

