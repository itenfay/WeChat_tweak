//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMusicVideoImageDownloader, NSString, SendAppMsgHandler;
@protocol MMMusicForwardHandlerDataSource, MMMusicForwardHandlerDelegate;

@interface MMMusicForwardHandler
{
    id <MMMusicForwardHandlerDataSource> _dataSource;
    id <MMMusicForwardHandlerDelegate> _delegate;
    unsigned long long _pushedFromType;
    unsigned long long _curShareSource;
    SendAppMsgHandler *_sendAppMsgHandler;
    MMMusicVideoImageDownloader *_imageDownLoader;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMMusicVideoImageDownloader *imageDownLoader; // @synthesize imageDownLoader=_imageDownLoader;
@property(retain, nonatomic) SendAppMsgHandler *sendAppMsgHandler; // @synthesize sendAppMsgHandler=_sendAppMsgHandler;
@property(nonatomic) unsigned long long curShareSource; // @synthesize curShareSource=_curShareSource;
@property(nonatomic) unsigned long long pushedFromType; // @synthesize pushedFromType=_pushedFromType;
@property(nonatomic) __weak id <MMMusicForwardHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MMMusicForwardHandlerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)getUpLoadTask:(id)arg1 musicInfo:(id)arg2;
- (id)getMessageWrap:(id)arg1 musicInfo:(id)arg2;
- (id)getCoverImageDataWithDefault:(id)arg1 musicInfo:(id)arg2;
- (id)getCoverImageData:(id)arg1;
- (id)genLogMusicInfo:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)OnSendAppMsgOKToContacts:(id)arg1;
- (void)doShareToWCWithImageData:(id)arg1 musicInfo:(id)arg2;
- (void)shareToWcWithSource:(unsigned long long)arg1 musicInfo:(id)arg2 mvModel:(id)arg3;
- (void)doShareToFriendsWithImageData:(id)arg1 musicInfo:(id)arg2;
- (void)shareToFriendsWithSource:(unsigned long long)arg1 musicInfo:(id)arg2 mvModel:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)shareToFriendsWithSource:(unsigned long long)arg1 musicInfo:(id)arg2 mvModel:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

