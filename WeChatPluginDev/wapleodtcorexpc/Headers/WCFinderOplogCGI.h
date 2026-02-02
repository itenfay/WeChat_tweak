//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary;

@interface WCFinderOplogCGI
{
    NSMutableDictionary *_handlerMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *handlerMap; // @synthesize handlerMap=_handlerMap;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)addCmdId:(int)arg1 responseClass:(Class)arg2 handler:(CDUnknownBlockType)arg3;
- (id)initWithRequest:(id)arg1;

@end

