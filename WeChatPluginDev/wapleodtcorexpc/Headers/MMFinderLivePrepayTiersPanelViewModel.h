//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MMFinderLivePrepayTiersPanelViewModel : NSObject
{
    _Bool _isUpgrade;
    unsigned int _livingTime;
    NSString *_productTitle;
    NSString *_eventTitle;
    NSString *_eventDescription;
    NSArray *_tiers;
    NSString *_referenceId;
}

+ (id)viewModelWithPaymentItemsResponse:(id)arg1 eventTitle:(id)arg2 eventDescription:(id)arg3 referenceId:(id)arg4;
- (void).cxx_destruct;
@property(nonatomic) unsigned int livingTime; // @synthesize livingTime=_livingTime;
@property(retain, nonatomic) NSString *referenceId; // @synthesize referenceId=_referenceId;
@property(nonatomic) _Bool isUpgrade; // @synthesize isUpgrade=_isUpgrade;
@property(retain, nonatomic) NSArray *tiers; // @synthesize tiers=_tiers;
@property(retain, nonatomic) NSString *eventDescription; // @synthesize eventDescription=_eventDescription;
@property(retain, nonatomic) NSString *eventTitle; // @synthesize eventTitle=_eventTitle;
@property(retain, nonatomic) NSString *productTitle; // @synthesize productTitle=_productTitle;
@property(readonly, nonatomic) _Bool hasAvailableTiers;

@end

