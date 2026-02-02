//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMLiveTaskId, NSString, UIImageView;

@interface MMFinderLiveKTVSingleIconView : UIView
{
    MMLiveTaskId *_taskId;
    UIImageView *_iconView;
    NSString *_ktvThemeResourceFetchSessionToken;
}

+ (double)preferHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *ktvThemeResourceFetchSessionToken; // @synthesize ktvThemeResourceFetchSessionToken=_ktvThemeResourceFetchSessionToken;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (id)liveTask;
- (void)updateMainWidgetsColor:(id)arg1;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithTaskId:(id)arg1;

@end

