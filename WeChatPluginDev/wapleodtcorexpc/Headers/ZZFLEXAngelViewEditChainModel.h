//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface ZZFLEXAngelViewEditChainModel : NSObject
{
    long long _editType;
    NSArray *_listData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *listData; // @synthesize listData=_listData;
@property(nonatomic) long long editType; // @synthesize editType=_editType;
- (id)p_executeWithSectionModel:(id)arg1 viewModel:(id)arg2;
- (CDUnknownBlockType)atIndexPath;
- (CDUnknownBlockType)byViewClassName;
- (CDUnknownBlockType)byDataModel;
- (CDUnknownBlockType)byViewTag;
- (id)initWithType:(long long)arg1 andListData:(id)arg2;

@end

