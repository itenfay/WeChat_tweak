//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayOverseaGetFacingReceiveQRCodeArgument : NSObject
{
    unsigned int _uiIsSetAmount;
    unsigned int _uiWalletType;
    unsigned long long _uiAmount;
    NSString *_nsDesc;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int uiWalletType; // @synthesize uiWalletType=_uiWalletType;
@property(retain, nonatomic) NSString *nsDesc; // @synthesize nsDesc=_nsDesc;
@property(nonatomic) unsigned long long uiAmount; // @synthesize uiAmount=_uiAmount;
@property(nonatomic) unsigned int uiIsSetAmount; // @synthesize uiIsSetAmount=_uiIsSetAmount;
- (id)urlArgumentData;

@end

