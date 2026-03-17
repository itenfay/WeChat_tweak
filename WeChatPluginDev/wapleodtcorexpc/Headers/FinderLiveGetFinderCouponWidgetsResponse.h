//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSMutableArray, NSString;

@class WXPBGeneratedMessage;

@interface FinderLiveGetFinderCouponWidgetsResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (id)finderLiveLogReportValueForKey:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *couponSmallWidgetsWord; // @dynamic couponSmallWidgetsWord;
@property(retain, nonatomic) NSString *couponWidgetsValue; // @dynamic couponWidgetsValue;
@property(retain, nonatomic) NSString *couponWidgetsWord; // @dynamic couponWidgetsWord;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSMutableArray *widgetsList; // @dynamic widgetsList;

@end

