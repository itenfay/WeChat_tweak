//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, ZZFLEXSectionModel;

@interface ZZFLEXAngelSectionBaseChainModel : NSObject
{
    NSMutableArray *_listData;
    ZZFLEXSectionModel *_sectionModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ZZFLEXSectionModel *sectionModel; // @synthesize sectionModel=_sectionModel;
@property(retain, nonatomic) NSMutableArray *listData; // @synthesize listData=_listData;
- (CDUnknownBlockType)backgrounColor;
- (CDUnknownBlockType)sectionInsets;
- (CDUnknownBlockType)minimumInteritemSpacing;
- (CDUnknownBlockType)minimumLineSpacing;
- (id)initWithSectionModel:(id)arg1 listData:(id)arg2;

@end

