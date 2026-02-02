//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface ScanCodeOcrReportRequest : NSObject
{
    _Bool _isPaymentCode;
    int _codeType;
    int _getA8KeyScene;
    int _getA8KeyRequestId;
    int _paymentCodeType;
    NSString *_codeContent;
    NSString *_msgId;
    long long _scanRawFronScene;
    UIImage *_resultOriginalImage;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *resultOriginalImage; // @synthesize resultOriginalImage=_resultOriginalImage;
@property(nonatomic) _Bool isPaymentCode; // @synthesize isPaymentCode=_isPaymentCode;
@property(nonatomic) int paymentCodeType; // @synthesize paymentCodeType=_paymentCodeType;
@property(nonatomic) long long scanRawFronScene; // @synthesize scanRawFronScene=_scanRawFronScene;
@property(retain, nonatomic) NSString *msgId; // @synthesize msgId=_msgId;
@property(nonatomic) int getA8KeyRequestId; // @synthesize getA8KeyRequestId=_getA8KeyRequestId;
@property(nonatomic) int getA8KeyScene; // @synthesize getA8KeyScene=_getA8KeyScene;
@property(nonatomic) int codeType; // @synthesize codeType=_codeType;
@property(retain, nonatomic) NSString *codeContent; // @synthesize codeContent=_codeContent;
- (id)initWithCodeContent:(id)arg1 codeType:(int)arg2 paymentCodeType:(int)arg3 isPaymentCode:(_Bool)arg4 originalImage:(id)arg5 getA8KeyScene:(int)arg6 getA8KeyRequestId:(int)arg7 msgId:(id)arg8 fromRawScene:(long long)arg9;

@end

