//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIFont;

@interface WCActionAreaVMParams : NSObject
{
    UIFont *_titleFont;
    double _actionAreaWidth;
    double _iconViewLen;
    double _elementSpacing;
}

- (void).cxx_destruct;
@property(nonatomic) double elementSpacing; // @synthesize elementSpacing=_elementSpacing;
@property(nonatomic) double iconViewLen; // @synthesize iconViewLen=_iconViewLen;
@property(nonatomic) double actionAreaWidth; // @synthesize actionAreaWidth=_actionAreaWidth;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;

@end

