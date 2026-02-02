//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;
@protocol FaceRecogPayConfigLogicDelegate;

@interface FaceRecogPayConfigLogic
{
    NSString *_actionBioId;
    NSString *_actionData;
    double _reductionRatio;
    NSString *_takeMessage;
    NSString *_actionHint;
    NSString *_colorData;
    NSData *_selectData;
    unsigned long long _reflectBioId;
    _Bool _useHttp;
    unsigned int _scene;
    unsigned int _check_live_type;
    unsigned int _interrupt_ret;
    id <FaceRecogPayConfigLogicDelegate> _delegate;
    NSString *_package;
    NSString *_package_sign;
    NSString *_interrupt_msg;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useHttp; // @synthesize useHttp=_useHttp;
@property(retain, nonatomic) NSString *interrupt_msg; // @synthesize interrupt_msg=_interrupt_msg;
@property(nonatomic) unsigned int interrupt_ret; // @synthesize interrupt_ret=_interrupt_ret;
@property(nonatomic) unsigned int check_live_type; // @synthesize check_live_type=_check_live_type;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *package_sign; // @synthesize package_sign=_package_sign;
@property(retain, nonatomic) NSString *package; // @synthesize package=_package;
@property(nonatomic) __weak id <FaceRecogPayConfigLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)startGetFaceCheckActionUseHttp:(id)arg1;
- (_Bool)startGetBioConfig:(id)arg1;
- (id)getSelectData;
- (id)getColorData;
- (id)actionHint;
- (id)takeMessage;
- (double)reductionRatio;
- (id)getActionData;
- (unsigned long long)getReflectBioId;
- (id)getBioId;
- (void)resetConfig;

@end

