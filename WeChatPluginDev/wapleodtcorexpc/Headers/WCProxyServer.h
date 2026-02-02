//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;

@interface WCProxyServer
{
    NSMutableArray *_arrGuests;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (int)convertPicType:(id)arg1;
- (void)setResponseHeaderFor:(id)arg1 from:(id)arg2;
- (id)sendSynchronousRequest:(id)arg1 returningResponse:(id *)arg2 error:(id *)arg3;
- (id)handleHevcRequest:(id)arg1;
- (void)stop;
- (_Bool)start;
- (void)wx_tryStop:(id)arg1;
- (_Bool)wx_tryStart:(id)arg1;
- (id)init;
- (void)dealloc;

@end

