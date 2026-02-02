//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCDBLockableDatabase
{
    struct WCDBLockGuard _lockGuard;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)lockGuard:(void *)arg1;
- (id)initWithDatabase:(id)arg1;

@end

