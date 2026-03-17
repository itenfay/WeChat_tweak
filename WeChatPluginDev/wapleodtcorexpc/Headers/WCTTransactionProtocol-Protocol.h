//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCTTransactionProtocol
- (_Bool)runPausableTransactionWithOneLoop:(_Bool (^)(WCTHandle *, _Bool *, _Bool))arg1;
- (_Bool)runTransaction:(_Bool (^)(WCTHandle *))arg1;
- (void)rollbackTransaction;
- (_Bool)commitOrRollbackTransaction;
- (_Bool)beginTransaction;
- (_Bool)isInTransaction;
@end

