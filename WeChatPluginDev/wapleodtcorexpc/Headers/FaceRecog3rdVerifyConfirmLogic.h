//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSMutableArray, NSString, UIColor;
@protocol FaceRecog3rdVerifyConfirmLogicDelegate;

@interface FaceRecog3rdVerifyConfirmLogic
{
    _Bool _bDefaultConfirm;
    unsigned int _sourceType;
    unsigned int _checkAliveType;
    float _lightThreshold;
    id <FaceRecog3rdVerifyConfirmLogicDelegate> _delegate;
    NSMutableArray *_confirmInfos;
    NSDictionary *_prompts;
    NSString *_bizNickName;
    NSString *_headerPromptWording;
    NSString *_feedbackUrl;
    NSString *_feedbackUrlForConfirmView;
    NSString *_businessTip;
    UIColor *_businessTipColor;
    NSString *_businessHeadUrl;
    double _faceFrameRatio;
    NSString *_verifyResult;
    NSString *_overseaDesc;
    NSString *_overseaAgreement;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *overseaAgreement; // @synthesize overseaAgreement=_overseaAgreement;
@property(retain, nonatomic) NSString *overseaDesc; // @synthesize overseaDesc=_overseaDesc;
@property(retain, nonatomic) NSString *verifyResult; // @synthesize verifyResult=_verifyResult;
@property(nonatomic) double faceFrameRatio; // @synthesize faceFrameRatio=_faceFrameRatio;
@property(nonatomic) float lightThreshold; // @synthesize lightThreshold=_lightThreshold;
@property(nonatomic) _Bool bDefaultConfirm; // @synthesize bDefaultConfirm=_bDefaultConfirm;
@property(nonatomic) unsigned int checkAliveType; // @synthesize checkAliveType=_checkAliveType;
@property(retain, nonatomic) NSString *businessHeadUrl; // @synthesize businessHeadUrl=_businessHeadUrl;
@property(retain, nonatomic) UIColor *businessTipColor; // @synthesize businessTipColor=_businessTipColor;
@property(retain, nonatomic) NSString *businessTip; // @synthesize businessTip=_businessTip;
@property(retain, nonatomic) NSString *feedbackUrlForConfirmView; // @synthesize feedbackUrlForConfirmView=_feedbackUrlForConfirmView;
@property(retain, nonatomic) NSString *feedbackUrl; // @synthesize feedbackUrl=_feedbackUrl;
@property(retain, nonatomic) NSString *headerPromptWording; // @synthesize headerPromptWording=_headerPromptWording;
@property(retain, nonatomic) NSString *bizNickName; // @synthesize bizNickName=_bizNickName;
@property(retain, nonatomic) NSDictionary *prompts; // @synthesize prompts=_prompts;
@property(retain, nonatomic) NSMutableArray *confirmInfos; // @synthesize confirmInfos=_confirmInfos;
@property(nonatomic) unsigned int sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) __weak id <FaceRecog3rdVerifyConfirmLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleGetConfirmInfo:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)startGetConfirmInfo:(id)arg1 verifyInfo:(id)arg2;
- (void)resetLogicState;

@end

