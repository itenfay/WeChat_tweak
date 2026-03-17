//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@protocol WCFinderUserPrepareCgiDelegate;

@interface WCFinderUserPrepareCgi : NSObject
{
    int _scene;
    id <WCFinderUserPrepareCgiDelegate> _delegate;
    CDUnknownBlockType _failBlock;
    CDUnknownBlockType _successfulBlock;
}

@property(copy, nonatomic) CDUnknownBlockType successfulBlock; // @synthesize successfulBlock=_successfulBlock;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(nonatomic) __weak id <WCFinderUserPrepareCgiDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int scene; // @synthesize scene=_scene;
- (id)logInfoWithObject:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)start;
- (id)init;

@end
