//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;

@interface _TtC6WeChat18PredownloadService
{
    MISSING_TYPE *C2C;
}

- (void).cxx_destruct;
- (id)init;
- (void)onUserClickRequestFile:(id)arg1;
- (void)onUserClickFile:(id)arg1;
- (void)onUserClickVideo:(id)arg1 inFullScreenView:(_Bool)arg2;
- (void)onUserClickImage:(id)arg1 byChangePage:(_Bool)arg2;
- (void)OnBeginDownloadVideo:(id)arg1 mode:(unsigned long long)arg2;
- (void)OnBeginDownloadImage:(id)arg1 HD:(_Bool)arg2 autoDownload:(_Bool)arg3 behavior:(long long)arg4;
- (_Bool)isC2CImageEnabledWithIsChatRoom:(_Bool)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;

@end

