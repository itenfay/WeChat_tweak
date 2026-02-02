//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCTDatabase;

@interface EdgeComputingWCDBManager
{
    WCTDatabase *edgeDatabase;
}

- (void).cxx_destruct;
- (unsigned long long)queryRowNum:(id)arg1;
- (id)querySQL:(id)arg1;
- (_Bool)execuSQL:(id)arg1;
- (void)close;
- (void)dealloc;
- (id)init:(id)arg1;

@end

