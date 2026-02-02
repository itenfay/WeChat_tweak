//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIViewController.h>

@class MJDatePickerView, MJSegmentViewModel, NSDate;

@interface MJMetaEditDatePanel : UIViewController
{
    CDUnknownBlockType _dateDidChageHandler;
    MJSegmentViewModel *_segmentVM;
    MJDatePickerView *_datePicker;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MJDatePickerView *datePicker; // @synthesize datePicker=_datePicker;
@property(retain, nonatomic) MJSegmentViewModel *segmentVM; // @synthesize segmentVM=_segmentVM;
@property(copy, nonatomic) CDUnknownBlockType dateDidChageHandler; // @synthesize dateDidChageHandler=_dateDidChageHandler;
- (void)reloadData;
@property(readonly, nonatomic) NSDate *selectedDate;
- (void)setupDatas;
- (void)setupViews;
- (id)initWithSegmentVM:(id)arg1;

@end

