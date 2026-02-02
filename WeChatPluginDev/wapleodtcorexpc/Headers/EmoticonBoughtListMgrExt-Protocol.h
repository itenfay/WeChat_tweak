//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;

@protocol EmoticonBoughtListMgrExt

@optional
- (void)OnRestoreEmoticonItemFailed;
- (void)OnRestoreEmoticonItemSuccess;
- (void)OnBoughtListChanged:(NSMutableArray *)arg1 withRet:(unsigned long long)arg2;
@end

