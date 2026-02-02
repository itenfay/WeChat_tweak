//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@class MMUILabel, UIButton, UIImageView;

@interface PlaySoundTipsNotificationView : NSObject
{
    CDUnknownBlockType _onClickPlaySoundButton;
    UIImageView *_imageView;
    MMUILabel *_textLabel;
    MMUILabel *_detailTextLabel;
    UIButton *_playSoundButton;
}

@property(retain, nonatomic) UIButton *playSoundButton; // @synthesize playSoundButton=_playSoundButton;
@property(retain, nonatomic) MMUILabel *detailTextLabel; // @synthesize detailTextLabel=_detailTextLabel;
@property(retain, nonatomic) MMUILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) CDUnknownBlockType onClickPlaySoundButton; // @synthesize onClickPlaySoundButton=_onClickPlaySoundButton;
- (void)clickPlaySoundButton;
- (void)configSDKReport;
- (void)sizeToFitWidth:(double)arg1;
- (void)initContentView;

@end
