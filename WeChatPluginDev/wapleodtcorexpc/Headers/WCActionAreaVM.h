//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, OrderedDictionary, WCActionAreaVMParams, WCDataItem;

@interface WCActionAreaVM : NSObject
{
    _Bool _enabledWrap;
    _Bool _isDynamicTagEnabled;
    _Bool _isStarEnabled;
    WCDataItem *_dataItem;
    OrderedDictionary *_layoutInfoMap;
    WCActionAreaVMParams *_params;
    NSArray *_elementTypes;
    NSArray *_elementArr;
    NSMutableArray *_elementsRowInfo;
    unsigned long long _scene;
}

+ (_Bool)shouldFetchWeAppContactWithAppUsername:(id)arg1;
+ (id)weAppLabelDisplayTextWithAppUsername:(id)arg1;
+ (_Bool)canShowDeleteButtonWithDataItem:(id)arg1;
+ (_Bool)canShowShareGroupButtonWithDataItem:(id)arg1 isDynamicTagEnabled:(_Bool)arg2;
+ (_Bool)canShowWeAppInfoWithDataItem:(id)arg1;
+ (_Bool)canShowSourceWithDataItem:(id)arg1 showType:(unsigned long long *)arg2 text:(id *)arg3 url:(id *)arg4 backupUrl:(id *)arg5;
+ (_Bool)canShowStarIconWithDataItem:(id)arg1 scene:(unsigned long long)arg2 isStarEnabled:(_Bool)arg3;
+ (id)timeLabelDisplayTextWithDataItem:(id)arg1 scene:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool isStarEnabled; // @synthesize isStarEnabled=_isStarEnabled;
@property(nonatomic) _Bool isDynamicTagEnabled; // @synthesize isDynamicTagEnabled=_isDynamicTagEnabled;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSMutableArray *elementsRowInfo; // @synthesize elementsRowInfo=_elementsRowInfo;
@property(copy, nonatomic) NSArray *elementArr; // @synthesize elementArr=_elementArr;
@property(retain, nonatomic) NSArray *elementTypes; // @synthesize elementTypes=_elementTypes;
@property(retain, nonatomic) WCActionAreaVMParams *params; // @synthesize params=_params;
@property(retain, nonatomic) OrderedDictionary *layoutInfoMap; // @synthesize layoutInfoMap=_layoutInfoMap;
@property(nonatomic) _Bool enabledWrap; // @synthesize enabledWrap=_enabledWrap;
@property(readonly, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (id)displayElementsHashString;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)canShowDeleteButton;
- (_Bool)canShowShareGroupButton;
- (_Bool)shouldFetchWeAppContact;
- (id)weAppLabelDisplayText;
- (_Bool)canShowWeAppInfo;
- (id)sourceBackupUrl;
- (id)sourceUrl;
- (id)sourceText;
- (unsigned long long)sourceShowType;
- (_Bool)canShowSource;
- (_Bool)canShowStarIcon;
- (id)timeLabelDisplayText;
- (void)prepareDisplayElements;
- (id)createElementsRowInfo;
- (id)createElementWraps;
- (void)setupActionAreaElements;
- (double)totalMinWidth;
- (_Bool)canDisplayForOneLine;
- (void)adjustElementsForMultiLine;
- (void)adjustElementsForOneLine;
- (void)calculateLayoutInfoWithParams:(id)arg1;
@property(readonly, nonatomic) unsigned long long totalLine;
- (id)elementTypesAtRow:(unsigned long long)arg1;
- (id)initWithDataItem:(id)arg1 enabledWrap:(_Bool)arg2 scene:(unsigned long long)arg3 isDynamicTagEnabled:(_Bool)arg4 isStarEnabled:(_Bool)arg5;

@end

