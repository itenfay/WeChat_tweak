//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCTError, WCTHandle;

@interface WCTChainCall : NSObject
{
    WCTHandle *_handle;
    unsigned long long _disposeAction;
    int _changes;
    WCTError *_error;
}

- (void).cxx_destruct;
- (void)tryDispose;
- (void)saveChangesAndError:(_Bool)arg1;
- (id)finalizeStatementWhenDispose;
- (id)invalidateWhenDispose;
- (int)getChanges;
- (id)error;
- (id)initWithHandle:(id)arg1;

@end

