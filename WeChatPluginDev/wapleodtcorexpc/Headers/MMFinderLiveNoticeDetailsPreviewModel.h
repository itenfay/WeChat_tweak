//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLivePaymentSetting, NSString;
@protocol MMFinderLiveNoticeDetailsPreviewDelegate;

@interface MMFinderLiveNoticeDetailsPreviewModel : NSObject
{
    int _noticeAggregateType;
    unsigned int _startTime;
    unsigned int _noticeStarttimeType;
    id <MMFinderLiveNoticeDetailsPreviewDelegate> _previewDelegate;
    FinderLivePaymentSetting *_paymentSetting;
    NSString *_introduction;
    NSString *_introductionExtend;
    NSString *_discountWording;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *discountWording; // @synthesize discountWording=_discountWording;
@property(retain, nonatomic) NSString *introductionExtend; // @synthesize introductionExtend=_introductionExtend;
@property(retain, nonatomic) NSString *introduction; // @synthesize introduction=_introduction;
@property(nonatomic) unsigned int noticeStarttimeType; // @synthesize noticeStarttimeType=_noticeStarttimeType;
@property(nonatomic) unsigned int startTime; // @synthesize startTime=_startTime;
@property(nonatomic) int noticeAggregateType; // @synthesize noticeAggregateType=_noticeAggregateType;
@property(retain, nonatomic) FinderLivePaymentSetting *paymentSetting; // @synthesize paymentSetting=_paymentSetting;
@property(nonatomic) __weak id <MMFinderLiveNoticeDetailsPreviewDelegate> previewDelegate; // @synthesize previewDelegate=_previewDelegate;

@end

