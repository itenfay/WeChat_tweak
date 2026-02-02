//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, UIView;

@interface SonicView
{
    NSMutableArray *_headImageList;
    UIView *m_containView;
    NSMutableArray *_firstPageRandomArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *m_containView; // @synthesize m_containView;
- (void)onVerifyOk:(id)arg1;
- (void)onGetMsg:(id)arg1 PushContact:(id)arg2;
- (void)addHeadImageList:(id)arg1;
- (void)fadeinItems:(id)arg1;
- (void)popupView:(id)arg1;
- (int)getRandomNumber;
- (struct CGRect)getFrameByIndex:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

