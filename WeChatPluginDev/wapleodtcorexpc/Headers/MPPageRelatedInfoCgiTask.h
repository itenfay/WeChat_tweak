//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableSet;

@interface MPPageRelatedInfoCgiTask
{
    NSArray *_urlInfoArr;
    NSMutableSet *_pageIdentifierSet;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSMutableSet *pageIdentifierSet; // @synthesize pageIdentifierSet=_pageIdentifierSet;
@property(retain, nonatomic) NSArray *urlInfoArr; // @synthesize urlInfoArr=_urlInfoArr;
- (void)callbackTaskSuccess:(id)arg1;
- (void)callbackTaskFail;
- (void)handleAppMsgRelatedResp:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)isTaskContainUrlInfo:(id)arg1;
- (void)stopTask;
- (void)startTask;
- (void)dealloc;
- (id)initWithUrlInfoArr:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

