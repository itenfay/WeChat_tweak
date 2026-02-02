//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCCardBulkImportMgrDelegate;

@interface WCCardBulkImportMgr
{
    id <WCCardBulkImportMgrDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)handleImportBulkCardResp:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetBulkCardResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)importBulkCard:(id)arg1;
- (void)getBulkCard:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

