//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLiveCommentUIStateInfo : NSObject
{
    double _currentDynamicFontScale;
    double _currentCommentTableWidth;
    NSString *_commentlayoutIdentifyKey;
    double _currentCommentTableHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double currentCommentTableHeight; // @synthesize currentCommentTableHeight=_currentCommentTableHeight;
@property(retain, nonatomic) NSString *commentlayoutIdentifyKey; // @synthesize commentlayoutIdentifyKey=_commentlayoutIdentifyKey;
@property(nonatomic) double currentCommentTableWidth; // @synthesize currentCommentTableWidth=_currentCommentTableWidth;
@property(nonatomic) double currentDynamicFontScale; // @synthesize currentDynamicFontScale=_currentDynamicFontScale;
- (void)updateCommentLayoutIdentifyKey;

@end

