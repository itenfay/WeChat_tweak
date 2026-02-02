//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface MMFinderLivePaidConnectMicAnchorSettingConfig : NSObject
{
    NSArray *_availableConnectDurations;
    NSArray *_disconnectOptions;
    NSArray *_availableConnectPrices;
    NSArray *_availableBidPrices;
}

+ (id)fromPurchaseConfig:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *availableBidPrices; // @synthesize availableBidPrices=_availableBidPrices;
@property(retain, nonatomic) NSArray *availableConnectPrices; // @synthesize availableConnectPrices=_availableConnectPrices;
@property(retain, nonatomic) NSArray *disconnectOptions; // @synthesize disconnectOptions=_disconnectOptions;
@property(retain, nonatomic) NSArray *availableConnectDurations; // @synthesize availableConnectDurations=_availableConnectDurations;

@end

