//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCFinderLiveTestSpeedCGI
{
    unsigned int _sceneCode;
    unsigned int _opCode;
    unsigned int _uploadSize;
    unsigned int _downloadSize;
    unsigned int _concurrentNum;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int concurrentNum; // @synthesize concurrentNum=_concurrentNum;
@property(nonatomic) unsigned int downloadSize; // @synthesize downloadSize=_downloadSize;
@property(nonatomic) unsigned int uploadSize; // @synthesize uploadSize=_uploadSize;
@property(nonatomic) unsigned int opCode; // @synthesize opCode=_opCode;
@property(nonatomic) unsigned int sceneCode; // @synthesize sceneCode=_sceneCode;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithSceneCode:(unsigned int)arg1 opCode:(unsigned int)arg2 uploadSize:(unsigned int)arg3 downloadSize:(unsigned int)arg4 concurrentNum:(unsigned int)arg5 successBlock:(CDUnknownBlockType)arg6 failBlock:(CDUnknownBlockType)arg7;

@end

