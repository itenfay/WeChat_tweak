//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CdnSnsTaskInfo, NSString, WCUploadMedia;
@protocol WCMediaUploaderDelegate;

@interface WCMediaUploader
{
    int currentPos;
    long long uploadResult;
    long long uploadErrType;
    WCUploadMedia *m_media;
    id <WCMediaUploaderDelegate> m_delegate;
    CdnSnsTaskInfo *m_oCdnSnsTaskInfo;
    NSString *m_clientMediaID;
    _Bool m_useC2C;
    _Bool m_useWebp;
    _Bool m_useVCodec;
    _Bool m_useWxpc;
    unsigned int sightEventID;
    NSString *m_appID;
    int m_objectType;
    _Bool _shouldOptimizeThumb;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldOptimizeThumb; // @synthesize shouldOptimizeThumb=_shouldOptimizeThumb;
@property(nonatomic) int m_objectType; // @synthesize m_objectType;
@property(retain, nonatomic) NSString *m_appID; // @synthesize m_appID;
@property(nonatomic) __weak id <WCMediaUploaderDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic, setter=setMedia:) WCUploadMedia *m_media; // @synthesize m_media;
- (void)onResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)onRequest:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)onSetRequest:(id)arg1;
- (void)setFinished;
- (void)tryNextRequest;
- (void)tryReportErrRetCode:(int)arg1 type:(int)arg2;
- (void)OnCdnUpload:(id)arg1;
- (_Bool)isOverRoladRetCode:(int)arg1;
- (id)generateCustomRequestHeaders;
- (void)cancelWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)canInterrupt;
- (_Bool)startRequest;
- (void)dealloc;
- (id)init;

@end

