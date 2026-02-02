//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView;

@interface MMLiveBlurPerfMonitorRecord
{
    UIView *_blurView;
}

+ (id)getMonitorBlurViewKey:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak UIView *blurView; // @synthesize blurView=_blurView;
- (id)getUniqueKey;
- (id)getRecordDesc;
- (id)rootView;
- (struct CGRect)currPresentFrame;
- (void)clear;
- (_Bool)isValid;
- (_Bool)isBlurViewValid;
- (void)autoUpdateComposeRect;
- (_Bool)startMonitorIfNeed;
- (id)initWithBlurView:(id)arg1;

@end

