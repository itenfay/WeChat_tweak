//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderLongVideoListTitleHeaderConfig : NSObject
{
    _Bool _showSepLine;
    _Bool _showRightArrow;
    NSString *_title;
    NSString *_rightArrowText;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *rightArrowText; // @synthesize rightArrowText=_rightArrowText;
@property(nonatomic) _Bool showRightArrow; // @synthesize showRightArrow=_showRightArrow;
@property(nonatomic) _Bool showSepLine; // @synthesize showSepLine=_showSepLine;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

