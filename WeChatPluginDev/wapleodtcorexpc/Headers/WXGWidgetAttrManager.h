//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface WXGWidgetAttrManager : NSObject
{
    NSDictionary *_textAlignmentMap;
    NSDictionary *_lineBreakModeMap;
    NSDictionary *_contentModeMap;
    NSDictionary *_viewClassNameMap;
}

+ (_Bool)wxgAttrPreprocessOrBindToView:(id)arg1 withAttrName:(id)arg2 attrValue:(id *)arg3 hostView:(id)arg4;
+ (void)wxgWidgetView:(id)arg1 setAttrWithName:(id)arg2 value:(id)arg3 hostView:(id)arg4;
+ (id)getClassNameByTag:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *viewClassNameMap; // @synthesize viewClassNameMap=_viewClassNameMap;
@property(readonly, copy, nonatomic) NSDictionary *contentModeMap; // @synthesize contentModeMap=_contentModeMap;
@property(readonly, copy, nonatomic) NSDictionary *lineBreakModeMap; // @synthesize lineBreakModeMap=_lineBreakModeMap;
@property(readonly, copy, nonatomic) NSDictionary *textAlignmentMap; // @synthesize textAlignmentMap=_textAlignmentMap;
- (id)init;

@end

