//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@class MpEcsJumpInfo, NSString;

@interface CustomMenuButton : UIButton
{
    NSString *m_btnId;
    NSString *m_btnKey;
    NSString *m_btnName;
    NSString *m_btnValue;
    NSString *m_btnNativeUrl;
    long long m_btnType;
    long long m_btnActionType;
    long long m_btnIndex;
    _Bool _isForPayRelatedSession;
    _Bool _isSubMenu;
    _Bool _isSubMenuListHasIcon;
    unsigned long long _showIconType;
    MpEcsJumpInfo *_menuEcsJumpInfo;
}

+ (id)getPOIJsonContentFromSelectPOIInfo:(id)arg1;
+ (id)getPicsJsonContentFromPicMd5List:(id)arg1;
+ (id)getScanJsonContentFromScanType:(id)arg1 scanResult:(id)arg2 rawData:(id)arg3;
+ (int)serverActionType2LocalCustomType:(long long)arg1;
+ (long long)localCustomActionType2ServerType:(long long)arg1;
+ (int)serverType2LocalCustom:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MpEcsJumpInfo *menuEcsJumpInfo; // @synthesize menuEcsJumpInfo=_menuEcsJumpInfo;
@property(nonatomic) _Bool isSubMenuListHasIcon; // @synthesize isSubMenuListHasIcon=_isSubMenuListHasIcon;
@property(nonatomic) _Bool isSubMenu; // @synthesize isSubMenu=_isSubMenu;
@property(nonatomic) _Bool isForPayRelatedSession; // @synthesize isForPayRelatedSession=_isForPayRelatedSession;
@property(nonatomic) unsigned long long showIconType; // @synthesize showIconType=_showIconType;
@property(nonatomic) long long m_btnIndex; // @synthesize m_btnIndex;
@property(nonatomic) long long m_btnActionType; // @synthesize m_btnActionType;
@property(nonatomic) long long m_btnType; // @synthesize m_btnType;
@property(retain, nonatomic) NSString *m_btnNativeUrl; // @synthesize m_btnNativeUrl;
@property(retain, nonatomic) NSString *m_btnValue; // @synthesize m_btnValue;
@property(retain, nonatomic) NSString *m_btnName; // @synthesize m_btnName;
@property(retain, nonatomic) NSString *m_btnKey; // @synthesize m_btnKey;
@property(retain, nonatomic) NSString *m_btnId; // @synthesize m_btnId;
- (void)layoutSubviews;
- (id)init;

@end

