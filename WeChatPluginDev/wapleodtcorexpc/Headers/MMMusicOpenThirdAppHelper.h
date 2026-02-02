//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol MMMusicOpenThirdAppHelperDataSource, MMMusicOpenThirdAppHelperDelegate;

@interface MMMusicOpenThirdAppHelper
{
    id <MMMusicOpenThirdAppHelperDataSource> _dataSource;
    id <MMMusicOpenThirdAppHelperDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMMusicOpenThirdAppHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MMMusicOpenThirdAppHelperDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)open3rdAppToAppStore:(unsigned long long)arg1 downloadURL:(id)arg2;
- (void)open3rdAppByReqWithMusicInfo:(id)arg1 source:(unsigned long long)arg2 downloadURL:(id)arg3;
- (void)openMusicAppWithScheme:(id)arg1 source:(unsigned long long)arg2 downloadURL:(id)arg3;
- (void)openQQMusicAppWithMusicInfo:(id)arg1 source:(unsigned long long)arg2 downloadURL:(id)arg3;
- (void)tryOpenMembershipWithAppId:(id)arg1 ticket:(id)arg2;
- (void)tryOpenMembershipWithMusicInfo:(id)arg1 ticket:(id)arg2;
- (void)tryOpenMembershipWithAppId:(id)arg1 mid:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)tryOpenThirdAppWithMusicInfo:(id)arg1 andSource:(unsigned long long)arg2;

@end

