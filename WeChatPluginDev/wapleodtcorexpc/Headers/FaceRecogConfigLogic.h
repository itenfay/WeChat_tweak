//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CdnInfo, NSDictionary, NSString;
@protocol FaceRecogConfigLogicDelegate;

@interface FaceRecogConfigLogic
{
    CdnInfo *_cdnInfo;
    _Bool _bRSA;
    int _bioCheckLiveFlag;
    int _idcRedirectCount;
    id <FaceRecogConfigLogicDelegate> _delegate;
    NSString *_appId;
    NSString *_verifyInfo;
    id _liveSelectData;
    double _faceRatio;
    unsigned long long _bioId;
    NSString *_configBuffer;
    NSDictionary *_liveSelect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *liveSelect; // @synthesize liveSelect=_liveSelect;
@property(nonatomic) int idcRedirectCount; // @synthesize idcRedirectCount=_idcRedirectCount;
@property(retain, nonatomic) NSString *configBuffer; // @synthesize configBuffer=_configBuffer;
@property(nonatomic) unsigned long long bioId; // @synthesize bioId=_bioId;
@property(nonatomic) double faceRatio; // @synthesize faceRatio=_faceRatio;
@property(retain, nonatomic) id liveSelectData; // @synthesize liveSelectData=_liveSelectData;
@property(retain, nonatomic) NSString *verifyInfo; // @synthesize verifyInfo=_verifyInfo;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) int bioCheckLiveFlag; // @synthesize bioCheckLiveFlag=_bioCheckLiveFlag;
@property(nonatomic) __weak id <FaceRecogConfigLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleGetBioConfig:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)unInitCdnInfo;
- (void)initCdnInfo;
- (_Bool)startRsaGetBioConfigForType:(unsigned int)arg1 atScene:(unsigned int)arg2 userTicket:(id)arg3;
- (_Bool)startGetBioConfigForType:(unsigned int)arg1 atScene:(unsigned int)arg2 userTicket:(id)arg3 isRsa:(_Bool)arg4;
- (_Bool)startGetBioConfigForType:(unsigned int)arg1 atScene:(unsigned int)arg2;
- (id)getConfigBuffer;
- (unsigned long long)getBioId;
- (_Bool)isConfigReady;
- (void)resetConfig;
- (void)dealloc;

@end

