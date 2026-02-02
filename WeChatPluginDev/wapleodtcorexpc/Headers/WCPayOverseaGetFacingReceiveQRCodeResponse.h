//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayOverseaGetFacingReceiveQRCodeResponse : NSObject
{
    unsigned int _uiIsSetAmount;
    int _alertType;
    int _currencyType;
    NSString *_nsQRCodeUrl;
    NSString *_nsRealname;
    NSString *_alertTitle;
    NSString *_leftButtonText;
    NSString *_rightButtonText;
    NSString *_rightButtonUrl;
    NSString *_bottomText;
    NSString *_bottomUrl;
    NSString *_currencyUint;
    NSString *_notice;
    NSString *_noticeUrl;
}

+ (id)GenFromDictionary:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_currencyUint;
+ (void)PBArrayAdd_currencyType;
+ (void)PBArrayAdd_nsQRCodeUrl;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *noticeUrl; // @synthesize noticeUrl=_noticeUrl;
@property(retain, nonatomic) NSString *notice; // @synthesize notice=_notice;
@property(copy, nonatomic) NSString *currencyUint; // @synthesize currencyUint=_currencyUint;
@property(nonatomic) int currencyType; // @synthesize currencyType=_currencyType;
@property(retain, nonatomic) NSString *bottomUrl; // @synthesize bottomUrl=_bottomUrl;
@property(retain, nonatomic) NSString *bottomText; // @synthesize bottomText=_bottomText;
@property(retain, nonatomic) NSString *rightButtonUrl; // @synthesize rightButtonUrl=_rightButtonUrl;
@property(retain, nonatomic) NSString *rightButtonText; // @synthesize rightButtonText=_rightButtonText;
@property(retain, nonatomic) NSString *leftButtonText; // @synthesize leftButtonText=_leftButtonText;
@property(retain, nonatomic) NSString *alertTitle; // @synthesize alertTitle=_alertTitle;
@property(nonatomic) int alertType; // @synthesize alertType=_alertType;
@property(retain, nonatomic) NSString *nsRealname; // @synthesize nsRealname=_nsRealname;
@property(nonatomic) unsigned int uiIsSetAmount; // @synthesize uiIsSetAmount=_uiIsSetAmount;
@property(retain, nonatomic) NSString *nsQRCodeUrl; // @synthesize nsQRCodeUrl=_nsQRCodeUrl;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

