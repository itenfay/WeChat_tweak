//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCSQLiteLintDataSourceDelegate;

@interface WCSQLiteLintPlugin
{
    id <WCSQLiteLintDataSourceDelegate> _deleagte;
}

+ (id)getTag;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WCSQLiteLintDataSourceDelegate> deleagte; // @synthesize deleagte=_deleagte;
- (id)getReportDataFromIssue:(void *)arg1;
- (function_fdb5bcff)getSQLiteExcutionCallback;
- (function_ddadd5d5)getIssueCallback;
- (id)getStackInfo;
- (void)notifyExcution:(id)arg1 withCost:(double)arg2 onDB:(id)arg3;
- (_Bool)shouldCheck:(id)arg1 onDatabase:(id)arg2;
- (void)setWhiteList:(id)arg1 forDB:(id)arg2;
- (void)uninstallSQLiteLintOnDB:(id)arg1;
- (void)installSQLiteLintOnDB:(id)arg1;
- (id)init;

@end

