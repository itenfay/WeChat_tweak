//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, MMUILabel, NSString;

@interface LotteryWinnerListSectionHeaderView : UIView
{
    _Bool _showDownLoad;
    unsigned int _isUrlExpired;
    NSString *_recordUrl;
    CDUnknownBlockType _downLoadBlock;
    CDUnknownBlockType _timeOutBlock;
    MMUILabel *_winTipLabel;
    MMUIButton *_downLoadButton;
    MMUIButton *_timeOutButton;
}

+ (double)headerHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *timeOutButton; // @synthesize timeOutButton=_timeOutButton;
@property(retain, nonatomic) MMUIButton *downLoadButton; // @synthesize downLoadButton=_downLoadButton;
@property(retain, nonatomic) MMUILabel *winTipLabel; // @synthesize winTipLabel=_winTipLabel;
@property(copy, nonatomic) CDUnknownBlockType timeOutBlock; // @synthesize timeOutBlock=_timeOutBlock;
@property(copy, nonatomic) CDUnknownBlockType downLoadBlock; // @synthesize downLoadBlock=_downLoadBlock;
@property(nonatomic) unsigned int isUrlExpired; // @synthesize isUrlExpired=_isUrlExpired;
@property(nonatomic) _Bool showDownLoad; // @synthesize showDownLoad=_showDownLoad;
@property(retain, nonatomic) NSString *recordUrl; // @synthesize recordUrl=_recordUrl;
- (void)layoutWinTipLabel;
- (void)downLoadClick;
- (void)timeOutClick;
- (void)layoutDownLoadButton;
- (void)layoutTimeOutButton;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

