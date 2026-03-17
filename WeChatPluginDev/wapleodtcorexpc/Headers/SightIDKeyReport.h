//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface SightIDKeyReport : NSObject
{
}

+ (void)reportSWTransCodingPrams:(struct ReportStaticPrams)arg1 mEncDecPrams:(struct EncDecPrams)arg2 mTranscodingPrams:(struct TranscodingPrams)arg3 Scene:(int)arg4;
+ (void)reportConcreteABAPrams:(int)arg1 videosize:(struct CGSize)arg2 inPara:(struct WxVideoTransParaABA)arg3 abaReportPrams:(id)arg4 VideoEncodeParams:(id)arg5 consumingTime:(long long)arg6 abaControlPrams:(struct ABAControlParams)arg7;
+ (void)reportCompressVideoFailed;
+ (void)reportUploadSnsRecordVideo:(id)arg1;
+ (void)reportUploadSnsAlbumVideo:(id)arg1 containsWXTag:(_Bool)arg2;
+ (void)reportUploadC2CRecordVideo:(id)arg1;
+ (void)reportUploadC2CAlbumVideo:(id)arg1 selectedKbpsLevel:(int)arg2 containsWXTag:(_Bool)arg3;
+ (void)reportDownloadResult:(_Bool)arg1;
+ (void)reportUploadResult:(_Bool)arg1;
+ (void)reportUploadSize:(unsigned int)arg1;

@end

