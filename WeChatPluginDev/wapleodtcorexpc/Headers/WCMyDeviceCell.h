//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMDeviceHeadImageView, NSString, UILabel;

@interface WCMyDeviceCell
{
    _Bool _isInited;
    NSString *_iconUrl;
    NSString *_deviceName;
    MMDeviceHeadImageView *_headImageView;
    UILabel *_deviceNameLbl;
    UILabel *_deviceDetailLbl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *deviceDetailLbl; // @synthesize deviceDetailLbl=_deviceDetailLbl;
@property(retain, nonatomic) UILabel *deviceNameLbl; // @synthesize deviceNameLbl=_deviceNameLbl;
@property(retain, nonatomic) MMDeviceHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) _Bool isInited; // @synthesize isInited=_isInited;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
- (void)setDefaultIcon:(id)arg1;
- (void)setDeviceName:(id)arg1 detail:(id)arg2;
- (void)initCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

