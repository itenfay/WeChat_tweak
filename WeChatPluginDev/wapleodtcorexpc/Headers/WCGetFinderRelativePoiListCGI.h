//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface WCGetFinderRelativePoiListCGI
{
    NSData *_lastBuffer;
    NSString *_finderUsername;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithLastBuffer:(id)arg1 finderUsername:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;

@end

