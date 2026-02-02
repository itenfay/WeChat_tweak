//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;
@protocol EmoticonLensInfoBatchCgiDelegate;

@interface EmoticonLensInfoBatchCgi
{
    _Bool _isRunning;
    NSMutableArray *_waitingQueue;
    id <EmoticonLensInfoBatchCgiDelegate> _delegate;
    NSMutableArray *_successLensInfos;
    NSMutableArray *_failLensIds;
    NSString *_currentLensId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *currentLensId; // @synthesize currentLensId=_currentLensId;
@property(retain, nonatomic) NSMutableArray *failLensIds; // @synthesize failLensIds=_failLensIds;
@property(retain, nonatomic) NSMutableArray *successLensInfos; // @synthesize successLensInfos=_successLensInfos;
@property(nonatomic) __weak id <EmoticonLensInfoBatchCgiDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(retain, nonatomic) NSMutableArray *waitingQueue; // @synthesize waitingQueue=_waitingQueue;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)requestNextLens;
- (void)requestLensIds:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

