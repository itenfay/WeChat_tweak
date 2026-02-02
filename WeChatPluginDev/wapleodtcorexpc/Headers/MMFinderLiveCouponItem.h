//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderCouponWidgetsInfo, FinderShopCouponInfo, NSArray, NSHashTable, NSString;

@interface MMFinderLiveCouponItem : NSObject
{
    _Bool _anchorSending;
    _Bool _isDuringReceiving;
    int _type;
    int _sourceType;
    FinderShopCouponInfo *_couponInfo;
    long long _scene;
    NSString *_stockId;
    NSString *_discount;
    NSArray *_valueWording;
    NSString *_title;
    unsigned long long _remainCount;
    NSString *_source;
    NSString *_dueDate;
    NSString *_useCondition;
    FinderCouponWidgetsInfo *_widgetCardInfo;
    NSHashTable *_observers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) FinderCouponWidgetsInfo *widgetCardInfo; // @synthesize widgetCardInfo=_widgetCardInfo;
@property(nonatomic) _Bool isDuringReceiving; // @synthesize isDuringReceiving=_isDuringReceiving;
@property(nonatomic) _Bool anchorSending; // @synthesize anchorSending=_anchorSending;
@property(nonatomic) int sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) NSString *useCondition; // @synthesize useCondition=_useCondition;
@property(retain, nonatomic) NSString *dueDate; // @synthesize dueDate=_dueDate;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(nonatomic) unsigned long long remainCount; // @synthesize remainCount=_remainCount;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *valueWording; // @synthesize valueWording=_valueWording;
@property(retain, nonatomic) NSString *discount; // @synthesize discount=_discount;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *stockId; // @synthesize stockId=_stockId;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) FinderShopCouponInfo *couponInfo; // @synthesize couponInfo=_couponInfo;
@property(readonly, nonatomic) _Bool isInstantDiscountActivity;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)onFinderCouponReceivedEvent:(id)arg1;
@property(readonly, nonatomic) FinderShopCouponInfo *pb;
@property(readonly, nonatomic) _Bool audienceReceived;
@property(readonly, nonatomic) NSString *audienceButtonWording;
- (id)genValueWording;
- (id)genDiscount;
- (id)initWithWidgetCardInfo:(id)arg1;
- (id)initWithCouponInfo:(id)arg1;
- (id)finderLiveLogReportValueForKey:(id)arg1;
@property(readonly, nonatomic) MMFinderLiveCouponItem *validItemForNotice;
@property(readonly, nonatomic) _Bool isValidForNotice;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

