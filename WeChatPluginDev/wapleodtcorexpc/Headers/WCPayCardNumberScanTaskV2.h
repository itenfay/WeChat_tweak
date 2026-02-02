//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString, WCPayBizOcrImageCgi;
@protocol WCPayCardNumberScanTaskV2Delegate;

@interface WCPayCardNumberScanTaskV2 : NSObject
{
    int _source;
    unsigned int _seqNum;
    NSData *_m_imageData;
    NSString *_sessionKey;
    id <WCPayCardNumberScanTaskV2Delegate> _m_delegate;
    WCPayBizOcrImageCgi *_m_cgi;
}

- (void).cxx_destruct;
@property(retain) WCPayBizOcrImageCgi *m_cgi; // @synthesize m_cgi=_m_cgi;
@property __weak id <WCPayCardNumberScanTaskV2Delegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain) NSString *sessionKey; // @synthesize sessionKey=_sessionKey;
@property unsigned int seqNum; // @synthesize seqNum=_seqNum;
@property int source; // @synthesize source=_source;
@property(retain) NSData *m_imageData; // @synthesize m_imageData=_m_imageData;
- (id)imageTrimmingTransparent:(id)arg1;
- (id)image:(id)arg1 rotatedByAngle:(double)arg2;
- (double)angleFromLeftTop:(struct CGPoint)arg1 rightTop:(struct CGPoint)arg2;
- (id)image:(id)arg1 MaskingPath:(id)arg2;
- (id)cropImage:(id)arg1 leftTop:(struct CGPoint)arg2 rightTop:(struct CGPoint)arg3 rightBottom:(struct CGPoint)arg4 leftBottom:(struct CGPoint)arg5;
- (id)sizeImage:(id)arg1 leftTop:(struct CGPoint)arg2 rightTop:(struct CGPoint)arg3 rightBottom:(struct CGPoint)arg4 leftBottom:(struct CGPoint)arg5;
- (id)matchImageFromSeqNum:(unsigned int)arg1 leftTop:(struct CGPoint)arg2 rightTop:(struct CGPoint)arg3 rightBottom:(struct CGPoint)arg4 leftBottom:(struct CGPoint)arg5;
- (void)onWCPayBizOcrImageCgiNetworkError:(id)arg1;
- (void)onWCPayBizOcrImageCgiResp:(id)arg1;
- (void)start;
- (void)updateDelegate:(id)arg1;
- (id)initWithImage:(id)arg1 delegate:(id)arg2 source:(unsigned int)arg3 seqNum:(unsigned int)arg4 sessionKey:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

