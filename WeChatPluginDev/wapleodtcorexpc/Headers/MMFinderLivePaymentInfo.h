//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveContact, WCFinderContact;

@interface MMFinderLivePaymentInfo : NSObject
{
    unsigned int _paidAmountInWecoin;
    FinderLiveContact *_liveContact;
    WCFinderContact *_refContact;
    unsigned long long _paidTime;
}

+ (id)convertFromGainsInfoList:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long paidTime; // @synthesize paidTime=_paidTime;
@property(nonatomic) unsigned int paidAmountInWecoin; // @synthesize paidAmountInWecoin=_paidAmountInWecoin;
@property(retain, nonatomic) WCFinderContact *refContact; // @synthesize refContact=_refContact;
@property(retain, nonatomic) FinderLiveContact *liveContact; // @synthesize liveContact=_liveContact;
- (id)description;
- (id)initWithPaymentGainsInfo:(id)arg1;

@end

