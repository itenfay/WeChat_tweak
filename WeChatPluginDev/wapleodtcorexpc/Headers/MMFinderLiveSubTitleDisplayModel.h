//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveSubTitleData, NSArray, NSMutableArray, NSString, TextStyleAttributeObj, UIFont;

@interface MMFinderLiveSubTitleDisplayModel : NSObject
{
    _Bool _needUpdate;
    _Bool _needForceRefreshUI;
    long long _subTitleType;
    UIFont *_font;
    unsigned long long _maxLineNum;
    unsigned long long _maxDisplayLineNum;
    double _maxContentWidth;
    TextStyleAttributeObj *_textStyleAttribute;
    unsigned long long _staticSplicingStyle;
    unsigned long long _displayMode;
    NSString *_content;
    NSArray *_contentArrStyles;
    unsigned long long _currentUpdateResult;
    unsigned long long _previousUpdateType;
    unsigned long long _currentUpdateType;
    long long _lastSubTitleLineIndex;
    double _currentMaxContentHeight;
    long long _currentMaxLines;
    unsigned long long _currentSplicingStyle;
    NSMutableArray *_currSubTitleList;
    struct CGSize _contentSize;
}

+ (id)getSplicingSpaceDivision;
+ (_Bool)isSubTitleStartOffsetXValid:(double)arg1;
+ (_Bool)isSubTitleStartLineIndexValid:(long long)arg1;
+ (id)createDisplayContent:(id)arg1 splicingStyle:(unsigned long long)arg2;
+ (id)getContentWithArrStyles:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool needForceRefreshUI; // @synthesize needForceRefreshUI=_needForceRefreshUI;
@property(retain, nonatomic) NSMutableArray *currSubTitleList; // @synthesize currSubTitleList=_currSubTitleList;
@property(nonatomic) unsigned long long currentSplicingStyle; // @synthesize currentSplicingStyle=_currentSplicingStyle;
@property(nonatomic) long long currentMaxLines; // @synthesize currentMaxLines=_currentMaxLines;
@property(nonatomic) double currentMaxContentHeight; // @synthesize currentMaxContentHeight=_currentMaxContentHeight;
@property(nonatomic) _Bool needUpdate; // @synthesize needUpdate=_needUpdate;
@property(nonatomic) long long lastSubTitleLineIndex; // @synthesize lastSubTitleLineIndex=_lastSubTitleLineIndex;
@property(nonatomic) unsigned long long currentUpdateType; // @synthesize currentUpdateType=_currentUpdateType;
@property(nonatomic) unsigned long long previousUpdateType; // @synthesize previousUpdateType=_previousUpdateType;
@property(nonatomic) unsigned long long currentUpdateResult; // @synthesize currentUpdateResult=_currentUpdateResult;
@property(retain, nonatomic) NSArray *contentArrStyles; // @synthesize contentArrStyles=_contentArrStyles;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
@property(nonatomic) unsigned long long staticSplicingStyle; // @synthesize staticSplicingStyle=_staticSplicingStyle;
@property(retain, nonatomic) TextStyleAttributeObj *textStyleAttribute; // @synthesize textStyleAttribute=_textStyleAttribute;
@property(nonatomic) double maxContentWidth; // @synthesize maxContentWidth=_maxContentWidth;
@property(nonatomic) unsigned long long maxDisplayLineNum; // @synthesize maxDisplayLineNum=_maxDisplayLineNum;
@property(nonatomic) unsigned long long maxLineNum; // @synthesize maxLineNum=_maxLineNum;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) long long subTitleType; // @synthesize subTitleType=_subTitleType;
@property(readonly, nonatomic) MMFinderLiveSubTitleData *currentSubTitle;
- (void)clearAllSubTitleLayoutDatas;
- (void)updateCurrSubTitleStartLineIndex:(long long)arg1;
- (void)updateCurrSubTitleStartOffsetX:(double)arg1;
- (void)checkSplicingMarkPosition:(id)arg1 lineIndex:(long long *)arg2 offsetX:(double *)arg3;
- (void)checkFirstCharAfterSubTitleMarkPosition:(id)arg1 lineIndex:(long long *)arg2 offsetX:(double *)arg3;
- (CDStruct_7f320dbc)getNewSubTitleLayoutPositionWithStartLineIndex:(long long)arg1 startOffsetX:(double)arg2 splicingMarkLineIndex:(long long)arg3 splicingMarkOffsetX:(double)arg4 splicingStyle:(unsigned long long)arg5;
- (void)preUpdateCurrentSplicingStyle:(id)arg1 checkLastSubTitleEndLineIndex:(long long *)arg2 checkNewSubTitleStartLineIndex:(long long *)arg3 checkNewSubTitleStartOffsetX:(double *)arg4;
- (id)getDisplayContent:(id)arg1;
- (_Bool)checkSubTitleListContentUpdated:(id)arg1;
- (_Bool)checkSubTitleListIndexUpdated:(id)arg1;
- (_Bool)checkSubTitleListCountUpdated:(id)arg1;
- (void)refreshUI;
- (void)updateSubTitleList:(id)arg1;
- (void)tagNeedForceRefreshUI;
- (id)getDisplayContentArrStyles;
- (id)getContentArrStylesInLineRange:(struct _NSRange)arg1;
- (id)getContentArrStylesAtLine:(unsigned long long)arg1;
- (_Bool)forceRefreshUIIfNeeded;
- (_Bool)forceRefreshUI;
- (_Bool)updateSubTitleDatas:(id)arg1;

@end

