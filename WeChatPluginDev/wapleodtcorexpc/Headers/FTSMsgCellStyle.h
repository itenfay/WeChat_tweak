//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor;

@interface FTSMsgCellStyle : NSObject
{
    double _cellHeight;
    double _headImgLen;
    double _displayNameMarginTop;
    double _lineSpace;
    double _displayNameFontSize;
    double _detailTextFontSize;
    UIColor *_displayNameColor;
    UIColor *_detailTextColor;
    double _iconNamePostfixSize;
}

- (void).cxx_destruct;
@property(nonatomic) double iconNamePostfixSize; // @synthesize iconNamePostfixSize=_iconNamePostfixSize;
@property(retain, nonatomic) UIColor *detailTextColor; // @synthesize detailTextColor=_detailTextColor;
@property(retain, nonatomic) UIColor *displayNameColor; // @synthesize displayNameColor=_displayNameColor;
@property(nonatomic) double detailTextFontSize; // @synthesize detailTextFontSize=_detailTextFontSize;
@property(nonatomic) double displayNameFontSize; // @synthesize displayNameFontSize=_displayNameFontSize;
@property(nonatomic) double lineSpace; // @synthesize lineSpace=_lineSpace;
@property(nonatomic) double displayNameMarginTop; // @synthesize displayNameMarginTop=_displayNameMarginTop;
@property(nonatomic) double headImgLen; // @synthesize headImgLen=_headImgLen;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;

@end

