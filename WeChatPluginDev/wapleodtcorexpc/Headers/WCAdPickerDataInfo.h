//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCAdPickerDataInfo : NSObject
{
    unsigned int _deep;
    NSString *_title;
    NSArray *_defaultData;
    NSArray *_transferTable;
    NSArray *_dataList;
}

+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *dataList; // @synthesize dataList=_dataList;
@property(retain, nonatomic) NSArray *transferTable; // @synthesize transferTable=_transferTable;
@property(retain, nonatomic) NSArray *defaultData; // @synthesize defaultData=_defaultData;
@property(nonatomic) unsigned int deep; // @synthesize deep=_deep;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

