//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView;

@interface TextStateNotifyButton
{
    unsigned int _notifyCount;
    UIView *_borderView;
}

+ (struct CGRect)squareFrameForFrame:(struct CGRect)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(nonatomic) unsigned int notifyCount; // @synthesize notifyCount=_notifyCount;
- (void)updateImage;
- (void)setFrame:(struct CGRect)arg1;
- (void)initBorderView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

