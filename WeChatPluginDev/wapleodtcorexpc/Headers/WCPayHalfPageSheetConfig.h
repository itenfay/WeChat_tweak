//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayHalfPageSheetConfig : NSObject
{
    unsigned int _iconType;
    NSString *_title;
    NSString *_tipsContent;
    NSString *_leftButtonTitle;
    CDUnknownBlockType _onLeftButtonClick;
    NSString *_rightButtonTitle;
    CDUnknownBlockType _onRightButtonClick;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType onRightButtonClick; // @synthesize onRightButtonClick=_onRightButtonClick;
@property(retain, nonatomic) NSString *rightButtonTitle; // @synthesize rightButtonTitle=_rightButtonTitle;
@property(copy, nonatomic) CDUnknownBlockType onLeftButtonClick; // @synthesize onLeftButtonClick=_onLeftButtonClick;
@property(retain, nonatomic) NSString *leftButtonTitle; // @synthesize leftButtonTitle=_leftButtonTitle;
@property(retain, nonatomic) NSString *tipsContent; // @synthesize tipsContent=_tipsContent;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned int iconType; // @synthesize iconType=_iconType;

@end

