//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface MMFinderLiveMoreFunctionItem : NSObject
{
    _Bool _enable;
    _Bool _isSwitchDisabled;
    unsigned int _detailNum;
    unsigned long long _moreFunctionItemType;
    unsigned long long _cellType;
    NSString *_titleStr;
    NSString *_detailStr;
    UIColor *_detailStrColor;
    NSString *_identifier;
    double _height;
    NSString *_imageUrl;
    long long _reportSubElementId;
    long long _moreFuncSubElementId;
    NSString *_redDotPath;
    NSString *_accessibilityIdentifier;
    id _detailExtraInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id detailExtraInfo; // @synthesize detailExtraInfo=_detailExtraInfo;
@property(retain, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(retain, nonatomic) NSString *redDotPath; // @synthesize redDotPath=_redDotPath;
@property(nonatomic) long long moreFuncSubElementId; // @synthesize moreFuncSubElementId=_moreFuncSubElementId;
@property(nonatomic) long long reportSubElementId; // @synthesize reportSubElementId=_reportSubElementId;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(nonatomic) double height; // @synthesize height=_height;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) _Bool isSwitchDisabled; // @synthesize isSwitchDisabled=_isSwitchDisabled;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(nonatomic) unsigned int detailNum; // @synthesize detailNum=_detailNum;
@property(retain, nonatomic) UIColor *detailStrColor; // @synthesize detailStrColor=_detailStrColor;
@property(retain, nonatomic) NSString *detailStr; // @synthesize detailStr=_detailStr;
@property(retain, nonatomic) NSString *titleStr; // @synthesize titleStr=_titleStr;
@property(nonatomic) unsigned long long cellType; // @synthesize cellType=_cellType;
@property(nonatomic) unsigned long long moreFunctionItemType; // @synthesize moreFunctionItemType=_moreFunctionItemType;
- (void)updateCellType:(unsigned long long)arg1;
- (id)initWithMoreFunctionItemType:(unsigned long long)arg1 cellType:(unsigned long long)arg2;

@end

