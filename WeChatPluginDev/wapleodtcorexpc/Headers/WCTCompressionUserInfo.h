//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCTCompressionUserInfo
{
    void *m_userInfo;
}

- (void)enableReplaceCompression;
- (void)addZSTDDictCompressProperty:(const void *)arg1 withMatchProperty:(const void *)arg2 andMatchDicts:(id)arg3;
- (void)addZSTDDictCompressProperty:(const void *)arg1 withDictId:(unsigned char)arg2;
- (void)addZSTDNormalCompressProperty:(const void *)arg1;
- (id)initWithUserInfo:(void *)arg1;

@end

