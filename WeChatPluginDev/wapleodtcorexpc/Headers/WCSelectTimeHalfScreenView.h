//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDate;

@interface WCSelectTimeHalfScreenView
{
    CDUnknownBlockType _confirmCallBack;
    CDUnknownBlockType _cancelCallBack;
    NSDate *_miniumDate;
    NSDate *_maxiumDate;
    NSDate *_selectBeginDate;
    NSDate *_selectEndDate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *selectEndDate; // @synthesize selectEndDate=_selectEndDate;
@property(retain, nonatomic) NSDate *selectBeginDate; // @synthesize selectBeginDate=_selectBeginDate;
@property(retain, nonatomic) NSDate *maxiumDate; // @synthesize maxiumDate=_maxiumDate;
@property(retain, nonatomic) NSDate *miniumDate; // @synthesize miniumDate=_miniumDate;
@property(copy, nonatomic) CDUnknownBlockType cancelCallBack; // @synthesize cancelCallBack=_cancelCallBack;
@property(copy, nonatomic) CDUnknownBlockType confirmCallBack; // @synthesize confirmCallBack=_confirmCallBack;
- (id)navigationRightButton;
- (void)onSelectEndTime;
- (void)onSelectStatTime;
- (void)onDone;
- (void)setupDetailView;
- (_Bool)checkDateValid;
- (id)initWithTimeMin:(id)arg1 max:(id)arg2 selectBegin:(id)arg3 selectEnd:(id)arg4;

@end

