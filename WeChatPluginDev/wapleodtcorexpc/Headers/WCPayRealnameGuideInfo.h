//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, WCPayECardRealNameInfo;

@interface WCPayRealnameGuideInfo : NSObject
{
    _Bool _isShowProtocol;
    unsigned int _guideFlag;
    int _realnameScene;
    NSString *_guideWording;
    NSString *_leftButtonWording;
    NSString *_rightButtonWording;
    NSString *_uploadCreditUrl;
    NSString *_title;
    NSString *_subTitle;
    NSArray *_uploadReasons;
    NSString *_doneButtonTitle;
    NSString *_uploadCreditUrlNew;
    NSString *_leftProtocolWording;
    NSString *_rightProtocolWording;
    NSString *_protocolUrl;
    WCPayECardRealNameInfo *_ecard_info;
}

+ (id)genFromUnion:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCPayECardRealNameInfo *ecard_info; // @synthesize ecard_info=_ecard_info;
@property(retain, nonatomic) NSString *protocolUrl; // @synthesize protocolUrl=_protocolUrl;
@property(retain, nonatomic) NSString *rightProtocolWording; // @synthesize rightProtocolWording=_rightProtocolWording;
@property(retain, nonatomic) NSString *leftProtocolWording; // @synthesize leftProtocolWording=_leftProtocolWording;
@property(nonatomic) _Bool isShowProtocol; // @synthesize isShowProtocol=_isShowProtocol;
@property(retain, nonatomic) NSString *uploadCreditUrlNew; // @synthesize uploadCreditUrlNew=_uploadCreditUrlNew;
@property(retain, nonatomic) NSString *doneButtonTitle; // @synthesize doneButtonTitle=_doneButtonTitle;
@property(retain, nonatomic) NSArray *uploadReasons; // @synthesize uploadReasons=_uploadReasons;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int realnameScene; // @synthesize realnameScene=_realnameScene;
@property(retain, nonatomic) NSString *uploadCreditUrl; // @synthesize uploadCreditUrl=_uploadCreditUrl;
@property(retain, nonatomic) NSString *rightButtonWording; // @synthesize rightButtonWording=_rightButtonWording;
@property(retain, nonatomic) NSString *leftButtonWording; // @synthesize leftButtonWording=_leftButtonWording;
@property(retain, nonatomic) NSString *guideWording; // @synthesize guideWording=_guideWording;
@property(nonatomic) unsigned int guideFlag; // @synthesize guideFlag=_guideFlag;

@end

