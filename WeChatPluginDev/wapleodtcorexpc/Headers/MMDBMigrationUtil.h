//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMDBMigrationUtil
{
    NSString *m_flagPath;
}

- (void).cxx_destruct;
- (void)setFlagFinished:(unsigned long long)arg1;
- (_Bool)isFlagFinished:(unsigned long long)arg1;
- (unsigned long long)readValueFromFile;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

