//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPReportHelper : NSObject
{
}

+ (long long)findTarget:(long long)arg1 inTable:(const long long (*)[2])arg2 withTableColumns:(long long)arg3 defaultValue:(long long)arg4;
+ (long long)TPRendererTypeToTPReportAudioRendererType:(long long)arg1;
+ (long long)TPRendererTypeToTPReportVideoRendererType:(long long)arg1;
+ (long long)TPDemuxerTypeToTPReportDemuxerType:(long long)arg1;
+ (long long)TPDecoderTypeToTPReportAudioDecoderType:(long long)arg1;
+ (long long)TPDecoderTypeToTPReportVideoDecoderType:(long long)arg1;
+ (long long)TPDrmSecureLevelToTPReportDrmSecureLevel:(long long)arg1;
+ (long long)TPDrmTypeToTPReportDrmType:(long long)arg1;
+ (long long)TPUrlProtocolTypeToTPReportUrlProtocolType:(long long)arg1;
+ (long long)TPPlayerTypeToTPReportPlayerType:(long long)arg1;
+ (long long)TPHlsTypeToTPReportHlsSourceType:(long long)arg1;
+ (long long)TPNetworkTypeToTPReportNetworkType:(long long)arg1;
+ (long long)TPMediaTrackTypeToTPReportMediaTrackType:(unsigned long long)arg1;

@end

