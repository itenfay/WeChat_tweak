//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString, WCFinderDataItem;

@interface WCFinderLiveMakePackageOrderParams : NSObject
{
    unsigned int _targetLevel;
    WCFinderDataItem *_dataItem;
    unsigned long long _orderWecoinAmount;
    NSString *_orderRequestId;
    NSData *_liveCookies;
    NSArray *_chooseProudctList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *chooseProudctList; // @synthesize chooseProudctList=_chooseProudctList;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(copy, nonatomic) NSString *orderRequestId; // @synthesize orderRequestId=_orderRequestId;
@property(nonatomic) unsigned long long orderWecoinAmount; // @synthesize orderWecoinAmount=_orderWecoinAmount;
@property(nonatomic) unsigned int targetLevel; // @synthesize targetLevel=_targetLevel;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;

@end

