//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@class NSData, NSMutableArray;

@interface WCFinderSnsGetLiveObjectListRequest : NSObject
{
    NSData *_lastBuffer;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
    NSMutableArray *_readStats;
}

@property(retain, nonatomic) NSMutableArray *readStats; // @synthesize readStats=_readStats;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initRequestWith:(id)arg1 readStats:(id)arg2 successful:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;

@end
