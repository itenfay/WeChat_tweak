//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MinimizeTaskData, NSMutableArray, NSString, UIImage, WCScheduleItem;
@protocol MiniTaskCollectionCellViewModelDelegate;

@interface MiniTaskCollectionCellViewModel
{
    _Bool _isOutdate;
    _Bool _isCellVisible;
    _Bool _showScheduleOptions;
    _Bool _hasNotifyUpdateSnapshot;
    id <MiniTaskCollectionCellViewModelDelegate> _delegate;
    long long _type;
    NSString *_title;
    NSString *_subtitle;
    NSString *_headerImageUrl;
    NSString *_footerText;
    NSString *_taskTitleTail;
    UIImage *_headerImage;
    UIImage *_headerDefaultImage;
    NSMutableArray *_titleStyle;
    NSMutableArray *_titleStyleForOneCell;
    NSMutableArray *_subtitleStyle;
    NSMutableArray *_subtitleStyleForOneCell;
    MinimizeTaskData *_taskData;
    WCScheduleItem *_scheduleItem;
    UIImage *_snapshotImage;
}

+ (id)scheduleDataToModel:(id)arg1;
+ (id)minimizeDataToModel:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasNotifyUpdateSnapshot; // @synthesize hasNotifyUpdateSnapshot=_hasNotifyUpdateSnapshot;
@property(retain, nonatomic) UIImage *snapshotImage; // @synthesize snapshotImage=_snapshotImage;
@property(retain, nonatomic) WCScheduleItem *scheduleItem; // @synthesize scheduleItem=_scheduleItem;
@property(retain, nonatomic) MinimizeTaskData *taskData; // @synthesize taskData=_taskData;
@property(nonatomic) _Bool showScheduleOptions; // @synthesize showScheduleOptions=_showScheduleOptions;
@property(nonatomic) _Bool isCellVisible; // @synthesize isCellVisible=_isCellVisible;
@property(nonatomic) _Bool isOutdate; // @synthesize isOutdate=_isOutdate;
@property(retain, nonatomic) NSMutableArray *subtitleStyleForOneCell; // @synthesize subtitleStyleForOneCell=_subtitleStyleForOneCell;
@property(retain, nonatomic) NSMutableArray *subtitleStyle; // @synthesize subtitleStyle=_subtitleStyle;
@property(retain, nonatomic) NSMutableArray *titleStyleForOneCell; // @synthesize titleStyleForOneCell=_titleStyleForOneCell;
@property(retain, nonatomic) NSMutableArray *titleStyle; // @synthesize titleStyle=_titleStyle;
@property(retain, nonatomic) UIImage *headerDefaultImage; // @synthesize headerDefaultImage=_headerDefaultImage;
@property(retain, nonatomic) UIImage *headerImage; // @synthesize headerImage=_headerImage;
@property(copy, nonatomic) NSString *taskTitleTail; // @synthesize taskTitleTail=_taskTitleTail;
@property(copy, nonatomic) NSString *footerText; // @synthesize footerText=_footerText;
@property(copy, nonatomic) NSString *headerImageUrl; // @synthesize headerImageUrl=_headerImageUrl;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) __weak id <MiniTaskCollectionCellViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)asyncLoadSnapshot:(CDUnknownBlockType)arg1;
- (void)onMemoryWarning;
- (void)updateOutdateState;

@end

