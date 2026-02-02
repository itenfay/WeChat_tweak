//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface MMEmoticonStoreDownloadViewConfig : NSObject
{
    _Bool _showProgressView;
    _Bool _isDownloadCancelEnabled;
    _Bool _useStaticWidth;
    long long _notPurchaseView;
    long long _purchasingView;
    long long _freeView;
    long long _purchasedView;
    long long _downloadedView;
    long long _downloadFailView;
    long long _expiredView;
    NSArray *_additionalAvaliableBtnTypes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *additionalAvaliableBtnTypes; // @synthesize additionalAvaliableBtnTypes=_additionalAvaliableBtnTypes;
@property(nonatomic) _Bool useStaticWidth; // @synthesize useStaticWidth=_useStaticWidth;
@property(nonatomic) _Bool isDownloadCancelEnabled; // @synthesize isDownloadCancelEnabled=_isDownloadCancelEnabled;
@property(nonatomic) _Bool showProgressView; // @synthesize showProgressView=_showProgressView;
@property(nonatomic) long long expiredView; // @synthesize expiredView=_expiredView;
@property(nonatomic) long long downloadFailView; // @synthesize downloadFailView=_downloadFailView;
@property(nonatomic) long long downloadedView; // @synthesize downloadedView=_downloadedView;
@property(nonatomic) long long purchasedView; // @synthesize purchasedView=_purchasedView;
@property(nonatomic) long long freeView; // @synthesize freeView=_freeView;
@property(nonatomic) long long purchasingView; // @synthesize purchasingView=_purchasingView;
@property(nonatomic) long long notPurchaseView; // @synthesize notPurchaseView=_notPurchaseView;
- (id)description;
- (id)init;

@end

