//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayF2FReceiveModalViewData : NSObject
{
    unsigned int _qrcodeLevel;
    NSString *_title;
    NSString *_qrcodeUrl;
    NSString *_headImageUrl;
    NSString *_confirmBtn;
    NSString *_tips;
    NSString *_receiverInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *receiverInfo; // @synthesize receiverInfo=_receiverInfo;
@property(retain, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) NSString *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(nonatomic) unsigned int qrcodeLevel; // @synthesize qrcodeLevel=_qrcodeLevel;
@property(retain, nonatomic) NSString *headImageUrl; // @synthesize headImageUrl=_headImageUrl;
@property(retain, nonatomic) NSString *qrcodeUrl; // @synthesize qrcodeUrl=_qrcodeUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithF2FMiniProgramConfirmRcvrResp:(id)arg1;

@end

