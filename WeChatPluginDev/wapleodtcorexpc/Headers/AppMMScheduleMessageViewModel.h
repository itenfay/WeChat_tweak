//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AppMMScheduleItem;

@interface AppMMScheduleMessageViewModel
{
    AppMMScheduleItem *_scheduleItem;
    double _contentWidth;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double contentWidth; // @synthesize contentWidth=_contentWidth;
@property(retain, nonatomic) AppMMScheduleItem *scheduleItem; // @synthesize scheduleItem=_scheduleItem;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

@end

