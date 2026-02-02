//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSString;

@interface MMLiveBaseOnlineStateBar
{
    _Bool _removeAvatarIcon;
    _Bool _showingRunningBank;
    MMUIButton *_onlineStateButton;
    CDUnknownBlockType _onlineStateButtonClickedBlock;
    NSString *_onlineCountTitle;
    double _maxWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) _Bool showingRunningBank; // @synthesize showingRunningBank=_showingRunningBank;
@property(retain, nonatomic) NSString *onlineCountTitle; // @synthesize onlineCountTitle=_onlineCountTitle;
@property(copy, nonatomic) CDUnknownBlockType onlineStateButtonClickedBlock; // @synthesize onlineStateButtonClickedBlock=_onlineStateButtonClickedBlock;
@property(nonatomic) _Bool removeAvatarIcon; // @synthesize removeAvatarIcon=_removeAvatarIcon;
@property(retain, nonatomic) MMUIButton *onlineStateButton; // @synthesize onlineStateButton=_onlineStateButton;
- (void)refreshWidgetsForFontSizeChange;
- (void)sizeToFits;

@end

