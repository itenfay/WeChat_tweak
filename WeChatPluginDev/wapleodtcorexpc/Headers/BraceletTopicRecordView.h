//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class DeviceBrandJumpInfo, MMWebImageView, NSArray, NSString, WAContact, WAContactGetter;
@protocol BraceletTopicRecordDelegate;

@interface BraceletTopicRecordView : UIView
{
    double m_offsetY;
    _Bool _isAppleWatch;
    _Bool _isHardware;
    id <BraceletTopicRecordDelegate> _delegate;
    NSArray *_records;
    NSArray *_goals;
    WAContactGetter *_getter;
    WAContact *_contact;
    DeviceBrandJumpInfo *_jumpInfo;
    MMWebImageView *_brandIconView;
}

+ (double)calculateHeightWithSportRecords:(id)arg1 sportGoals:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MMWebImageView *brandIconView; // @synthesize brandIconView=_brandIconView;
@property(retain, nonatomic) DeviceBrandJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(nonatomic) _Bool isHardware; // @synthesize isHardware=_isHardware;
@property(nonatomic) _Bool isAppleWatch; // @synthesize isAppleWatch=_isAppleWatch;
@property(retain, nonatomic) WAContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) WAContactGetter *getter; // @synthesize getter=_getter;
@property(retain, nonatomic) NSArray *goals; // @synthesize goals=_goals;
@property(retain, nonatomic) NSArray *records; // @synthesize records=_records;
@property(nonatomic) __weak id <BraceletTopicRecordDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLoadImageOK:(id)arg1;
- (void)openWeAppForSports;
- (void)openFinderProfile;
- (void)onClickAppButton:(id)arg1;
- (void)addSportRecord:(id)arg1;
- (void)addAppleRing;
- (void)initTitleViewWithContact:(id)arg1;
- (void)initView;
- (id)initWithSportRecords:(id)arg1 sportGoals:(id)arg2 width:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

