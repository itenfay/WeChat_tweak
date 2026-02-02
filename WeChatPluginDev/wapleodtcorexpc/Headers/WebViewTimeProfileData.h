//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WebViewTimeProfileData
{
    unsigned long long m_initTimeStamp;
    unsigned long long m_getA8KeyTimeStamp;
    unsigned long long m_startLoadTimeStamp;
    unsigned long long m_finishLoadTimeStamp;
    unsigned long long _m_mainFrameGetA8KeyStartTimestamp;
    unsigned long long _m_mainFrameGetA8KeyEndTimestamp;
    unsigned long long _m_mainFrameLoadStartTimestamp;
    unsigned long long _m_mainFrameCommitTimestamp;
    unsigned long long _m_mainFrameLoadEndTimestamp;
}

@property(nonatomic) unsigned long long m_mainFrameLoadEndTimestamp; // @synthesize m_mainFrameLoadEndTimestamp=_m_mainFrameLoadEndTimestamp;
@property(nonatomic) unsigned long long m_mainFrameCommitTimestamp; // @synthesize m_mainFrameCommitTimestamp=_m_mainFrameCommitTimestamp;
@property(nonatomic) unsigned long long m_mainFrameLoadStartTimestamp; // @synthesize m_mainFrameLoadStartTimestamp=_m_mainFrameLoadStartTimestamp;
@property(nonatomic) unsigned long long m_mainFrameGetA8KeyEndTimestamp; // @synthesize m_mainFrameGetA8KeyEndTimestamp=_m_mainFrameGetA8KeyEndTimestamp;
@property(nonatomic) unsigned long long m_mainFrameGetA8KeyStartTimestamp; // @synthesize m_mainFrameGetA8KeyStartTimestamp=_m_mainFrameGetA8KeyStartTimestamp;
@property(nonatomic) unsigned long long m_finishLoadTimeStamp; // @synthesize m_finishLoadTimeStamp;
@property(nonatomic) unsigned long long m_startLoadTimeStamp; // @synthesize m_startLoadTimeStamp;
@property(nonatomic) unsigned long long m_getA8KeyTimeStamp; // @synthesize m_getA8KeyTimeStamp;
@property(nonatomic) unsigned long long m_initTimeStamp; // @synthesize m_initTimeStamp;

@end

