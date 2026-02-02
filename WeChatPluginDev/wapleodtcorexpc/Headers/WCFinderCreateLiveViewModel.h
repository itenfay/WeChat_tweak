//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveNoticeInfo, NSArray, NSDate, NSMutableArray, NSString, WCFinderCreateLivePrepareResponseFailModel, WCFinderCreateLivePrepareResponseModel;

@interface WCFinderCreateLiveViewModel : NSObject
{
    _Bool _isCreateLivePrepareSuccessChecked;
    _Bool _isCreateLivePrepareChecked;
    _Bool _enableDescExtend;
    WCFinderCreateLivePrepareResponseModel *_prepareResponseModel;
    WCFinderCreateLivePrepareResponseFailModel *_prepareResponseFailModel;
    NSArray *_liveNoticeList;
    NSString *_descriptionPromptWording;
    CDUnknownBlockType _createNoticePrePareBlock;
    unsigned long long _role;
    FinderLiveNoticeInfo *_modNoticeInfo;
    NSMutableArray *_waittingBlocks;
    NSDate *_bookingTime;
    NSMutableArray *_dayArrs;
    NSMutableArray *_specificDayArrs;
    NSDate *_specificDate;
    CDUnknownBlockType _createLivePrePareBlock;
}

+ (id)getNoticeIdsDesc:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool enableDescExtend; // @synthesize enableDescExtend=_enableDescExtend;
@property(copy, nonatomic) CDUnknownBlockType createLivePrePareBlock; // @synthesize createLivePrePareBlock=_createLivePrePareBlock;
@property(retain, nonatomic) NSDate *specificDate; // @synthesize specificDate=_specificDate;
@property(retain, nonatomic) NSMutableArray *specificDayArrs; // @synthesize specificDayArrs=_specificDayArrs;
@property(retain, nonatomic) NSMutableArray *dayArrs; // @synthesize dayArrs=_dayArrs;
@property(retain, nonatomic) NSDate *bookingTime; // @synthesize bookingTime=_bookingTime;
@property(retain, nonatomic) NSMutableArray *waittingBlocks; // @synthesize waittingBlocks=_waittingBlocks;
@property(nonatomic) _Bool isCreateLivePrepareChecked; // @synthesize isCreateLivePrepareChecked=_isCreateLivePrepareChecked;
@property(retain, nonatomic) FinderLiveNoticeInfo *modNoticeInfo; // @synthesize modNoticeInfo=_modNoticeInfo;
@property(nonatomic) unsigned long long role; // @synthesize role=_role;
@property(nonatomic) _Bool isCreateLivePrepareSuccessChecked; // @synthesize isCreateLivePrepareSuccessChecked=_isCreateLivePrepareSuccessChecked;
@property(copy, nonatomic) CDUnknownBlockType createNoticePrePareBlock; // @synthesize createNoticePrePareBlock=_createNoticePrePareBlock;
@property(retain, nonatomic) NSString *descriptionPromptWording; // @synthesize descriptionPromptWording=_descriptionPromptWording;
@property(retain, nonatomic) NSArray *liveNoticeList; // @synthesize liveNoticeList=_liveNoticeList;
@property(retain, nonatomic) WCFinderCreateLivePrepareResponseFailModel *prepareResponseFailModel; // @synthesize prepareResponseFailModel=_prepareResponseFailModel;
@property(retain, nonatomic) WCFinderCreateLivePrepareResponseModel *prepareResponseModel; // @synthesize prepareResponseModel=_prepareResponseModel;
- (id)getSpecificNoticeStartTimeWithSelectedDayComponent:(long long)arg1 hourComponent:(long long)arg2 minuteComponent:(long long)arg3;
- (id)getSpecificHourArrWithDayComponent:(long long)arg1;
- (id)getSpecificMinuteArrWithDayComponent:(long long)arg1 hourComponent:(long long)arg2;
- (id)getSpecificMinuteDataWithDayComponent:(long long)arg1 hourComponent:(long long)arg2;
- (id)getSpecificHourDataWithDayComponent:(long long)arg1;
- (id)getSpecificDatePickerData:(double)arg1;
- (void)genSpecificComponent:(double)arg1;
- (long long)getNearestIndexWithTarggetItem:(id)arg1 itemList:(id)arg2;
- (id)getMinuteArrWithDayComponent:(long long)arg1 hourComponent:(long long)arg2;
- (id)getMinuteDataWithDayComponent:(long long)arg1 hourComponent:(long long)arg2;
- (id)getHourDataWithDayComponent:(long long)arg1;
- (id)dayComponent;
- (void)genDayComponentIfNeed;
- (id)getDatePickerData;
- (id)getHourArrWithDayComponent:(long long)arg1;
- (id)quickNoticeExpirationTimeForCurrentTime:(id)arg1;
- (id)getNoticeStartTimeWithSelectedDayComponent:(long long)arg1 hourComponent:(long long)arg2 minuteComponent:(long long)arg3;
- (id)getNoticeDefaultStartTime;
- (id)setBookingTimeWithSelectedDayComponent:(long long)arg1 hourComponent:(long long)arg2 minuteComponent:(long long)arg3;
- (void)modNoticeWithWithNewNoticeInfo:(id)arg1 modifyFieldFlag:(unsigned long long)arg2 modifyReason:(id)arg3 reportingSourceScene:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)createQuickLiveNoticeWithExpirationTime:(id)arg1 topic:(id)arg2 introduction:(id)arg3 reportingSourceScene:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)createStandardLiveNoticeWithStartTime:(id)arg1 topic:(id)arg2 introduction:(id)arg3 paymentSetting:(id)arg4 couponsStockIDs:(id)arg5 aggregateType:(int)arg6 triggerType:(int)arg7 reportingSourceScene:(unsigned long long)arg8 completionHandler:(CDUnknownBlockType)arg9;
- (void)fetchCreateLiveNoticeInfo:(CDUnknownBlockType)arg1 complete:(CDUnknownBlockType)arg2;
- (void)invokeWaittingNoticeInfoBlocks;
- (void)udpateDefaultDescriptionPromptWording;
- (void)checkLiveNoticeInfo;
- (id)initWithCreateLiveWithModNotice:(id)arg1 prePareBlock:(CDUnknownBlockType)arg2;
- (id)initWithCreateLivePrePareBlock:(CDUnknownBlockType)arg1;
- (id)initWithCreateLiveWithRole:(unsigned long long)arg1 prePareBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

