//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, MMWebImageView, NSString, WCAppAuthAppMetaInfo;

@interface WCAppAuthDetailHeaderView : UIView
{
    _Bool _isAppType;
    WCAppAuthAppMetaInfo *_appInfo;
    NSString *_desc;
    MMWebImageView *_appIconView;
    MMUILabel *_appNameLabel;
    MMUILabel *_appTypeLabel;
    UIView *_appTypeBgView;
    MMUILabel *_descLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIView *appTypeBgView; // @synthesize appTypeBgView=_appTypeBgView;
@property(retain, nonatomic) MMUILabel *appTypeLabel; // @synthesize appTypeLabel=_appTypeLabel;
@property(retain, nonatomic) MMUILabel *appNameLabel; // @synthesize appNameLabel=_appNameLabel;
@property(retain, nonatomic) MMWebImageView *appIconView; // @synthesize appIconView=_appIconView;
@property(nonatomic) _Bool isAppType; // @synthesize isAppType=_isAppType;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) WCAppAuthAppMetaInfo *appInfo; // @synthesize appInfo=_appInfo;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithAppInfo:(id)arg1 desc:(id)arg2;

@end

