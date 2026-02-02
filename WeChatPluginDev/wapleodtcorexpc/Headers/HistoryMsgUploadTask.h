//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, MultiMediaUploadUnifyMgr, NSString, OpenUploadCDNMgr, OpenUploadVideoCDNMgr, RecordUploadCDNMgr, UploadImageCDNMgr, VideoUploadUnifyMgr;
@protocol HistoryMsgUploadTaskDelegate;

@interface HistoryMsgUploadTask : NSObject
{
    CMessageWrap *_msgWrap;
    id <HistoryMsgUploadTaskDelegate> _delegate;
    UploadImageCDNMgr *_uploadImageCdnMgr;
    VideoUploadUnifyMgr *_uploadVideoCdnMgr;
    RecordUploadCDNMgr *_recordUploadCDNMgr;
    MultiMediaUploadUnifyMgr *_multiMediaUploadUnifyMgr;
    OpenUploadCDNMgr *_openUploadCDNMgr;
    OpenUploadVideoCDNMgr *_openUploadVideoCDNMgr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OpenUploadVideoCDNMgr *openUploadVideoCDNMgr; // @synthesize openUploadVideoCDNMgr=_openUploadVideoCDNMgr;
@property(retain, nonatomic) OpenUploadCDNMgr *openUploadCDNMgr; // @synthesize openUploadCDNMgr=_openUploadCDNMgr;
@property(retain, nonatomic) MultiMediaUploadUnifyMgr *multiMediaUploadUnifyMgr; // @synthesize multiMediaUploadUnifyMgr=_multiMediaUploadUnifyMgr;
@property(retain, nonatomic) RecordUploadCDNMgr *recordUploadCDNMgr; // @synthesize recordUploadCDNMgr=_recordUploadCDNMgr;
@property(retain, nonatomic) VideoUploadUnifyMgr *uploadVideoCdnMgr; // @synthesize uploadVideoCdnMgr=_uploadVideoCdnMgr;
@property(retain, nonatomic) UploadImageCDNMgr *uploadImageCdnMgr; // @synthesize uploadImageCdnMgr=_uploadImageCdnMgr;
@property(nonatomic) __weak id <HistoryMsgUploadTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
- (void)OnUploadMsgDataFail:(id)arg1;
- (void)OnUploadRecordMsgDataSuccess:(id)arg1;
- (void)OnUploadMsgDataSuccess:(id)arg1;
- (void)stopUpload;
- (void)startUpload;
- (id)genImageMsgWrap:(id)arg1;
- (id)genOpenUploadQueuePath;
- (id)initWithDelegate:(id)arg1 MsgWrap:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

