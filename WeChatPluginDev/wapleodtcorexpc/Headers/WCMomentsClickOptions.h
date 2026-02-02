//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, WCDataItem;

@interface WCMomentsClickOptions : NSObject
{
    int _contactInfoScene;
    NSMutableDictionary *_userInfo;
    WCDataItem *_dataItem;
    NSString *_urlString;
    NSString *_backupUrlString;
    long long _clickScene;
    long long _adExposureScene;
}

+ (id)clickOptions;
- (void).cxx_destruct;
@property(nonatomic) long long adExposureScene; // @synthesize adExposureScene=_adExposureScene;
@property(nonatomic) int contactInfoScene; // @synthesize contactInfoScene=_contactInfoScene;
@property(nonatomic) long long clickScene; // @synthesize clickScene=_clickScene;
@property(copy, nonatomic) NSString *backupUrlString; // @synthesize backupUrlString=_backupUrlString;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(readonly, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;

@end

