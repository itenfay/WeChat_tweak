//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayTipsPageSheetConfig : NSObject
{
    NSString *_title;
    NSString *_tipsContent;
    NSString *_leftButtonTitle;
    NSString *_rightButtonTitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *rightButtonTitle; // @synthesize rightButtonTitle=_rightButtonTitle;
@property(retain, nonatomic) NSString *leftButtonTitle; // @synthesize leftButtonTitle=_leftButtonTitle;
@property(retain, nonatomic) NSString *tipsContent; // @synthesize tipsContent=_tipsContent;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

