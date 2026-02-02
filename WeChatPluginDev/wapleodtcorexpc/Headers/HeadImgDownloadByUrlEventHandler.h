//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface HeadImgDownloadByUrlEventHandler
{
}

+ (void)saveImageWithData:(id)arg1 request:(id)arg2;
- (void)OnProtocolResponse:(id)arg1 shouldContinue:(_Bool *)arg2;
- (void)OnProtocolConnectFail:(id)arg1;
- (id)getSaveDataFromCGIWrap:(id)arg1;
- (void)saveImageDataForCGIWrap:(id)arg1;

@end

