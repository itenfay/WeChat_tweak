//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderCoverEditOptionModel : NSObject
{
    _Bool _shouldShowPreviewBtn;
    _Bool _forbidModeChange;
    NSString *_titleTips;
    NSString *_descTips;
    double _coverWidHeightRatio;
    double _leftRightMargin;
}

- (void).cxx_destruct;
@property(nonatomic) double leftRightMargin; // @synthesize leftRightMargin=_leftRightMargin;
@property(nonatomic) double coverWidHeightRatio; // @synthesize coverWidHeightRatio=_coverWidHeightRatio;
@property(nonatomic) _Bool forbidModeChange; // @synthesize forbidModeChange=_forbidModeChange;
@property(retain, nonatomic) NSString *descTips; // @synthesize descTips=_descTips;
@property(retain, nonatomic) NSString *titleTips; // @synthesize titleTips=_titleTips;
@property(nonatomic) _Bool shouldShowPreviewBtn; // @synthesize shouldShowPreviewBtn=_shouldShowPreviewBtn;
- (id)init;

@end

