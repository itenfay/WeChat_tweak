//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, NSMutableArray;
@protocol AutoplayControllerDelegate;

@interface AutoplayController
{
    NSMutableArray *m_arrMessageArray;
    _Bool _autoPlayEnabled;
    _Bool _paused;
    id <AutoplayControllerDelegate> _delegate;
    CMessageWrap *_currentPlayingMsg;
}

+ (id)generateWithMsg:(id)arg1 delegate:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) CMessageWrap *currentPlayingMsg; // @synthesize currentPlayingMsg=_currentPlayingMsg;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(readonly, nonatomic) _Bool autoPlayEnabled; // @synthesize autoPlayEnabled=_autoPlayEnabled;
@property(nonatomic) __weak id <AutoplayControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnEndPlaying:(id)arg1 isForceStop:(_Bool)arg2;
- (void)tryLoadMoreMsgFromID:(unsigned int)arg1;
- (void)PlayList;
- (id)initWithMsg:(id)arg1 delegate:(id)arg2;

@end

