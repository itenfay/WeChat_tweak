//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UILabel;

@interface WCFinderRootEditImageViewController
{
    _Bool _shouldCropPhotoInVisibleFrame;
    unsigned long long _enterTime;
    UILabel *_naviLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *naviLabel; // @synthesize naviLabel=_naviLabel;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(nonatomic) _Bool shouldCropPhotoInVisibleFrame; // @synthesize shouldCropPhotoInVisibleFrame=_shouldCropPhotoInVisibleFrame;
- (void)setUpNaviLabel;
- (void)OnClickEditImageDoneBarButton;
- (void)OnClickEditImageBackBarButton;
- (id)getReportExtInfoDismissState:(_Bool)arg1 eventCode:(long long)arg2;
- (void)viewDidAppear:(_Bool)arg1;

@end

