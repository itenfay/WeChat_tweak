//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, ForwardMessageLogicController, NSString, WCDataItem, WCMediaItem;
@protocol WCMomentsForwardBaseOpDelegate;

@interface WCMomentsForwardBaseOp
{
    _Bool _isToCustomContact;
    ForwardMessageLogicController *_forwardMsgLogic;
    WCDataItem *_dataItem;
    WCMediaItem *_mediaItem;
    CMessageWrap *_messageWrap;
    long long _browseScene;
    NSString *_forwardMessageLogicReportUserInfo;
    id <WCMomentsForwardBaseOpDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCMomentsForwardBaseOpDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *forwardMessageLogicReportUserInfo; // @synthesize forwardMessageLogicReportUserInfo=_forwardMessageLogicReportUserInfo;
@property(nonatomic) long long browseScene; // @synthesize browseScene=_browseScene;
@property(nonatomic) _Bool isToCustomContact; // @synthesize isToCustomContact=_isToCustomContact;
@property(retain, nonatomic) CMessageWrap *messageWrap; // @synthesize messageWrap=_messageWrap;
@property(readonly, nonatomic) WCMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(readonly, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)OnForwardMessageConfirmCanceled:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (id)mediaItemDescription;
@property(readonly, copy) NSString *description;
- (id)getToContacts;
@property(readonly, nonatomic) ForwardMessageLogicController *forwardMsgLogic; // @synthesize forwardMsgLogic=_forwardMsgLogic;
- (id)genMesssageWrap;
- (_Bool)startForwardToCustomContact:(id)arg1;
- (void)dealloc;
- (id)initWithDataItem:(id)arg1 mediaItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

