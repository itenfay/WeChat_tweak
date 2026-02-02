//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMWebTransPack, NSDate, NSString;

@interface WebGetTranslateResultCGIHandler : NSObject
{
    CDUnknownBlockType _completion;
    WebGetTranslateResultCGIHandler *_selfRetain;
    NSString *_barNowTitle;
    MMWebTransPack *_sendPack;
    NSDate *_sendTime;
    NSDate *_receiveTime;
    unsigned long long _interval;
}

+ (void)sendRequestWithSendPack:(id)arg1 webUrl:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long interval; // @synthesize interval=_interval;
@property(retain, nonatomic) NSDate *receiveTime; // @synthesize receiveTime=_receiveTime;
@property(retain, nonatomic) NSDate *sendTime; // @synthesize sendTime=_sendTime;
@property(retain, nonatomic) MMWebTransPack *sendPack; // @synthesize sendPack=_sendPack;
@property(copy, nonatomic) NSString *barNowTitle; // @synthesize barNowTitle=_barNowTitle;
@property(retain, nonatomic) WebGetTranslateResultCGIHandler *selfRetain; // @synthesize selfRetain=_selfRetain;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)callbackCompletionIsSuccess:(id)arg1;
- (void)handleCheckTranslateFeedsDataResp:(id)arg1;
- (void)sendRequest:(id)arg1 webUrl:(id)arg2;
- (void)dealloc;
- (void)asyncReleaseSelf;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;

@end

