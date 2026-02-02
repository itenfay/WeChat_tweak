//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FavorComposeInfo, NSMutableArray, NSString;

@interface WCPayBizF2FTransferMoneyPlaceOrderArgs : NSObject
{
    unsigned int _originalAmount;
    unsigned int _totalAmount;
    NSString *_payerComment;
    FavorComposeInfo *_favorComposeInfo;
    NSMutableArray *_extraBuyDetailInfos;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *extraBuyDetailInfos; // @synthesize extraBuyDetailInfos=_extraBuyDetailInfos;
@property(retain, nonatomic) FavorComposeInfo *favorComposeInfo; // @synthesize favorComposeInfo=_favorComposeInfo;
@property(retain, nonatomic) NSString *payerComment; // @synthesize payerComment=_payerComment;
@property(nonatomic) unsigned int totalAmount; // @synthesize totalAmount=_totalAmount;
@property(nonatomic) unsigned int originalAmount; // @synthesize originalAmount=_originalAmount;

@end

