//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CameraScanGoodsItemExchangeInfo, NSString;

@interface GoodsReqRemoteDetectTask : NSObject
{
    NSString *_reqKey;
    unsigned long long _retryCount;
    CameraScanGoodsItemExchangeInfo *_exchangeInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CameraScanGoodsItemExchangeInfo *exchangeInfo; // @synthesize exchangeInfo=_exchangeInfo;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(copy, nonatomic) NSString *reqKey; // @synthesize reqKey=_reqKey;

@end

