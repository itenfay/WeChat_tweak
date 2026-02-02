//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonUploadInfoObj, NSData, NSString;
@protocol EmojiUploadCgiDelegate;

@interface EmojiUploadCgi
{
    NSString *m_md5;
    unsigned int m_totalLen;
    unsigned long long m_requestStartTime;
    _Bool m_overLimit;
    _Bool m_isTooLarge;
    _Bool m_isConnectFailed;
    _Bool m_isAntiSpam;
    unsigned int m_startPos;
    NSData *m_buffer;
    NSString *m_realMd5;
    EmoticonUploadInfoObj *_uploadInfoObj;
    id <EmojiUploadCgiDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <EmojiUploadCgiDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) EmoticonUploadInfoObj *uploadInfoObj; // @synthesize uploadInfoObj=_uploadInfoObj;
@property(readonly, nonatomic) _Bool isAntiSpam; // @synthesize isAntiSpam=m_isAntiSpam;
@property(readonly, nonatomic) _Bool isConnectFailed; // @synthesize isConnectFailed=m_isConnectFailed;
@property(readonly, nonatomic) _Bool isTooLarge; // @synthesize isTooLarge=m_isTooLarge;
@property(readonly, nonatomic) _Bool overLimit; // @synthesize overLimit=m_overLimit;
@property(readonly, nonatomic) NSString *realMd5; // @synthesize realMd5=m_realMd5;
@property(readonly, nonatomic) NSData *buffer; // @synthesize buffer=m_buffer;
@property(readonly, nonatomic) unsigned int startPos; // @synthesize startPos=m_startPos;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (_Bool)startRequestWithStartPos:(unsigned int)arg1 buffer:(id)arg2;
- (id)initWithMd5:(id)arg1 totalLen:(unsigned int)arg2;

@end

